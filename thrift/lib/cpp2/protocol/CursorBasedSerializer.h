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

#pragma once

#include <folly/io/Cursor.h>
#include <folly/io/IOBufQueue.h>
#include <thrift/lib/cpp2/protocol/Serializer.h>
#include <thrift/lib/cpp2/protocol/detail/CursorBasedSerialization.h>
#include <thrift/lib/cpp2/type/NativeType.h>
#include <thrift/lib/cpp2/type/ThriftType.h>

/**
 * Cursor serialization for Thrift objects.
 * Provides a way to read and write Thrift types without having to materialize
 * them in memory. This can result in CPU / memory savings depending on the
 * access pattern, particularly when interfacing with another data
 * representation.
 *
 * This API derives its efficiency from ordering requirements on reading and
 * writing the data. Fields can only be read / written in order of increasing
 * field id in the struct. (Skipping fields is permitted). Data serialized using
 * other sources requires fields to be sorted in field id order in the IDL
 * file, or the struct to be annotated with `@thrift.SerializeInFieldIdOrder`.
 *
 * The general pattern is paired calls to beginWrite()/endWrite() (or
 * beginRead/endRead) which return a sub-cursor that is then passed in to the
 * end function, though scalars and materialized types can be read/written
 * directly.
 *
 * test/CursorBasedSerializerTest.cpp has several complete examples of usage.
 */

namespace apache::thrift {

/**
 * Manages the lifetime of a Thrift object being used with cursor
 * de/serialization.
 * Must outlive the reader/writer objects it returns.
 */
template <typename T>
class CursorSerializationWrapper {
  using Tag = type::infer_tag<T>;
  static_assert(
      type::is_a_v<Tag, type::structured_c>, "T must be a thrift class");

 public:
  CursorSerializationWrapper() = default;

  explicit CursorSerializationWrapper(std::unique_ptr<folly::IOBuf> serialized)
      : serializedData_(std::move(serialized)) {}

  /**
   * Object write path (traditional Thrift serialization)
   * Serializes from a Thrift object.
   */
  /* implicit */ CursorSerializationWrapper(
      const T& t, ExternalBufferSharing sharing = COPY_EXTERNAL_BUFFER) {
    BinarySerializer::serialize(t, &queue_, sharing);
    serializedData_ = queue_.move();
  }

  /**
   * Object read path (traditional Thrift deserialization)
   * Deserializes into a (returned) Thrift object.
   */
  T deserialize() const {
    assert(serializedData_);
    T ret;
    BinarySerializer::deserialize(serializedData_.get(), ret);
    return ret;
  }

  /**
   * Cursor read path
   * Template parameter determines whether chained buffers are supported.
   * Setting to false allows chained buffers and disables string_view API.
   */
  template <bool Contiguous = true>
  StructuredCursorReader<Tag, Contiguous> beginRead() const {
    assert(serializedData_);
    return StructuredCursorReader<Tag, Contiguous>(*serializedData_);
  }
  template <bool Contiguous>
  void endRead(StructuredCursorReader<Tag, Contiguous>&& reader) const {
    reader.finalize();
  }

  /** Access to serialized data */
  const folly::IOBuf& serializedData() const& {
    assert(serializedData_);
    return *serializedData_;
  }
  std::unique_ptr<folly::IOBuf> serializedData() && {
    assert(serializedData_);
    return std::move(serializedData_);
  }

 private:
  std::unique_ptr<folly::IOBuf> serializedData_;
  folly::IOBufQueue queue_;
};

/**
 * Cursor deserializer for Thrift structs and unions.
 * Typically constructed from a CursorSerializationWrapper.
 */
template <typename Tag, bool Contiguous = true>
class StructuredCursorReader : detail::BaseCursorReader {
  static_assert(
      type::is_a_v<Tag, type::structured_c>, "T must be a thrift class");
  using T = type::native_type<Tag>;

  template <typename Ident>
  using type_tag = op::get_type_tag<T, Ident>;
  template <typename Ident>
  using native_type = op::get_native_type<T, Ident>;

  template <typename TypeClass, typename Ident>
  using enable_for =
      typename std::enable_if_t<type::is_a_v<type_tag<Ident>, TypeClass>, int>;

  template <typename Ident>
  using enable_string_view = typename std::enable_if_t<
      Contiguous && type::is_a_v<type_tag<Ident>, type::string_c>,
      int>;

  template <typename U, typename Ident>
  using maybe_optional = std::conditional_t<
      type::is_optional_or_union_field_v<T, Ident>,
      std::optional<U>,
      U>;

  template <typename Ident>
  using bool_if_optional = std::
      conditional_t<type::is_optional_or_union_field_v<T, Ident>, bool, void>;

 public:
  /**
   * Materializes a field into its native type (like in the generated struct).
   * Optional and union fields are wrapped in std::optional.
   *
   * Ex:
   *  StructuredCursorReader<OuterStruct> reader;
   *  std::string val1 = reader.read<ident::unqualified_string>();
   *  std::optional<InnerStruct> val2 = reader.read<ident::optional_struct>();
   *  Union val3 = reader.read<ident::unqualified_union>();
   *  StructuredCursorReader<Union> unionReader;
   *  std::optional<int32_t> val4 = unionReader.read<ident::int>();
   */
  template <typename Ident>
  maybe_optional<native_type<Ident>, Ident> read() {
    maybe_optional<native_type<Ident>, Ident> value;
    readField<Ident>(
        [&] {
          op::decode<type_tag<Ident>>(protocol_, detail::maybe_emplace(value));
        },
        value);
    return value;
  }

  /**
   * These methods allow reading a field in-place, which may be more efficient.
   * Optional and union fields return bool to indicate whether the field was
   * present; the value is not modified if the field is absent.
   *
   * Ex:
   *  StructuredCursorReader<Struct> reader;
   *  std::string val1;
   *  reader.read<ident::unqualified_string>(val1);
   *  int32_t val2;
   *  if (reader.read<ident::optional_int>(val2)) { use(val2); }
   *  // else val2 is still uninitialized
   */

  /** numeric types */

  template <typename Ident, enable_for<type::number_c, Ident> = 0>
  [[nodiscard]] bool_if_optional<Ident> read(native_type<Ident>& value) {
    return readField<Ident>(
        [&] { op::decode<type_tag<Ident>>(protocol_, value); }, value);
  }

  /** string/binary */

  template <typename Ident, enable_string_view<Ident> = 0>
  [[nodiscard]] bool_if_optional<Ident> read(std::string_view& value);

  template <typename Ident, enable_for<type::string_c, Ident> = 0>
  [[nodiscard]] bool_if_optional<Ident> read(std::string& value) {
    return readField<Ident>([&] { protocol_.readString(value); }, value);
  }

  template <typename Ident, enable_for<type::string_c, Ident> = 0>
  [[nodiscard]] bool_if_optional<Ident> read(folly::IOBuf& value) {
    return readField<Ident>([&] { protocol_.readBinary(value); }, value);
  }

  /** union type accessor */

  template <
      typename...,
      typename U = T,
      typename = std::enable_if_t<is_thrift_union_v<U>>>
  auto readType() -> typename U::Type {
    return static_cast<typename T::Type>(readState_.fieldId);
  }

  // End public API
 private:
  explicit StructuredCursorReader(const folly::IOBuf& c)
      : StructuredCursorReader([&] {
          folly::io::Cursor cursor(&c);
          BinaryProtocolReader reader;
          reader.setInput(cursor);
          return reader;
        }()) {
    if (Contiguous && c.isChained()) {
      folly::throw_exception<std::runtime_error>(
          "Chained buffer passed to contiguous reader.");
    }
  }
  explicit StructuredCursorReader(BinaryProtocolReader&& p)
      : BaseCursorReader(std::move(p)) {
    readState_.readStructBegin(&protocol_);
    readState_.readFieldBegin(&protocol_);
  }
  StructuredCursorReader() { readState_.fieldType = TType::T_STOP; }

  void finalize() {
    checkState(State::Active);
    if (readState_.fieldType != TType::T_STOP) {
      protocol_.skip(readState_.fieldType);
      readState_.readFieldEnd(&protocol_);
      // Because there's no struct begin marker in Binary protocol this skips
      // the rest of the struct.
      protocol_.skip(TType::T_STRUCT);
    }
    readState_.readStructEnd(&protocol_);
    state_ = State::Done;
  }

  template <typename Ident>
  bool beforeReadField() {
    checkState(State::Active);

    using field_id = op::get_field_id<T, Ident>;
    static_assert(field_id::value > FieldId{0}, "FieldId must be positive");
    if (field_id::value <= fieldId_) {
      folly::throw_exception<std::runtime_error>("Reading field out of order");
    }
    fieldId_ = field_id::value;

    while (readState_.fieldType != TType::T_STOP &&
           FieldId{readState_.fieldId} < field_id::value) {
      readState_.readFieldEnd(&protocol_);
      apache::thrift::skip(protocol_, readState_.fieldType);
      int16_t lastRead = readState_.fieldId;
      readState_.readFieldBegin(&protocol_);
      if (lastRead >= readState_.fieldId) {
        folly::throw_exception<std::runtime_error>(
            "Reading fields that were serialized out of order");
      }
      lastRead = readState_.fieldId;
    }

    if (FieldId{readState_.fieldId} != field_id::value) {
      return false;
    }
    if (readState_.fieldType != op::typeTagToTType<type_tag<Ident>>) {
      folly::throw_exception<std::runtime_error>(fmt::format(
          "Field type mismatch: expected {}, got {}.",
          readState_.fieldType,
          op::typeTagToTType<type_tag<Ident>>));
    }
    return true;
  }

  template <typename>
  void afterReadField() {
    readState_.readFieldEnd(&protocol_);
    readState_.readFieldBegin(&protocol_);
  }

  template <typename Ident, typename F, typename U>
  bool_if_optional<Ident> readField(F&& f, U& val) {
    bool ret = [&] {
      if (!beforeReadField<Ident>()) {
        return false;
      }
      f();
      afterReadField<Ident>();
      return true;
    }();
    if constexpr (type::is_optional_or_union_field_v<T, Ident>) {
      return ret;
    } else if (ret) {
    } else if (type::is_terse_field_v<T, Ident>) {
      val = *op::get<Ident>(op::getIntrinsicDefault<T>());
    } else {
      val = *op::get<Ident>(op::getDefault<T>());
    }
  }

 private:
  // Last field id the caller tried to read.
  FieldId fieldId_{0};
  // Contains last field id read from the buffer.
  BinaryProtocolReader::StructReadState readState_;

  friend class CursorSerializationWrapper<T>;
};

/**
 * Adapter (for use with `@cpp.Adapter` annotation) that permits using this
 * serialization with Thrift RPC.
 */
class CursorSerializationAdapter {
 public:
  template <typename T>
  static CursorSerializationWrapper<T> fromThrift(const T& t);
  template <typename T>
  static T toThrift(const CursorSerializationWrapper<T>& w);

  template <typename Tag, typename Protocol, typename T>
  static uint32_t encode(
      Protocol& prot_, const CursorSerializationWrapper<T>& wrapper) {
    if constexpr (std::is_same_v<Protocol, BinaryProtocolWriter>) {
      return prot_.writeRaw(wrapper.serializedData());
    } else {
      folly::throw_exception<std::runtime_error>(
          "Single pass serialization only supports binary protocol.");
    }
  }

  template <typename Tag, typename Protocol, typename T>
  static void decode(Protocol& prot_, CursorSerializationWrapper<T>& wrapper) {
    if constexpr (std::is_same_v<Protocol, BinaryProtocolReader>) {
      std::unique_ptr<folly::IOBuf> buf;
      folly::copy(prot_.getCursor())
          .cloneAtMost(buf, std::numeric_limits<size_t>::max());
      // -1 to leave the stop marker for the presult struct when used in an RPC.
      prot_.skipBytes(buf->computeChainDataLength() - 1);

      if constexpr (folly::kIsDebug) {
        // Check that the buffer only contains one struct in it (without
        // advancing the real cursor).
        Protocol protForDebug;
        protForDebug.setInput(buf.get());
        protForDebug.skip(protocol::T_STRUCT);
        DCHECK_LE(
            buf->computeChainDataLength(), protForDebug.getCursorPosition() + 1)
            << "Cursor serialization only supports messages containing a single struct or union.";
      }

      wrapper = CursorSerializationWrapper<T>{std::move(buf)};
    } else {
      folly::throw_exception<std::runtime_error>(
          "Single pass serialization only supports binary protocol.");
    }
  }

  template <bool ZC, typename Tag, typename Protocol, typename T>
  static uint32_t serializedSize(
      Protocol&, const CursorSerializationWrapper<T>& wrapper) {
    return ZC ? 0 : wrapper.serializedData().computeChainDataLength();
  }
};

// End public API

template <typename Tag, bool Contiguous>
template <
    typename Ident,
    typename StructuredCursorReader<Tag, Contiguous>::
        template enable_string_view<Ident>>
typename StructuredCursorReader<Tag, Contiguous>::template bool_if_optional<
    Ident>
StructuredCursorReader<Tag, Contiguous>::read(std::string_view& value) {
  return readField<Ident>(
      [&] {
        int32_t size;
        protocol_.readI32(size);
        if (size < 0) {
          TProtocolException::throwNegativeSize();
        }
        folly::io::Cursor c = protocol_.getCursor();
        if (static_cast<size_t>(size) >= c.length()) {
          TProtocolException::throwTruncatedData();
        }
        value = std::string_view(reinterpret_cast<const char*>(c.data()), size);
        protocol_.skipBytes(size);
      },
      value);
}

} // namespace apache::thrift
