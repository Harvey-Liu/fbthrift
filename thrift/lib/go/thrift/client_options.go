/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package thrift

import (
	"crypto/tls"
	"net"
	"time"
)

// clientOptions thrift and connectivity options for the thrift client
type clientOptions struct {
	protocol          ProtocolID
	transport         TransportID
	persistentHeaders map[string]string
	identity          string
	timeout           time.Duration
	conn              net.Conn
}

// ClientOption is a single configuration setting for the thrift client
type ClientOption func(*clientOptions) error

// WithProtocolID sets protocol to given protocolID
func WithProtocolID(id ProtocolID) ClientOption {
	return func(opts *clientOptions) error {
		opts.protocol = id
		return nil
	}
}

// WithHeader sets the transport to Header, protocol Header is implied here.
func WithHeader() ClientOption {
	return func(opts *clientOptions) error {
		opts.transport = TransportIDHeader
		return nil
	}
}

// WithUpgradeToRocket sets the protocol UpgradeToRocket is implied here.
func WithUpgradeToRocket() ClientOption {
	return func(opts *clientOptions) error {
		opts.transport = TransportIDUpgradeToRocket
		return nil
	}
}

// WithPersistentHeader sets a Header persistent info value
func WithPersistentHeader(name, value string) ClientOption {
	return func(opts *clientOptions) error {
		opts.persistentHeaders[name] = value
		return nil
	}
}

// WithIdentity sets the Header identity field
func WithIdentity(name string) ClientOption {
	return func(opts *clientOptions) error {
		opts.identity = name
		return nil
	}
}

// WithDialer specifies the remote connection that the thrift
// client should connect to should be resolved via the given function
func WithDialer(d func() (net.Conn, error)) ClientOption {
	return func(opts *clientOptions) error {
		conn, err := d()
		if err != nil {
			return err
		}
		opts.conn = conn
		return nil
	}
}

// WithTimeout sets deadline duration for I/O operations
// (see https://golang.org/pkg/net/#Conn). Note that
// this timeout is not a connection timeout as it is
// not honored during Dial operation.
func WithTimeout(timeout time.Duration) ClientOption {
	return func(opts *clientOptions) error {
		opts.timeout = timeout
		return nil
	}
}

// WithConn sets the connection to use for the thrift client.
func WithConn(conn net.Conn) ClientOption {
	return func(opts *clientOptions) error {
		opts.conn = conn
		return nil
	}
}

// DialTLS dials and returns a TLS connection to the given address, including APLN for
func DialTLS(addr string, timeout time.Duration, tlsConfig *tls.Config) (net.Conn, error) {
	dialer := net.Dialer{Timeout: timeout}
	conn, err := dialer.Dial("tcp", addr)
	if err != nil {
		return nil, err
	}
	config := tlsConfig.Clone()
	AddALPNForTransport(config)
	return tls.Client(conn, config), nil
}

// newOptions creates a new options objects and inits it
func newOptions(opts ...ClientOption) (*clientOptions, error) {
	res := &clientOptions{
		protocol:          ProtocolIDCompact,
		transport:         TransportIDHeader,
		persistentHeaders: map[string]string{},
	}
	for _, opt := range opts {
		if err := opt(res); err != nil {
			return nil, err
		}
	}
	return res, nil
}

func setOptions(proto Protocol, options *clientOptions) error {
	for name, value := range options.persistentHeaders {
		proto.SetPersistentHeader(name, value)
	}
	if err := proto.SetProtocolID(options.protocol); err != nil {
		return err
	}
	SetIdentity(proto, options.identity)
	proto.SetTimeout(options.timeout)
	return nil
}

// NewClient will return a connected thrift protocol object.
// Effectively, this is an open thrift connection to a server.
// A thrift client can use this connection to communicate with a server.
func NewClient(opts ...ClientOption) (Protocol, error) {
	options, err := newOptions(opts...)
	if err != nil {
		return nil, err
	}
	switch options.transport {
	case TransportIDHeader:
		trans, err := NewSocket(SocketConn(options.conn))
		if err != nil {
			return nil, err
		}
		proto, err := NewHeaderProtocol(trans)
		if err != nil {
			return nil, err
		}
		if err := setOptions(proto, options); err != nil {
			return nil, err
		}
		return proto, nil
	case TransportIDRocket:
		conn, err := NewSocket(SocketConn(options.conn))
		if err != nil {
			return nil, err
		}
		protocol, err := NewRocketProtocol(conn)
		if err != nil {
			return nil, err
		}
		if err := setOptions(protocol, options); err != nil {
			return nil, err
		}
		return protocol, nil
	case TransportIDUpgradeToRocket:
		conn, err := NewSocket(SocketConn(options.conn))
		if err != nil {
			return nil, err
		}
		protocol, err := NewUpgradeToRocketProtocol(conn)
		if err != nil {
			return nil, err
		}
		if err := setOptions(protocol, options); err != nil {
			return nil, err
		}
		return protocol, nil
	default:
		panic("framed and unframed transport are not supported")
	}
}
