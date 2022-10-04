/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/emptiable/src/simple.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/emptiable/gen-cpp2/simple_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

namespace apache {
namespace thrift {

const std::array<::apache::thrift::test::MyEnum, 2> TEnumDataStorage<::apache::thrift::test::MyEnum>::values = {{
  type::ME0,
  type::ME1,
}};
const std::array<folly::StringPiece, 2> TEnumDataStorage<::apache::thrift::test::MyEnum>::names = {{
  "ME0",
  "ME1",
}};

const std::array<folly::StringPiece, 0> TStructDataStorage<::apache::thrift::test::MyStruct>::fields_names = {{
}};
const std::array<int16_t, 0> TStructDataStorage<::apache::thrift::test::MyStruct>::fields_ids = {{
}};
const std::array<protocol::TType, 0> TStructDataStorage<::apache::thrift::test::MyStruct>::fields_types = {{
}};
const std::array<folly::StringPiece, 0> TStructDataStorage<::apache::thrift::test::MyStruct>::storage_names = {{
}};
const std::array<int, 0> TStructDataStorage<::apache::thrift::test::MyStruct>::isset_indexes = {{
}};

const std::array<folly::StringPiece, 14> TStructDataStorage<::apache::thrift::test::EmptiableStruct>::fields_names = {{
  "bool_field",
  "byte_field",
  "short_field",
  "int_field",
  "long_field",
  "float_field",
  "double_field",
  "string_field",
  "binary_field",
  "enum_field",
  "list_field",
  "set_field",
  "map_field",
  "struct_field",
}};
const std::array<int16_t, 14> TStructDataStorage<::apache::thrift::test::EmptiableStruct>::fields_ids = {{
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
}};
const std::array<protocol::TType, 14> TStructDataStorage<::apache::thrift::test::EmptiableStruct>::fields_types = {{
  TType::T_BOOL,
  TType::T_BYTE,
  TType::T_I16,
  TType::T_I32,
  TType::T_I64,
  TType::T_FLOAT,
  TType::T_DOUBLE,
  TType::T_STRING,
  TType::T_STRING,
  TType::T_I32,
  TType::T_LIST,
  TType::T_SET,
  TType::T_MAP,
  TType::T_STRUCT,
}};
const std::array<folly::StringPiece, 14> TStructDataStorage<::apache::thrift::test::EmptiableStruct>::storage_names = {{
  "__fbthrift_field_bool_field",
  "__fbthrift_field_byte_field",
  "__fbthrift_field_short_field",
  "__fbthrift_field_int_field",
  "__fbthrift_field_long_field",
  "__fbthrift_field_float_field",
  "__fbthrift_field_double_field",
  "__fbthrift_field_string_field",
  "__fbthrift_field_binary_field",
  "__fbthrift_field_enum_field",
  "__fbthrift_field_list_field",
  "__fbthrift_field_set_field",
  "__fbthrift_field_map_field",
  "__fbthrift_field_struct_field",
}};
const std::array<int, 14> TStructDataStorage<::apache::thrift::test::EmptiableStruct>::isset_indexes = {{
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
}};

const std::array<folly::StringPiece, 14> TStructDataStorage<::apache::thrift::test::EmptiableTerseStruct>::fields_names = {{
  "bool_field",
  "byte_field",
  "short_field",
  "int_field",
  "long_field",
  "float_field",
  "double_field",
  "string_field",
  "binary_field",
  "enum_field",
  "list_field",
  "set_field",
  "map_field",
  "struct_field",
}};
const std::array<int16_t, 14> TStructDataStorage<::apache::thrift::test::EmptiableTerseStruct>::fields_ids = {{
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
}};
const std::array<protocol::TType, 14> TStructDataStorage<::apache::thrift::test::EmptiableTerseStruct>::fields_types = {{
  TType::T_BOOL,
  TType::T_BYTE,
  TType::T_I16,
  TType::T_I32,
  TType::T_I64,
  TType::T_FLOAT,
  TType::T_DOUBLE,
  TType::T_STRING,
  TType::T_STRING,
  TType::T_I32,
  TType::T_LIST,
  TType::T_SET,
  TType::T_MAP,
  TType::T_STRUCT,
}};
const std::array<folly::StringPiece, 14> TStructDataStorage<::apache::thrift::test::EmptiableTerseStruct>::storage_names = {{
  "__fbthrift_field_bool_field",
  "__fbthrift_field_byte_field",
  "__fbthrift_field_short_field",
  "__fbthrift_field_int_field",
  "__fbthrift_field_long_field",
  "__fbthrift_field_float_field",
  "__fbthrift_field_double_field",
  "__fbthrift_field_string_field",
  "__fbthrift_field_binary_field",
  "__fbthrift_field_enum_field",
  "__fbthrift_field_list_field",
  "__fbthrift_field_set_field",
  "__fbthrift_field_map_field",
  "__fbthrift_field_struct_field",
}};
const std::array<int, 14> TStructDataStorage<::apache::thrift::test::EmptiableTerseStruct>::isset_indexes = {{
  -1,
  -1,
  -1,
  -1,
  -1,
  -1,
  -1,
  -1,
  -1,
  -1,
  -1,
  -1,
  -1,
  -1,
}};

const std::array<folly::StringPiece, 14> TStructDataStorage<::apache::thrift::test::NotEmptiableStruct>::fields_names = {{
  "bool_field",
  "byte_field",
  "short_field",
  "int_field",
  "long_field",
  "float_field",
  "double_field",
  "string_field",
  "binary_field",
  "enum_field",
  "list_field",
  "set_field",
  "map_field",
  "struct_field",
}};
const std::array<int16_t, 14> TStructDataStorage<::apache::thrift::test::NotEmptiableStruct>::fields_ids = {{
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
}};
const std::array<protocol::TType, 14> TStructDataStorage<::apache::thrift::test::NotEmptiableStruct>::fields_types = {{
  TType::T_BOOL,
  TType::T_BYTE,
  TType::T_I16,
  TType::T_I32,
  TType::T_I64,
  TType::T_FLOAT,
  TType::T_DOUBLE,
  TType::T_STRING,
  TType::T_STRING,
  TType::T_I32,
  TType::T_LIST,
  TType::T_SET,
  TType::T_MAP,
  TType::T_STRUCT,
}};
const std::array<folly::StringPiece, 14> TStructDataStorage<::apache::thrift::test::NotEmptiableStruct>::storage_names = {{
  "__fbthrift_field_bool_field",
  "__fbthrift_field_byte_field",
  "__fbthrift_field_short_field",
  "__fbthrift_field_int_field",
  "__fbthrift_field_long_field",
  "__fbthrift_field_float_field",
  "__fbthrift_field_double_field",
  "__fbthrift_field_string_field",
  "__fbthrift_field_binary_field",
  "__fbthrift_field_enum_field",
  "__fbthrift_field_list_field",
  "__fbthrift_field_set_field",
  "__fbthrift_field_map_field",
  "__fbthrift_field_struct_field",
}};
const std::array<int, 14> TStructDataStorage<::apache::thrift::test::NotEmptiableStruct>::isset_indexes = {{
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
}};

} // namespace thrift
} // namespace apache
