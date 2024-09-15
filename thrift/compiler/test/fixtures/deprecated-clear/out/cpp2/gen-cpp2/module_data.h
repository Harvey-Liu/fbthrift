/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/deprecated-clear/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_data_h.h>

#include "thrift/compiler/test/fixtures/deprecated-clear/gen-cpp2/module_types.h"

namespace apache { namespace thrift {

template <> struct TEnumDataStorage<::apache::thrift::test::MyEnum> {
  using type = ::apache::thrift::test::MyEnum;
  static constexpr const std::size_t size = 2;
  static constexpr std::array<type, size> values = {{
      type::ME0,
      type::ME1,
  }};
  static constexpr std::array<folly::StringPiece, size> names = {{
      "ME0",
      "ME1",
  }};
};

template <> struct TStructDataStorage<::apache::thrift::test::StructWithDefaultStruct> {
  static constexpr const std::size_t fields_size = 13;
  static const folly::StringPiece name;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;

 private:
  // The following fields describe internal storage metadata, and are private to
  // prevent user logic from accessing them, but they can be inspected by
  // debuggers.
  static const std::array<folly::StringPiece, fields_size> storage_names;
  // -1 if the field has no isset.
  static const std::array<int, fields_size> isset_indexes;
};

}} // apache::thrift
