/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/constants/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/constants/gen-cpp2/module_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

namespace apache {
namespace thrift {

const std::array<::cpp2::EmptyEnum, 0> TEnumDataStorage<::cpp2::EmptyEnum>::values = {{
}};
const std::array<folly::StringPiece, 0> TEnumDataStorage<::cpp2::EmptyEnum>::names = {{
}};

const std::array<::cpp2::City, 4> TEnumDataStorage<::cpp2::City>::values = {{
  type::NYC,
  type::MPK,
  type::SEA,
  type::LON,
}};
const std::array<folly::StringPiece, 4> TEnumDataStorage<::cpp2::City>::names = {{
  "NYC",
  "MPK",
  "SEA",
  "LON",
}};

const std::array<::cpp2::Company, 4> TEnumDataStorage<::cpp2::Company>::values = {{
  type::FACEBOOK,
  type::WHATSAPP,
  type::OCULUS,
  type::INSTAGRAM,
}};
const std::array<folly::StringPiece, 4> TEnumDataStorage<::cpp2::Company>::names = {{
  "FACEBOOK",
  "WHATSAPP",
  "OCULUS",
  "INSTAGRAM",
}};

const std::array<::cpp2::union1::Type, 2> TEnumDataStorage<::cpp2::union1::Type>::values = {{
  type::i,
  type::d,
}};
const std::array<folly::StringPiece, 2> TEnumDataStorage<::cpp2::union1::Type>::names = {{
  "i",
  "d",
}};

const std::array<::cpp2::union2::Type, 4> TEnumDataStorage<::cpp2::union2::Type>::values = {{
  type::i,
  type::d,
  type::s,
  type::u,
}};
const std::array<folly::StringPiece, 4> TEnumDataStorage<::cpp2::union2::Type>::names = {{
  "i",
  "d",
  "s",
  "u",
}};

const std::array<folly::StringPiece, 5> TStructDataStorage<::cpp2::Internship>::fields_names = {{
  "weeks",
  "title",
  "employer",
  "compensation",
  "school",
}};
const std::array<int16_t, 5> TStructDataStorage<::cpp2::Internship>::fields_ids = {{
  1,
  2,
  3,
  4,
  5,
}};
const std::array<protocol::TType, 5> TStructDataStorage<::cpp2::Internship>::fields_types = {{
  TType::T_I32,
  TType::T_STRING,
  TType::T_I32,
  TType::T_DOUBLE,
  TType::T_STRING,
}};
const std::array<folly::StringPiece, 5> TStructDataStorage<::cpp2::Internship>::storage_names = {{
  "__fbthrift_field_weeks",
  "__fbthrift_field_title",
  "__fbthrift_field_employer",
  "__fbthrift_field_compensation",
  "__fbthrift_field_school",
}};
const std::array<int, 5> TStructDataStorage<::cpp2::Internship>::isset_indexes = {{
  -1,
  0,
  1,
  2,
  3,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::Range>::fields_names = {{
  "min",
  "max",
}};
const std::array<int16_t, 2> TStructDataStorage<::cpp2::Range>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::cpp2::Range>::fields_types = {{
  TType::T_I32,
  TType::T_I32,
}};
const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::Range>::storage_names = {{
  "__fbthrift_field_min",
  "__fbthrift_field_max",
}};
const std::array<int, 2> TStructDataStorage<::cpp2::Range>::isset_indexes = {{
  -1,
  -1,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::struct1>::fields_names = {{
  "a",
  "b",
}};
const std::array<int16_t, 2> TStructDataStorage<::cpp2::struct1>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::cpp2::struct1>::fields_types = {{
  TType::T_I32,
  TType::T_STRING,
}};
const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::struct1>::storage_names = {{
  "__fbthrift_field_a",
  "__fbthrift_field_b",
}};
const std::array<int, 2> TStructDataStorage<::cpp2::struct1>::isset_indexes = {{
  0,
  1,
}};

const std::array<folly::StringPiece, 4> TStructDataStorage<::cpp2::struct2>::fields_names = {{
  "a",
  "b",
  "c",
  "d",
}};
const std::array<int16_t, 4> TStructDataStorage<::cpp2::struct2>::fields_ids = {{
  1,
  2,
  3,
  4,
}};
const std::array<protocol::TType, 4> TStructDataStorage<::cpp2::struct2>::fields_types = {{
  TType::T_I32,
  TType::T_STRING,
  TType::T_STRUCT,
  TType::T_LIST,
}};
const std::array<folly::StringPiece, 4> TStructDataStorage<::cpp2::struct2>::storage_names = {{
  "__fbthrift_field_a",
  "__fbthrift_field_b",
  "__fbthrift_field_c",
  "__fbthrift_field_d",
}};
const std::array<int, 4> TStructDataStorage<::cpp2::struct2>::isset_indexes = {{
  0,
  1,
  2,
  3,
}};

const std::array<folly::StringPiece, 3> TStructDataStorage<::cpp2::struct3>::fields_names = {{
  "a",
  "b",
  "c",
}};
const std::array<int16_t, 3> TStructDataStorage<::cpp2::struct3>::fields_ids = {{
  1,
  2,
  3,
}};
const std::array<protocol::TType, 3> TStructDataStorage<::cpp2::struct3>::fields_types = {{
  TType::T_STRING,
  TType::T_I32,
  TType::T_STRUCT,
}};
const std::array<folly::StringPiece, 3> TStructDataStorage<::cpp2::struct3>::storage_names = {{
  "__fbthrift_field_a",
  "__fbthrift_field_b",
  "__fbthrift_field_c",
}};
const std::array<int, 3> TStructDataStorage<::cpp2::struct3>::isset_indexes = {{
  0,
  1,
  2,
}};

const std::array<folly::StringPiece, 3> TStructDataStorage<::cpp2::struct4>::fields_names = {{
  "a",
  "b",
  "c",
}};
const std::array<int16_t, 3> TStructDataStorage<::cpp2::struct4>::fields_ids = {{
  1,
  2,
  3,
}};
const std::array<protocol::TType, 3> TStructDataStorage<::cpp2::struct4>::fields_types = {{
  TType::T_I32,
  TType::T_DOUBLE,
  TType::T_BYTE,
}};
const std::array<folly::StringPiece, 3> TStructDataStorage<::cpp2::struct4>::storage_names = {{
  "__fbthrift_field_a",
  "__fbthrift_field_b",
  "__fbthrift_field_c",
}};
const std::array<int, 3> TStructDataStorage<::cpp2::struct4>::isset_indexes = {{
  0,
  1,
  2,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::union1>::fields_names = {{
  "i",
  "d",
}};
const std::array<int16_t, 2> TStructDataStorage<::cpp2::union1>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::cpp2::union1>::fields_types = {{
  TType::T_I32,
  TType::T_DOUBLE,
}};
const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::union1>::storage_names = {{
  "i",
  "d",
}};
const std::array<int, 2> TStructDataStorage<::cpp2::union1>::isset_indexes = {{
  0,
  1,
}};

const std::array<folly::StringPiece, 4> TStructDataStorage<::cpp2::union2>::fields_names = {{
  "i",
  "d",
  "s",
  "u",
}};
const std::array<int16_t, 4> TStructDataStorage<::cpp2::union2>::fields_ids = {{
  1,
  2,
  3,
  4,
}};
const std::array<protocol::TType, 4> TStructDataStorage<::cpp2::union2>::fields_types = {{
  TType::T_I32,
  TType::T_DOUBLE,
  TType::T_STRUCT,
  TType::T_STRUCT,
}};
const std::array<folly::StringPiece, 4> TStructDataStorage<::cpp2::union2>::storage_names = {{
  "i",
  "d",
  "s",
  "u",
}};
const std::array<int, 4> TStructDataStorage<::cpp2::union2>::isset_indexes = {{
  0,
  1,
  2,
  3,
}};

} // namespace thrift
} // namespace apache
