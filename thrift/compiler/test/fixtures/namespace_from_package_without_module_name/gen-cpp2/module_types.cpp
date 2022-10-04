/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/namespace_from_package_without_module_name/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/namespace_from_package_without_module_name/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/namespace_from_package_without_module_name/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/namespace_from_package_without_module_name/gen-cpp2/module_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::test::namespace_from_package_without_module_name::Foo>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::test::namespace_from_package_without_module_name::Foo>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace test { namespace namespace_from_package_without_module_name {

const char* Foo::__fbthrift_thrift_uri() {
  return "test.dev/namespace_from_package_without_module_name/Foo";
}

const folly::StringPiece Foo::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<Foo>::fields_names[folly::to_underlying(ord) - 1];
}


Foo::Foo(apache::thrift::FragileConstructor, ::std::int64_t MyInt__arg) :
    __fbthrift_field_MyInt(std::move(MyInt__arg)) {
  __isset.set(folly::index_constant<0>(), true);
}


void Foo::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_MyInt = ::std::int64_t();
  __isset = {};
}

void Foo::__fbthrift_clear_terse_fields() {
}

bool Foo::__fbthrift_is_empty() const {
  return false;
}

bool Foo::operator==(FOLLY_MAYBE_UNUSED const Foo& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.MyInt_ref() == rhs.MyInt_ref())) {
    return false;
  }
  return true;
}

bool Foo::operator<(FOLLY_MAYBE_UNUSED const Foo& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.MyInt_ref() == rhs.MyInt_ref())) {
    return lhs.MyInt_ref() < rhs.MyInt_ref();
  }
  return false;
}


void swap(FOLLY_MAYBE_UNUSED Foo& a, FOLLY_MAYBE_UNUSED Foo& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_MyInt, b.__fbthrift_field_MyInt);
  swap(a.__isset, b.__isset);
}

template void Foo::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Foo::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Foo::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Foo::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Foo::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Foo::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Foo::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Foo::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


}} // test::namespace_from_package_without_module_name

namespace test { namespace namespace_from_package_without_module_name { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}}} // test::namespace_from_package_without_module_name
