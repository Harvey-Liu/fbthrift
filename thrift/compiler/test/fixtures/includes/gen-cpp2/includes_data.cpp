/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/includes/src/includes.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/includes/gen-cpp2/includes_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

namespace apache {
namespace thrift {

const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::Included>::fields_names = {{
  "MyIntField",
  "MyTransitiveField",
}};
const std::array<int16_t, 2> TStructDataStorage<::cpp2::Included>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::cpp2::Included>::fields_types = {{
  TType::T_I64,
  TType::T_STRUCT,
}};
const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::Included>::storage_names = {{
  "__fbthrift_field_MyIntField",
  "__fbthrift_field_MyTransitiveField",
}};
const std::array<int, 2> TStructDataStorage<::cpp2::Included>::isset_indexes = {{
  0,
  1,
}};

} // namespace thrift
} // namespace apache
