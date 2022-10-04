/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/patch/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/patch/gen-cpp2/module_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

namespace apache {
namespace thrift {

const std::array<::test::fixtures::patch::MyEnum, 1> TEnumDataStorage<::test::fixtures::patch::MyEnum>::values = {{
  type::MyValue0,
}};
const std::array<folly::StringPiece, 1> TEnumDataStorage<::test::fixtures::patch::MyEnum>::names = {{
  "MyValue0",
}};

const std::array<::test::fixtures::patch::InnerUnion::Type, 1> TEnumDataStorage<::test::fixtures::patch::InnerUnion::Type>::values = {{
  type::innerOption,
}};
const std::array<folly::StringPiece, 1> TEnumDataStorage<::test::fixtures::patch::InnerUnion::Type>::names = {{
  "innerOption",
}};

const std::array<::test::fixtures::patch::MyUnion::Type, 3> TEnumDataStorage<::test::fixtures::patch::MyUnion::Type>::values = {{
  type::option1,
  type::option2,
  type::option3,
}};
const std::array<folly::StringPiece, 3> TEnumDataStorage<::test::fixtures::patch::MyUnion::Type>::names = {{
  "option1",
  "option2",
  "option3",
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::test::fixtures::patch::MyData>::fields_names = {{
  "data1",
  "data2",
}};
const std::array<int16_t, 2> TStructDataStorage<::test::fixtures::patch::MyData>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::test::fixtures::patch::MyData>::fields_types = {{
  TType::T_STRING,
  TType::T_I32,
}};
const std::array<folly::StringPiece, 2> TStructDataStorage<::test::fixtures::patch::MyData>::storage_names = {{
  "__fbthrift_field_data1",
  "__fbthrift_field_data2",
}};
const std::array<int, 2> TStructDataStorage<::test::fixtures::patch::MyData>::isset_indexes = {{
  -1,
  -1,
}};

const std::array<folly::StringPiece, 1> TStructDataStorage<::test::fixtures::patch::InnerUnion>::fields_names = {{
  "innerOption",
}};
const std::array<int16_t, 1> TStructDataStorage<::test::fixtures::patch::InnerUnion>::fields_ids = {{
  1,
}};
const std::array<protocol::TType, 1> TStructDataStorage<::test::fixtures::patch::InnerUnion>::fields_types = {{
  TType::T_STRING,
}};
const std::array<folly::StringPiece, 1> TStructDataStorage<::test::fixtures::patch::InnerUnion>::storage_names = {{
  "innerOption",
}};
const std::array<int, 1> TStructDataStorage<::test::fixtures::patch::InnerUnion>::isset_indexes = {{
  0,
}};

const std::array<folly::StringPiece, 3> TStructDataStorage<::test::fixtures::patch::MyUnion>::fields_names = {{
  "option1",
  "option2",
  "option3",
}};
const std::array<int16_t, 3> TStructDataStorage<::test::fixtures::patch::MyUnion>::fields_ids = {{
  1,
  2,
  3,
}};
const std::array<protocol::TType, 3> TStructDataStorage<::test::fixtures::patch::MyUnion>::fields_types = {{
  TType::T_STRING,
  TType::T_I32,
  TType::T_STRUCT,
}};
const std::array<folly::StringPiece, 3> TStructDataStorage<::test::fixtures::patch::MyUnion>::storage_names = {{
  "option1",
  "option2",
  "option3",
}};
const std::array<int, 3> TStructDataStorage<::test::fixtures::patch::MyUnion>::isset_indexes = {{
  0,
  1,
  2,
}};

const std::array<folly::StringPiece, 0> TStructDataStorage<::test::fixtures::patch::LateDefStruct>::fields_names = {{
}};
const std::array<int16_t, 0> TStructDataStorage<::test::fixtures::patch::LateDefStruct>::fields_ids = {{
}};
const std::array<protocol::TType, 0> TStructDataStorage<::test::fixtures::patch::LateDefStruct>::fields_types = {{
}};
const std::array<folly::StringPiece, 0> TStructDataStorage<::test::fixtures::patch::LateDefStruct>::storage_names = {{
}};
const std::array<int, 0> TStructDataStorage<::test::fixtures::patch::LateDefStruct>::isset_indexes = {{
}};

const std::array<folly::StringPiece, 30> TStructDataStorage<::test::fixtures::patch::MyStruct>::fields_names = {{
  "boolVal",
  "byteVal",
  "i16Val",
  "i32Val",
  "i64Val",
  "floatVal",
  "doubleVal",
  "stringVal",
  "binaryVal",
  "enumVal",
  "structVal",
  "unionVal",
  "lateStructVal",
  "durationVal",
  "timeVal",
  "optBoolVal",
  "optByteVal",
  "optI16Val",
  "optI32Val",
  "optI64Val",
  "optFloatVal",
  "optDoubleVal",
  "optStringVal",
  "optBinaryVal",
  "optEnumVal",
  "optStructVal",
  "optLateStructVal",
  "optListVal",
  "optSetVal",
  "optMapVal",
}};
const std::array<int16_t, 30> TStructDataStorage<::test::fixtures::patch::MyStruct>::fields_ids = {{
  -1,
  -2,
  -3,
  -4,
  -5,
  -6,
  -7,
  -8,
  -9,
  -10,
  -11,
  -12,
  -13,
  -14,
  -15,
  -16,
  -17,
  -18,
  -19,
  -20,
  -21,
  -22,
  -23,
  -24,
  -25,
  -26,
  -27,
  -28,
  -29,
  -30,
}};
const std::array<protocol::TType, 30> TStructDataStorage<::test::fixtures::patch::MyStruct>::fields_types = {{
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
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
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
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_LIST,
  TType::T_SET,
  TType::T_MAP,
}};
const std::array<folly::StringPiece, 30> TStructDataStorage<::test::fixtures::patch::MyStruct>::storage_names = {{
  "__fbthrift_field_boolVal",
  "__fbthrift_field_byteVal",
  "__fbthrift_field_i16Val",
  "__fbthrift_field_i32Val",
  "__fbthrift_field_i64Val",
  "__fbthrift_field_floatVal",
  "__fbthrift_field_doubleVal",
  "__fbthrift_field_stringVal",
  "__fbthrift_field_binaryVal",
  "__fbthrift_field_enumVal",
  "__fbthrift_field_structVal",
  "__fbthrift_field_unionVal",
  "__fbthrift_field_lateStructVal",
  "__fbthrift_field_durationVal",
  "__fbthrift_field_timeVal",
  "__fbthrift_field_optBoolVal",
  "__fbthrift_field_optByteVal",
  "__fbthrift_field_optI16Val",
  "__fbthrift_field_optI32Val",
  "__fbthrift_field_optI64Val",
  "__fbthrift_field_optFloatVal",
  "__fbthrift_field_optDoubleVal",
  "__fbthrift_field_optStringVal",
  "__fbthrift_field_optBinaryVal",
  "__fbthrift_field_optEnumVal",
  "__fbthrift_field_optStructVal",
  "__fbthrift_field_optLateStructVal",
  "__fbthrift_field_optListVal",
  "__fbthrift_field_optSetVal",
  "__fbthrift_field_optMapVal",
}};
const std::array<int, 30> TStructDataStorage<::test::fixtures::patch::MyStruct>::isset_indexes = {{
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
  -1,
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
  14,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::test::fixtures::patch::MyDataFieldPatchStruct>::fields_names = {{
  "data1",
  "data2",
}};
const std::array<int16_t, 2> TStructDataStorage<::test::fixtures::patch::MyDataFieldPatchStruct>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::test::fixtures::patch::MyDataFieldPatchStruct>::fields_types = {{
  TType::T_STRUCT,
  TType::T_STRUCT,
}};
const std::array<folly::StringPiece, 2> TStructDataStorage<::test::fixtures::patch::MyDataFieldPatchStruct>::storage_names = {{
  "__fbthrift_field_data1",
  "__fbthrift_field_data2",
}};
const std::array<int, 2> TStructDataStorage<::test::fixtures::patch::MyDataFieldPatchStruct>::isset_indexes = {{
  0,
  1,
}};

const std::array<folly::StringPiece, 5> TStructDataStorage<::test::fixtures::patch::MyDataPatchStruct>::fields_names = {{
  "assign",
  "clear",
  "patchPrior",
  "ensure",
  "patch",
}};
const std::array<int16_t, 5> TStructDataStorage<::test::fixtures::patch::MyDataPatchStruct>::fields_ids = {{
  1,
  2,
  3,
  5,
  6,
}};
const std::array<protocol::TType, 5> TStructDataStorage<::test::fixtures::patch::MyDataPatchStruct>::fields_types = {{
  TType::T_STRUCT,
  TType::T_BOOL,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
}};
const std::array<folly::StringPiece, 5> TStructDataStorage<::test::fixtures::patch::MyDataPatchStruct>::storage_names = {{
  "__fbthrift_field_assign",
  "__fbthrift_field_clear",
  "__fbthrift_field_patchPrior",
  "__fbthrift_field_ensure",
  "__fbthrift_field_patch",
}};
const std::array<int, 5> TStructDataStorage<::test::fixtures::patch::MyDataPatchStruct>::isset_indexes = {{
  -1,
  0,
  1,
  2,
  3,
}};

const std::array<folly::StringPiece, 1> TStructDataStorage<::test::fixtures::patch::InnerUnionFieldPatchStruct>::fields_names = {{
  "innerOption",
}};
const std::array<int16_t, 1> TStructDataStorage<::test::fixtures::patch::InnerUnionFieldPatchStruct>::fields_ids = {{
  1,
}};
const std::array<protocol::TType, 1> TStructDataStorage<::test::fixtures::patch::InnerUnionFieldPatchStruct>::fields_types = {{
  TType::T_STRUCT,
}};
const std::array<folly::StringPiece, 1> TStructDataStorage<::test::fixtures::patch::InnerUnionFieldPatchStruct>::storage_names = {{
  "__fbthrift_field_innerOption",
}};
const std::array<int, 1> TStructDataStorage<::test::fixtures::patch::InnerUnionFieldPatchStruct>::isset_indexes = {{
  0,
}};

const std::array<folly::StringPiece, 5> TStructDataStorage<::test::fixtures::patch::InnerUnionPatchStruct>::fields_names = {{
  "assign",
  "clear",
  "patchPrior",
  "ensure",
  "patch",
}};
const std::array<int16_t, 5> TStructDataStorage<::test::fixtures::patch::InnerUnionPatchStruct>::fields_ids = {{
  1,
  2,
  3,
  4,
  6,
}};
const std::array<protocol::TType, 5> TStructDataStorage<::test::fixtures::patch::InnerUnionPatchStruct>::fields_types = {{
  TType::T_STRUCT,
  TType::T_BOOL,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
}};
const std::array<folly::StringPiece, 5> TStructDataStorage<::test::fixtures::patch::InnerUnionPatchStruct>::storage_names = {{
  "__fbthrift_field_assign",
  "__fbthrift_field_clear",
  "__fbthrift_field_patchPrior",
  "__fbthrift_field_ensure",
  "__fbthrift_field_patch",
}};
const std::array<int, 5> TStructDataStorage<::test::fixtures::patch::InnerUnionPatchStruct>::isset_indexes = {{
  -1,
  0,
  1,
  2,
  3,
}};

const std::array<folly::StringPiece, 3> TStructDataStorage<::test::fixtures::patch::MyUnionFieldPatchStruct>::fields_names = {{
  "option1",
  "option2",
  "option3",
}};
const std::array<int16_t, 3> TStructDataStorage<::test::fixtures::patch::MyUnionFieldPatchStruct>::fields_ids = {{
  1,
  2,
  3,
}};
const std::array<protocol::TType, 3> TStructDataStorage<::test::fixtures::patch::MyUnionFieldPatchStruct>::fields_types = {{
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
}};
const std::array<folly::StringPiece, 3> TStructDataStorage<::test::fixtures::patch::MyUnionFieldPatchStruct>::storage_names = {{
  "__fbthrift_field_option1",
  "__fbthrift_field_option2",
  "__fbthrift_field_option3",
}};
const std::array<int, 3> TStructDataStorage<::test::fixtures::patch::MyUnionFieldPatchStruct>::isset_indexes = {{
  0,
  1,
  2,
}};

const std::array<folly::StringPiece, 5> TStructDataStorage<::test::fixtures::patch::MyUnionPatchStruct>::fields_names = {{
  "assign",
  "clear",
  "patchPrior",
  "ensure",
  "patch",
}};
const std::array<int16_t, 5> TStructDataStorage<::test::fixtures::patch::MyUnionPatchStruct>::fields_ids = {{
  1,
  2,
  3,
  4,
  6,
}};
const std::array<protocol::TType, 5> TStructDataStorage<::test::fixtures::patch::MyUnionPatchStruct>::fields_types = {{
  TType::T_STRUCT,
  TType::T_BOOL,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
}};
const std::array<folly::StringPiece, 5> TStructDataStorage<::test::fixtures::patch::MyUnionPatchStruct>::storage_names = {{
  "__fbthrift_field_assign",
  "__fbthrift_field_clear",
  "__fbthrift_field_patchPrior",
  "__fbthrift_field_ensure",
  "__fbthrift_field_patch",
}};
const std::array<int, 5> TStructDataStorage<::test::fixtures::patch::MyUnionPatchStruct>::isset_indexes = {{
  -1,
  0,
  1,
  2,
  3,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::test::fixtures::patch::MyStructFieldN10PatchStruct>::fields_names = {{
  "assign",
  "clear",
}};
const std::array<int16_t, 2> TStructDataStorage<::test::fixtures::patch::MyStructFieldN10PatchStruct>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::test::fixtures::patch::MyStructFieldN10PatchStruct>::fields_types = {{
  TType::T_I32,
  TType::T_BOOL,
}};
const std::array<folly::StringPiece, 2> TStructDataStorage<::test::fixtures::patch::MyStructFieldN10PatchStruct>::storage_names = {{
  "__fbthrift_field_assign",
  "__fbthrift_field_clear",
}};
const std::array<int, 2> TStructDataStorage<::test::fixtures::patch::MyStructFieldN10PatchStruct>::isset_indexes = {{
  0,
  1,
}};

const std::array<folly::StringPiece, 0> TStructDataStorage<::test::fixtures::patch::LateDefStructFieldPatchStruct>::fields_names = {{
}};
const std::array<int16_t, 0> TStructDataStorage<::test::fixtures::patch::LateDefStructFieldPatchStruct>::fields_ids = {{
}};
const std::array<protocol::TType, 0> TStructDataStorage<::test::fixtures::patch::LateDefStructFieldPatchStruct>::fields_types = {{
}};
const std::array<folly::StringPiece, 0> TStructDataStorage<::test::fixtures::patch::LateDefStructFieldPatchStruct>::storage_names = {{
}};
const std::array<int, 0> TStructDataStorage<::test::fixtures::patch::LateDefStructFieldPatchStruct>::isset_indexes = {{
}};

const std::array<folly::StringPiece, 5> TStructDataStorage<::test::fixtures::patch::LateDefStructPatchStruct>::fields_names = {{
  "assign",
  "clear",
  "patchPrior",
  "ensure",
  "patch",
}};
const std::array<int16_t, 5> TStructDataStorage<::test::fixtures::patch::LateDefStructPatchStruct>::fields_ids = {{
  1,
  2,
  3,
  5,
  6,
}};
const std::array<protocol::TType, 5> TStructDataStorage<::test::fixtures::patch::LateDefStructPatchStruct>::fields_types = {{
  TType::T_STRUCT,
  TType::T_BOOL,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
}};
const std::array<folly::StringPiece, 5> TStructDataStorage<::test::fixtures::patch::LateDefStructPatchStruct>::storage_names = {{
  "__fbthrift_field_assign",
  "__fbthrift_field_clear",
  "__fbthrift_field_patchPrior",
  "__fbthrift_field_ensure",
  "__fbthrift_field_patch",
}};
const std::array<int, 5> TStructDataStorage<::test::fixtures::patch::LateDefStructPatchStruct>::isset_indexes = {{
  -1,
  0,
  1,
  2,
  3,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::test::fixtures::patch::MyStructFieldN25PatchStruct>::fields_names = {{
  "assign",
  "clear",
}};
const std::array<int16_t, 2> TStructDataStorage<::test::fixtures::patch::MyStructFieldN25PatchStruct>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::test::fixtures::patch::MyStructFieldN25PatchStruct>::fields_types = {{
  TType::T_I32,
  TType::T_BOOL,
}};
const std::array<folly::StringPiece, 2> TStructDataStorage<::test::fixtures::patch::MyStructFieldN25PatchStruct>::storage_names = {{
  "__fbthrift_field_assign",
  "__fbthrift_field_clear",
}};
const std::array<int, 2> TStructDataStorage<::test::fixtures::patch::MyStructFieldN25PatchStruct>::isset_indexes = {{
  0,
  1,
}};

const std::array<folly::StringPiece, 6> TStructDataStorage<::test::fixtures::patch::MyStructFieldN28PatchStruct>::fields_names = {{
  "assign",
  "clear",
  "patch",
  "remove",
  "prepend",
  "append",
}};
const std::array<int16_t, 6> TStructDataStorage<::test::fixtures::patch::MyStructFieldN28PatchStruct>::fields_ids = {{
  1,
  2,
  3,
  7,
  8,
  9,
}};
const std::array<protocol::TType, 6> TStructDataStorage<::test::fixtures::patch::MyStructFieldN28PatchStruct>::fields_types = {{
  TType::T_LIST,
  TType::T_BOOL,
  TType::T_MAP,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
}};
const std::array<folly::StringPiece, 6> TStructDataStorage<::test::fixtures::patch::MyStructFieldN28PatchStruct>::storage_names = {{
  "__fbthrift_field_assign",
  "__fbthrift_field_clear",
  "__fbthrift_field_patch",
  "__fbthrift_field_remove",
  "__fbthrift_field_prepend",
  "__fbthrift_field_append",
}};
const std::array<int, 6> TStructDataStorage<::test::fixtures::patch::MyStructFieldN28PatchStruct>::isset_indexes = {{
  0,
  1,
  2,
  3,
  4,
  5,
}};

const std::array<folly::StringPiece, 4> TStructDataStorage<::test::fixtures::patch::MyStructFieldN29PatchStruct>::fields_names = {{
  "assign",
  "clear",
  "remove",
  "add",
}};
const std::array<int16_t, 4> TStructDataStorage<::test::fixtures::patch::MyStructFieldN29PatchStruct>::fields_ids = {{
  1,
  2,
  7,
  8,
}};
const std::array<protocol::TType, 4> TStructDataStorage<::test::fixtures::patch::MyStructFieldN29PatchStruct>::fields_types = {{
  TType::T_SET,
  TType::T_BOOL,
  TType::T_SET,
  TType::T_SET,
}};
const std::array<folly::StringPiece, 4> TStructDataStorage<::test::fixtures::patch::MyStructFieldN29PatchStruct>::storage_names = {{
  "__fbthrift_field_assign",
  "__fbthrift_field_clear",
  "__fbthrift_field_remove",
  "__fbthrift_field_add",
}};
const std::array<int, 4> TStructDataStorage<::test::fixtures::patch::MyStructFieldN29PatchStruct>::isset_indexes = {{
  0,
  1,
  2,
  3,
}};

const std::array<folly::StringPiece, 5> TStructDataStorage<::test::fixtures::patch::MyStructFieldN30PatchStruct>::fields_names = {{
  "assign",
  "clear",
  "add",
  "remove",
  "put",
}};
const std::array<int16_t, 5> TStructDataStorage<::test::fixtures::patch::MyStructFieldN30PatchStruct>::fields_ids = {{
  1,
  2,
  5,
  7,
  9,
}};
const std::array<protocol::TType, 5> TStructDataStorage<::test::fixtures::patch::MyStructFieldN30PatchStruct>::fields_types = {{
  TType::T_MAP,
  TType::T_BOOL,
  TType::T_MAP,
  TType::T_SET,
  TType::T_MAP,
}};
const std::array<folly::StringPiece, 5> TStructDataStorage<::test::fixtures::patch::MyStructFieldN30PatchStruct>::storage_names = {{
  "__fbthrift_field_assign",
  "__fbthrift_field_clear",
  "__fbthrift_field_add",
  "__fbthrift_field_remove",
  "__fbthrift_field_put",
}};
const std::array<int, 5> TStructDataStorage<::test::fixtures::patch::MyStructFieldN30PatchStruct>::isset_indexes = {{
  0,
  1,
  2,
  3,
  4,
}};

const std::array<folly::StringPiece, 30> TStructDataStorage<::test::fixtures::patch::MyStructFieldPatchStruct>::fields_names = {{
  "boolVal",
  "byteVal",
  "i16Val",
  "i32Val",
  "i64Val",
  "floatVal",
  "doubleVal",
  "stringVal",
  "binaryVal",
  "enumVal",
  "structVal",
  "unionVal",
  "lateStructVal",
  "durationVal",
  "timeVal",
  "optBoolVal",
  "optByteVal",
  "optI16Val",
  "optI32Val",
  "optI64Val",
  "optFloatVal",
  "optDoubleVal",
  "optStringVal",
  "optBinaryVal",
  "optEnumVal",
  "optStructVal",
  "optLateStructVal",
  "optListVal",
  "optSetVal",
  "optMapVal",
}};
const std::array<int16_t, 30> TStructDataStorage<::test::fixtures::patch::MyStructFieldPatchStruct>::fields_ids = {{
  -1,
  -2,
  -3,
  -4,
  -5,
  -6,
  -7,
  -8,
  -9,
  -10,
  -11,
  -12,
  -13,
  -14,
  -15,
  -16,
  -17,
  -18,
  -19,
  -20,
  -21,
  -22,
  -23,
  -24,
  -25,
  -26,
  -27,
  -28,
  -29,
  -30,
}};
const std::array<protocol::TType, 30> TStructDataStorage<::test::fixtures::patch::MyStructFieldPatchStruct>::fields_types = {{
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
}};
const std::array<folly::StringPiece, 30> TStructDataStorage<::test::fixtures::patch::MyStructFieldPatchStruct>::storage_names = {{
  "__fbthrift_field_boolVal",
  "__fbthrift_field_byteVal",
  "__fbthrift_field_i16Val",
  "__fbthrift_field_i32Val",
  "__fbthrift_field_i64Val",
  "__fbthrift_field_floatVal",
  "__fbthrift_field_doubleVal",
  "__fbthrift_field_stringVal",
  "__fbthrift_field_binaryVal",
  "__fbthrift_field_enumVal",
  "__fbthrift_field_structVal",
  "__fbthrift_field_unionVal",
  "__fbthrift_field_lateStructVal",
  "__fbthrift_field_durationVal",
  "__fbthrift_field_timeVal",
  "__fbthrift_field_optBoolVal",
  "__fbthrift_field_optByteVal",
  "__fbthrift_field_optI16Val",
  "__fbthrift_field_optI32Val",
  "__fbthrift_field_optI64Val",
  "__fbthrift_field_optFloatVal",
  "__fbthrift_field_optDoubleVal",
  "__fbthrift_field_optStringVal",
  "__fbthrift_field_optBinaryVal",
  "__fbthrift_field_optEnumVal",
  "__fbthrift_field_optStructVal",
  "__fbthrift_field_optLateStructVal",
  "__fbthrift_field_optListVal",
  "__fbthrift_field_optSetVal",
  "__fbthrift_field_optMapVal",
}};
const std::array<int, 30> TStructDataStorage<::test::fixtures::patch::MyStructFieldPatchStruct>::isset_indexes = {{
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
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
}};

const std::array<folly::StringPiece, 5> TStructDataStorage<::test::fixtures::patch::MyStructPatchStruct>::fields_names = {{
  "assign",
  "clear",
  "patchPrior",
  "ensure",
  "patch",
}};
const std::array<int16_t, 5> TStructDataStorage<::test::fixtures::patch::MyStructPatchStruct>::fields_ids = {{
  1,
  2,
  3,
  5,
  6,
}};
const std::array<protocol::TType, 5> TStructDataStorage<::test::fixtures::patch::MyStructPatchStruct>::fields_types = {{
  TType::T_STRUCT,
  TType::T_BOOL,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
}};
const std::array<folly::StringPiece, 5> TStructDataStorage<::test::fixtures::patch::MyStructPatchStruct>::storage_names = {{
  "__fbthrift_field_assign",
  "__fbthrift_field_clear",
  "__fbthrift_field_patchPrior",
  "__fbthrift_field_ensure",
  "__fbthrift_field_patch",
}};
const std::array<int, 5> TStructDataStorage<::test::fixtures::patch::MyStructPatchStruct>::isset_indexes = {{
  -1,
  0,
  1,
  2,
  3,
}};

} // namespace thrift
} // namespace apache
