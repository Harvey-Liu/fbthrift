/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/exceptions/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/exceptions/gen-cpp2/module_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

namespace apache {
namespace thrift {

const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::Fiery>::fields_names = {{
  "message",
}};
const std::array<int16_t, 1> TStructDataStorage<::cpp2::Fiery>::fields_ids = {{
  1,
}};
const std::array<protocol::TType, 1> TStructDataStorage<::cpp2::Fiery>::fields_types = {{
  TType::T_STRING,
}};
const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::Fiery>::storage_names = {{
  "__fbthrift_field_message",
}};
const std::array<int, 1> TStructDataStorage<::cpp2::Fiery>::isset_indexes = {{
  -1,
}};

const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::Serious>::fields_names = {{
  "sonnet",
}};
const std::array<int16_t, 1> TStructDataStorage<::cpp2::Serious>::fields_ids = {{
  1,
}};
const std::array<protocol::TType, 1> TStructDataStorage<::cpp2::Serious>::fields_types = {{
  TType::T_STRING,
}};
const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::Serious>::storage_names = {{
  "__fbthrift_field_sonnet",
}};
const std::array<int, 1> TStructDataStorage<::cpp2::Serious>::isset_indexes = {{
  0,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::ComplexFieldNames>::fields_names = {{
  "error_message",
  "internal_error_message",
}};
const std::array<int16_t, 2> TStructDataStorage<::cpp2::ComplexFieldNames>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::cpp2::ComplexFieldNames>::fields_types = {{
  TType::T_STRING,
  TType::T_STRING,
}};
const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::ComplexFieldNames>::storage_names = {{
  "__fbthrift_field_error_message",
  "__fbthrift_field_internal_error_message",
}};
const std::array<int, 2> TStructDataStorage<::cpp2::ComplexFieldNames>::isset_indexes = {{
  0,
  1,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::CustomFieldNames>::fields_names = {{
  "error_message",
  "internal_error_message",
}};
const std::array<int16_t, 2> TStructDataStorage<::cpp2::CustomFieldNames>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::cpp2::CustomFieldNames>::fields_types = {{
  TType::T_STRING,
  TType::T_STRING,
}};
const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::CustomFieldNames>::storage_names = {{
  "__fbthrift_field_error_message",
  "__fbthrift_field_internal_error_message",
}};
const std::array<int, 2> TStructDataStorage<::cpp2::CustomFieldNames>::isset_indexes = {{
  0,
  1,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::ExceptionWithPrimitiveField>::fields_names = {{
  "message",
  "error_code",
}};
const std::array<int16_t, 2> TStructDataStorage<::cpp2::ExceptionWithPrimitiveField>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::cpp2::ExceptionWithPrimitiveField>::fields_types = {{
  TType::T_STRING,
  TType::T_I32,
}};
const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::ExceptionWithPrimitiveField>::storage_names = {{
  "__fbthrift_field_message",
  "__fbthrift_field_error_code",
}};
const std::array<int, 2> TStructDataStorage<::cpp2::ExceptionWithPrimitiveField>::isset_indexes = {{
  0,
  1,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::ExceptionWithStructuredAnnotation>::fields_names = {{
  "message_field",
  "error_code",
}};
const std::array<int16_t, 2> TStructDataStorage<::cpp2::ExceptionWithStructuredAnnotation>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::cpp2::ExceptionWithStructuredAnnotation>::fields_types = {{
  TType::T_STRING,
  TType::T_I32,
}};
const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::ExceptionWithStructuredAnnotation>::storage_names = {{
  "__fbthrift_field_message_field",
  "__fbthrift_field_error_code",
}};
const std::array<int, 2> TStructDataStorage<::cpp2::ExceptionWithStructuredAnnotation>::isset_indexes = {{
  0,
  1,
}};

const std::array<folly::StringPiece, 0> TStructDataStorage<::cpp2::Banal>::fields_names = {{
}};
const std::array<int16_t, 0> TStructDataStorage<::cpp2::Banal>::fields_ids = {{
}};
const std::array<protocol::TType, 0> TStructDataStorage<::cpp2::Banal>::fields_types = {{
}};
const std::array<folly::StringPiece, 0> TStructDataStorage<::cpp2::Banal>::storage_names = {{
}};
const std::array<int, 0> TStructDataStorage<::cpp2::Banal>::isset_indexes = {{
}};

} // namespace thrift
} // namespace apache
