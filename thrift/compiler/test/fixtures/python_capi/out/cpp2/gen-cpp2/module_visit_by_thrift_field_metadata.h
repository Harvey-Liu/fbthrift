/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/python_capi/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/visitation/visit_by_thrift_field_metadata.h>
#include "thrift/compiler/test/fixtures/python_capi/gen-cpp2/module_metadata.h"

namespace apache {
namespace thrift {
namespace detail {

template <>
struct VisitByFieldId<::test::fixtures::python_capi::MyStruct> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).inty_ref());
    case 2:
      return f(1, static_cast<T&&>(t).stringy_ref());
    case 3:
      return f(2, static_cast<T&&>(t).myItemy_ref());
    case 4:
      return f(3, static_cast<T&&>(t).myEnumy_ref());
    case 5:
      return f(4, static_cast<T&&>(t).boulet_ref());
    case 6:
      return f(5, static_cast<T&&>(t).floatListy_ref());
    case 7:
      return f(6, static_cast<T&&>(t).strMappy_ref());
    case 8:
      return f(7, static_cast<T&&>(t).intSetty_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::python_capi::MyStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::python_capi::MyDataItem> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).s_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::python_capi::MyDataItem");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::python_capi::TransitiveDoubler> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::python_capi::TransitiveDoubler");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::python_capi::detail::DoubledPair> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).s_ref());
    case 2:
      return f(1, static_cast<T&&>(t).x_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::python_capi::detail::DoubledPair");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::python_capi::StringPair> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).normal_ref());
    case 2:
      return f(1, static_cast<T&&>(t).doubled_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::python_capi::StringPair");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::python_capi::VapidStruct> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::python_capi::VapidStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::python_capi::PrimitiveStruct> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).booly_ref());
    case 2:
      return f(1, static_cast<T&&>(t).charry_ref());
    case 3:
      return f(2, static_cast<T&&>(t).shortay_ref());
    case 5:
      return f(3, static_cast<T&&>(t).inty_ref());
    case 7:
      return f(4, static_cast<T&&>(t).longy_ref());
    case 8:
      return f(5, static_cast<T&&>(t).floaty_ref());
    case 9:
      return f(6, static_cast<T&&>(t).dubby_ref());
    case 12:
      return f(7, static_cast<T&&>(t).stringy_ref());
    case 13:
      return f(8, static_cast<T&&>(t).bytey_ref());
    case 14:
      return f(9, static_cast<T&&>(t).buffy_ref());
    case 15:
      return f(10, static_cast<T&&>(t).pointbuffy_ref());
    case 18:
      return f(11, static_cast<T&&>(t).patched_struct_ref());
    case 19:
      return f(12, static_cast<T&&>(t).empty_struct_ref());
    case 20:
      return f(13, static_cast<T&&>(t).fbstring_ref());
    case 21:
      return f(14, static_cast<T&&>(t).managed_string_view_ref());
    case 22:
      return f(15, static_cast<T&&>(t).some_error_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::python_capi::PrimitiveStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::python_capi::AdaptedFields> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).adapted_int_ref());
    case 2:
      return f(1, static_cast<T&&>(t).list_adapted_int_ref());
    case 3:
      return f(2, static_cast<T&&>(t).set_adapted_int_ref());
    case 4:
      return f(3, static_cast<T&&>(t).inline_adapted_int_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::python_capi::AdaptedFields");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::python_capi::ListStruct> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).boolz_ref());
    case 2:
      return f(1, static_cast<T&&>(t).intz_ref());
    case 3:
      return f(2, static_cast<T&&>(t).stringz_ref());
    case 4:
      return f(3, static_cast<T&&>(t).encoded_ref());
    case 5:
      return f(4, static_cast<T&&>(t).uidz_ref());
    case 6:
      return f(5, static_cast<T&&>(t).matrix_ref());
    case 7:
      return f(6, static_cast<T&&>(t).ucharz_ref());
    case 8:
      return f(7, static_cast<T&&>(t).voxels_ref());
    case 9:
      return f(8, static_cast<T&&>(t).buf_ptrs_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::python_capi::ListStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::python_capi::SetStruct> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).enumz_ref());
    case 2:
      return f(1, static_cast<T&&>(t).intz_ref());
    case 3:
      return f(2, static_cast<T&&>(t).binnaz_ref());
    case 4:
      return f(3, static_cast<T&&>(t).encoded_ref());
    case 5:
      return f(4, static_cast<T&&>(t).uidz_ref());
    case 6:
      return f(5, static_cast<T&&>(t).charz_ref());
    case 7:
      return f(6, static_cast<T&&>(t).setz_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::python_capi::SetStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::python_capi::MapStruct> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).enumz_ref());
    case 2:
      return f(1, static_cast<T&&>(t).intz_ref());
    case 3:
      return f(2, static_cast<T&&>(t).binnaz_ref());
    case 4:
      return f(3, static_cast<T&&>(t).encoded_ref());
    case 5:
      return f(4, static_cast<T&&>(t).flotz_ref());
    case 6:
      return f(5, static_cast<T&&>(t).map_list_ref());
    case 7:
      return f(6, static_cast<T&&>(t).list_map_ref());
    case 8:
      return f(7, static_cast<T&&>(t).fast_list_map_ref());
    case 9:
      return f(8, static_cast<T&&>(t).buf_map_ref());
    case 10:
      return f(9, static_cast<T&&>(t).unsigned_list_map_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::python_capi::MapStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::python_capi::ComposeStruct> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).enum__ref());
    case 2:
      return f(1, static_cast<T&&>(t).renamed__ref());
    case 3:
      return f(2, static_cast<T&&>(t).primitive_ref());
    case 4:
      return f(3, static_cast<T&&>(t).aliased_ref());
    case 6:
      return f(4, static_cast<T&&>(t).xstruct_ref());
    case 5:
      return f(5, static_cast<T&&>(t).xenum_ref());
    case 8:
      return f(6, static_cast<T&&>(t).serial_struct_ref());
    case 7:
      return f(7, static_cast<T&&>(t).friends_ref());
    case 9:
      return f(8, static_cast<T&&>(t).serial_union_ref());
    case 10:
      return f(9, static_cast<T&&>(t).serial_error_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::python_capi::ComposeStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::python_capi::Shallot> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).myEnum_ref());
    case 2:
      return f(1, static_cast<T&&>(t).myStruct_ref());
    case 6:
      return f(2, static_cast<T&&>(t).intSet_ref());
    case 4:
      return f(3, static_cast<T&&>(t).myString_ref());
    case 8:
      return f(4, static_cast<T&&>(t).doubleList_ref());
    case 9:
      return f(5, static_cast<T&&>(t).strMap_ref());
    case 10:
      return f(6, static_cast<T&&>(t).adaptedInt_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::python_capi::Shallot");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::python_capi::MyStructPatchStruct> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).assign_ref());
    case 2:
      return f(1, static_cast<T&&>(t).clear_ref());
    case 3:
      return f(2, static_cast<T&&>(t).patchPrior_ref());
    case 5:
      return f(3, static_cast<T&&>(t).ensure_ref());
    case 6:
      return f(4, static_cast<T&&>(t).patch_ref());
    case 7:
      return f(5, static_cast<T&&>(t).remove_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::python_capi::MyStructPatchStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::python_capi::MyStructField4PatchStruct> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).assign_ref());
    case 2:
      return f(1, static_cast<T&&>(t).clear_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::python_capi::MyStructField4PatchStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::python_capi::MyStructField6PatchStruct> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).assign_ref());
    case 2:
      return f(1, static_cast<T&&>(t).clear_ref());
    case 8:
      return f(2, static_cast<T&&>(t).prepend_ref());
    case 9:
      return f(3, static_cast<T&&>(t).append_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::python_capi::MyStructField6PatchStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::python_capi::MyStructField7PatchStruct> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).assign_ref());
    case 2:
      return f(1, static_cast<T&&>(t).clear_ref());
    case 3:
      return f(2, static_cast<T&&>(t).patchPrior_ref());
    case 5:
      return f(3, static_cast<T&&>(t).add_ref());
    case 6:
      return f(4, static_cast<T&&>(t).patch_ref());
    case 7:
      return f(5, static_cast<T&&>(t).remove_ref());
    case 9:
      return f(6, static_cast<T&&>(t).put_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::python_capi::MyStructField7PatchStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::python_capi::MyStructField8PatchStruct> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).assign_ref());
    case 2:
      return f(1, static_cast<T&&>(t).clear_ref());
    case 7:
      return f(2, static_cast<T&&>(t).remove_ref());
    case 8:
      return f(3, static_cast<T&&>(t).add_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::python_capi::MyStructField8PatchStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::python_capi::MyStructFieldPatchStruct> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).inty_ref());
    case 2:
      return f(1, static_cast<T&&>(t).stringy_ref());
    case 3:
      return f(2, static_cast<T&&>(t).myItemy_ref());
    case 4:
      return f(3, static_cast<T&&>(t).myEnumy_ref());
    case 5:
      return f(4, static_cast<T&&>(t).booly_ref());
    case 6:
      return f(5, static_cast<T&&>(t).floatListy_ref());
    case 7:
      return f(6, static_cast<T&&>(t).strMappy_ref());
    case 8:
      return f(7, static_cast<T&&>(t).intSetty_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::python_capi::MyStructFieldPatchStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::python_capi::MyStructEnsureStruct> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).inty_ref());
    case 2:
      return f(1, static_cast<T&&>(t).stringy_ref());
    case 3:
      return f(2, static_cast<T&&>(t).myItemy_ref());
    case 4:
      return f(3, static_cast<T&&>(t).myEnumy_ref());
    case 5:
      return f(4, static_cast<T&&>(t).booly_ref());
    case 6:
      return f(5, static_cast<T&&>(t).floatListy_ref());
    case 7:
      return f(6, static_cast<T&&>(t).strMappy_ref());
    case 8:
      return f(7, static_cast<T&&>(t).intSetty_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::python_capi::MyStructEnsureStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::python_capi::MyDataItemPatchStruct> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).assign_ref());
    case 2:
      return f(1, static_cast<T&&>(t).clear_ref());
    case 3:
      return f(2, static_cast<T&&>(t).patchPrior_ref());
    case 5:
      return f(3, static_cast<T&&>(t).ensure_ref());
    case 6:
      return f(4, static_cast<T&&>(t).patch_ref());
    case 7:
      return f(5, static_cast<T&&>(t).remove_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::python_capi::MyDataItemPatchStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::python_capi::MyDataItemFieldPatchStruct> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).s_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::python_capi::MyDataItemFieldPatchStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::python_capi::MyDataItemEnsureStruct> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).s_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::python_capi::MyDataItemEnsureStruct");
    }
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
