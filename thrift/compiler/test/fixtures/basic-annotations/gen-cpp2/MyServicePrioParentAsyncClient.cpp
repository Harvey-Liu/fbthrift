/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic-annotations/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/MyServicePrioParentAsyncClient.h"

#include <thrift/lib/cpp2/gen/client_cpp.h>

namespace cpp2 {
typedef apache::thrift::ThriftPresult<false> MyServicePrioParent_ping_pargs;
typedef apache::thrift::ThriftPresult<true> MyServicePrioParent_ping_presult;
typedef apache::thrift::ThriftPresult<false> MyServicePrioParent_pong_pargs;
typedef apache::thrift::ThriftPresult<true> MyServicePrioParent_pong_presult;
} // cpp2
template <typename Protocol_, typename RpcOptions>
void apache::thrift::Client<::cpp2::MyServicePrioParent>::pingT(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback) {

  ::cpp2::MyServicePrioParent_ping_pargs args;
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "ping",
                ::apache::thrift::FunctionQualifier::Unspecified,
                "MyServicePrioParent");
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, Protocol_>(prot, std::forward<RpcOptions>(rpcOptions), std::move(callback), contextStack, std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata), writer, sizer);
}

template <typename Protocol_, typename RpcOptions>
void apache::thrift::Client<::cpp2::MyServicePrioParent>::pongT(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback) {

  ::cpp2::MyServicePrioParent_pong_pargs args;
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "pong",
                ::apache::thrift::FunctionQualifier::Unspecified,
                "MyServicePrioParent");
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, Protocol_>(prot, std::forward<RpcOptions>(rpcOptions), std::move(callback), contextStack, std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata), writer, sizer);
}



void apache::thrift::Client<::cpp2::MyServicePrioParent>::ping(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  ping(rpcOptions, std::move(callback));
}

void apache::thrift::Client<::cpp2::MyServicePrioParent>::ping(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  auto [ctx, header] = pingCtx(&rpcOptions);
  apache::thrift::RequestCallback::Context callbackContext;
  callbackContext.protocolId =
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto* contextStack = ctx.get();
  if (callback) {
    callbackContext.ctx = std::move(ctx);
  }
  auto wrappedCallback = apache::thrift::toRequestClientCallbackPtr(std::move(callback), std::move(callbackContext));
  pingImpl(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback));
}

void apache::thrift::Client<::cpp2::MyServicePrioParent>::pingImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions) {
  switch (apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      if (stealRpcOptions) {
        pingT(&writer, std::move(rpcOptions), std::move(header), contextStack, std::move(callback));
      } else {
        pingT(&writer, rpcOptions, std::move(header), contextStack, std::move(callback));
      }
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      if (stealRpcOptions) {
        pingT(&writer, std::move(rpcOptions), std::move(header), contextStack, std::move(callback));
      } else {
        pingT(&writer, rpcOptions, std::move(header), contextStack, std::move(callback));
      }
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

std::pair<std::unique_ptr<::apache::thrift::ContextStack>, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::cpp2::MyServicePrioParent>::pingCtx(apache::thrift::RpcOptions* rpcOptions) {
  auto header = std::make_shared<apache::thrift::transport::THeader>(
      apache::thrift::transport::THeader::ALLOW_BIG_FRAMES);
  header->setProtocolId(channel_->getProtocolId());
  if (rpcOptions) {
    header->setHeaders(rpcOptions->releaseWriteHeaders());
  }

  auto ctx = apache::thrift::ContextStack::createWithClientContext(
      handlers_,
      getServiceName(),
      "MyServicePrioParent.ping",
      *header);

  return {std::move(ctx), std::move(header)};
}

void apache::thrift::Client<::cpp2::MyServicePrioParent>::sync_ping() {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_ping(rpcOptions);
}

void apache::thrift::Client<::cpp2::MyServicePrioParent>::sync_ping(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = pingCtx(&rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
  callback.waitUntilDone(
    evb,
    [&] {
      pingImpl(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback));
    });

  if (returnState.isException()) {
    returnState.exception().throw_exception();
  }
  returnState.resetProtocolId(protocolId);
  returnState.resetCtx(std::move(ctxAndHeader.first));
  SCOPE_EXIT {
    if (returnState.header() && !returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(returnState.header()->releaseHeaders());
    }
  };
  return folly::fibers::runInMainContext([&] {
      recv_ping(returnState);
  });
}


folly::Future<folly::Unit> apache::thrift::Client<::cpp2::MyServicePrioParent>::future_ping() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_ping(rpcOptions);
}

folly::SemiFuture<folly::Unit> apache::thrift::Client<::cpp2::MyServicePrioParent>::semifuture_ping() {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_ping(rpcOptions);
}

folly::Future<folly::Unit> apache::thrift::Client<::cpp2::MyServicePrioParent>::future_ping(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<folly::Unit> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(promise), recv_wrapped_ping, channel_);
  ping(rpcOptions, std::move(callback));
  return future;
}

folly::SemiFuture<folly::Unit> apache::thrift::Client<::cpp2::MyServicePrioParent>::semifuture_ping(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_ping, channel_);
  auto callback = std::move(callbackAndFuture.first);
  ping(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::cpp2::MyServicePrioParent>::header_future_ping(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(promise), recv_wrapped_ping, channel_);
  ping(rpcOptions, std::move(callback));
  return future;
}

folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::cpp2::MyServicePrioParent>::header_semifuture_ping(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_ping, channel_);
  auto callback = std::move(callbackAndFuture.first);
  ping(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

void apache::thrift::Client<::cpp2::MyServicePrioParent>::ping(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  ping(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::cpp2::MyServicePrioParent>::recv_wrapped_ping(::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::cpp2::MyServicePrioParent_ping_presult;
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void apache::thrift::Client<::cpp2::MyServicePrioParent>::recv_ping(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_ping(state);
  if (ew) {
    ew.throw_exception();
  }
}

void apache::thrift::Client<::cpp2::MyServicePrioParent>::recv_instance_ping(::apache::thrift::ClientReceiveState& state) {
  recv_ping(state);
}

folly::exception_wrapper apache::thrift::Client<::cpp2::MyServicePrioParent>::recv_instance_wrapped_ping(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_ping(state);
}

void apache::thrift::Client<::cpp2::MyServicePrioParent>::pong(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  pong(rpcOptions, std::move(callback));
}

void apache::thrift::Client<::cpp2::MyServicePrioParent>::pong(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  auto [ctx, header] = pongCtx(&rpcOptions);
  apache::thrift::RequestCallback::Context callbackContext;
  callbackContext.protocolId =
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto* contextStack = ctx.get();
  if (callback) {
    callbackContext.ctx = std::move(ctx);
  }
  auto wrappedCallback = apache::thrift::toRequestClientCallbackPtr(std::move(callback), std::move(callbackContext));
  pongImpl(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback));
}

void apache::thrift::Client<::cpp2::MyServicePrioParent>::pongImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions) {
  switch (apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      if (stealRpcOptions) {
        pongT(&writer, std::move(rpcOptions), std::move(header), contextStack, std::move(callback));
      } else {
        pongT(&writer, rpcOptions, std::move(header), contextStack, std::move(callback));
      }
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      if (stealRpcOptions) {
        pongT(&writer, std::move(rpcOptions), std::move(header), contextStack, std::move(callback));
      } else {
        pongT(&writer, rpcOptions, std::move(header), contextStack, std::move(callback));
      }
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

std::pair<std::unique_ptr<::apache::thrift::ContextStack>, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::cpp2::MyServicePrioParent>::pongCtx(apache::thrift::RpcOptions* rpcOptions) {
  auto header = std::make_shared<apache::thrift::transport::THeader>(
      apache::thrift::transport::THeader::ALLOW_BIG_FRAMES);
  header->setProtocolId(channel_->getProtocolId());
  if (rpcOptions) {
    header->setHeaders(rpcOptions->releaseWriteHeaders());
  }

  auto ctx = apache::thrift::ContextStack::createWithClientContext(
      handlers_,
      getServiceName(),
      "MyServicePrioParent.pong",
      *header);

  return {std::move(ctx), std::move(header)};
}

void apache::thrift::Client<::cpp2::MyServicePrioParent>::sync_pong() {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_pong(rpcOptions);
}

void apache::thrift::Client<::cpp2::MyServicePrioParent>::sync_pong(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = pongCtx(&rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
  callback.waitUntilDone(
    evb,
    [&] {
      pongImpl(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback));
    });

  if (returnState.isException()) {
    returnState.exception().throw_exception();
  }
  returnState.resetProtocolId(protocolId);
  returnState.resetCtx(std::move(ctxAndHeader.first));
  SCOPE_EXIT {
    if (returnState.header() && !returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(returnState.header()->releaseHeaders());
    }
  };
  return folly::fibers::runInMainContext([&] {
      recv_pong(returnState);
  });
}


folly::Future<folly::Unit> apache::thrift::Client<::cpp2::MyServicePrioParent>::future_pong() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_pong(rpcOptions);
}

folly::SemiFuture<folly::Unit> apache::thrift::Client<::cpp2::MyServicePrioParent>::semifuture_pong() {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_pong(rpcOptions);
}

folly::Future<folly::Unit> apache::thrift::Client<::cpp2::MyServicePrioParent>::future_pong(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<folly::Unit> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(promise), recv_wrapped_pong, channel_);
  pong(rpcOptions, std::move(callback));
  return future;
}

folly::SemiFuture<folly::Unit> apache::thrift::Client<::cpp2::MyServicePrioParent>::semifuture_pong(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_pong, channel_);
  auto callback = std::move(callbackAndFuture.first);
  pong(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::cpp2::MyServicePrioParent>::header_future_pong(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(promise), recv_wrapped_pong, channel_);
  pong(rpcOptions, std::move(callback));
  return future;
}

folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::cpp2::MyServicePrioParent>::header_semifuture_pong(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_pong, channel_);
  auto callback = std::move(callbackAndFuture.first);
  pong(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

void apache::thrift::Client<::cpp2::MyServicePrioParent>::pong(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  pong(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::cpp2::MyServicePrioParent>::recv_wrapped_pong(::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::cpp2::MyServicePrioParent_pong_presult;
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void apache::thrift::Client<::cpp2::MyServicePrioParent>::recv_pong(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_pong(state);
  if (ew) {
    ew.throw_exception();
  }
}

void apache::thrift::Client<::cpp2::MyServicePrioParent>::recv_instance_pong(::apache::thrift::ClientReceiveState& state) {
  recv_pong(state);
}

folly::exception_wrapper apache::thrift::Client<::cpp2::MyServicePrioParent>::recv_instance_wrapped_pong(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_pong(state);
}


