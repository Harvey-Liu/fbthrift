/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/includes/src/matching_module_name.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <vector>

#include <thrift/lib/cpp2/gen/module_metadata_h.h>
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/matching_module_name_types.h"
#include "other/gen-cpp2/matching_module_name_metadata.h"


namespace apache {
namespace thrift {
namespace detail {
namespace md {

template <>
class StructMetadata<::matching_module_name::MyStruct> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
