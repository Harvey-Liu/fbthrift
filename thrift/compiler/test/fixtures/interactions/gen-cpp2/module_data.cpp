/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/interactions/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/interactions/gen-cpp2/module_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

namespace apache {
namespace thrift {

const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::CustomException>::fields_names = {{
  "message",
}};
const std::array<int16_t, 1> TStructDataStorage<::cpp2::CustomException>::fields_ids = {{
  1,
}};
const std::array<protocol::TType, 1> TStructDataStorage<::cpp2::CustomException>::fields_types = {{
  TType::T_STRING,
}};
const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::CustomException>::storage_names = {{
  "__fbthrift_field_message",
}};
const std::array<int, 1> TStructDataStorage<::cpp2::CustomException>::isset_indexes = {{
  0,
}};

} // namespace thrift
} // namespace apache
