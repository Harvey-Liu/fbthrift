/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/mcpp2-compare/src/reflection.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/visitation/visit_by_thrift_field_metadata.h>
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/reflection_metadata.h"

namespace apache {
namespace thrift {
namespace detail {

template <>
struct VisitByFieldId<::cpp2::ReflectionStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).fieldA_ref());
    default:
      throwInvalidThriftId(fieldId, "::cpp2::ReflectionStruct");
    }
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
