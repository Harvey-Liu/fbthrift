/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/deprecated-public-fields-for-cpp-ref/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace ident {
struct foo;
struct bar;
} // namespace ident
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_foo
#define APACHE_THRIFT_ACCESSOR_foo
APACHE_THRIFT_DEFINE_ACCESSOR(foo);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_bar
#define APACHE_THRIFT_ACCESSOR_bar
APACHE_THRIFT_DEFINE_ACCESSOR(bar);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace cpp2 {
class Foo;
} // cpp2
// END forward_declare
namespace apache::thrift::detail::annotation {
} // namespace apache::thrift::detail::annotation

namespace apache::thrift::detail::qualifier {
template<>
struct is_cpp_ref_field_optional<::cpp2::Foo,::apache::thrift::type::field_id<1>> : std::true_type{};
template<>
struct is_cpp_ref_field_optional<::cpp2::Foo,::apache::thrift::type::field_id<2>> : std::true_type{};
} // namespace apache::thrift::detail::qualifier

// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;


class Foo final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;
  template<class> friend struct ::apache::thrift::detail::invoke_reffer;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_is_runtime_annotation = false;
  static const folly::StringPiece __fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord);
  static const folly::StringPiece __fbthrift_get_class_name();
  using __fbthrift_reflection_ident_list = folly::tag_t<
    ::apache::thrift::ident::foo,
    ::apache::thrift::ident::bar
  >;

  static constexpr std::int16_t __fbthrift_reflection_field_id_list[] = {0,1,2};
  using __fbthrift_reflection_type_tags = folly::tag_t<
    ::apache::thrift::type::struct_t<::cpp2::Foo>,
    ::apache::thrift::type::struct_t<::cpp2::Foo>
  >;

  static constexpr std::size_t __fbthrift_field_size_v = 2;

  template<class T>
  using __fbthrift_id = ::apache::thrift::type::field_id<__fbthrift_reflection_field_id_list[folly::to_underlying(T::value)]>;

  template<class T>
  using __fbthrift_type_tag = ::apache::thrift::detail::at<__fbthrift_reflection_type_tags, T::value>;

  template<class T>
  using __fbthrift_ident = ::apache::thrift::detail::at<__fbthrift_reflection_ident_list, T::value>;

  template<class T> using __fbthrift_ordinal = ::apache::thrift::type::ordinal_tag<
    ::apache::thrift::detail::getFieldOrdinal<T,
                                              __fbthrift_reflection_ident_list,
                                              __fbthrift_reflection_type_tags>(
      __fbthrift_reflection_field_id_list
    )
  >;
  void __fbthrift_clear();
  void __fbthrift_clear_terse_fields();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = Foo;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  Foo();

  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Foo(apache::thrift::FragileConstructor, ::std::unique_ptr<::cpp2::Foo> foo__arg, ::std::shared_ptr<::cpp2::Foo> bar__arg);

  Foo(Foo&&) noexcept;
  Foo(const Foo& src);


  Foo& operator=(Foo&&) noexcept;
  Foo& operator=(const Foo& src);

  ~Foo();

 private:
  ::std::unique_ptr<::cpp2::Foo> __fbthrift_field_foo;
 private:
  ::std::shared_ptr<::cpp2::Foo> __fbthrift_field_bar;

 public:

  bool operator==(const Foo&) const;
  bool operator<(const Foo&) const;
  template <typename ..., typename T = ::std::unique_ptr<::cpp2::Foo>>
  FOLLY_ERASE T& foo_ref() & {
    return __fbthrift_field_foo;
  }

  template <typename ..., typename T = ::std::unique_ptr<::cpp2::Foo>>
  FOLLY_ERASE const T& foo_ref() const& {
    return __fbthrift_field_foo;
  }

  template <typename ..., typename T = ::std::unique_ptr<::cpp2::Foo>>
  FOLLY_ERASE T&& foo_ref() && {
    return static_cast<T&&>(__fbthrift_field_foo);
  }

  template <typename ..., typename T = ::std::unique_ptr<::cpp2::Foo>>
  FOLLY_ERASE const T&& foo_ref() const&& {
    return static_cast<const T&&>(__fbthrift_field_foo);
  }

  template <typename ..., typename T = ::std::unique_ptr<::cpp2::Foo>>
  FOLLY_ERASE T& foo() & {
    return __fbthrift_field_foo;
  }

  template <typename ..., typename T = ::std::unique_ptr<::cpp2::Foo>>
  FOLLY_ERASE const T& foo() const& {
    return __fbthrift_field_foo;
  }

  template <typename ..., typename T = ::std::unique_ptr<::cpp2::Foo>>
  FOLLY_ERASE T&& foo() && {
    return static_cast<T&&>(__fbthrift_field_foo);
  }

  template <typename ..., typename T = ::std::unique_ptr<::cpp2::Foo>>
  FOLLY_ERASE const T&& foo() const&& {
    return static_cast<const T&&>(__fbthrift_field_foo);
  }
  template <typename ..., typename T = ::std::shared_ptr<::cpp2::Foo>>
  FOLLY_ERASE T& bar_ref() & {
    return __fbthrift_field_bar;
  }

  template <typename ..., typename T = ::std::shared_ptr<::cpp2::Foo>>
  FOLLY_ERASE const T& bar_ref() const& {
    return __fbthrift_field_bar;
  }

  template <typename ..., typename T = ::std::shared_ptr<::cpp2::Foo>>
  FOLLY_ERASE T&& bar_ref() && {
    return static_cast<T&&>(__fbthrift_field_bar);
  }

  template <typename ..., typename T = ::std::shared_ptr<::cpp2::Foo>>
  FOLLY_ERASE const T&& bar_ref() const&& {
    return static_cast<const T&&>(__fbthrift_field_bar);
  }

  template <typename ..., typename T = ::std::shared_ptr<::cpp2::Foo>>
  FOLLY_ERASE T& bar() & {
    return __fbthrift_field_bar;
  }

  template <typename ..., typename T = ::std::shared_ptr<::cpp2::Foo>>
  FOLLY_ERASE const T& bar() const& {
    return __fbthrift_field_bar;
  }

  template <typename ..., typename T = ::std::shared_ptr<::cpp2::Foo>>
  FOLLY_ERASE T&& bar() && {
    return static_cast<T&&>(__fbthrift_field_bar);
  }

  template <typename ..., typename T = ::std::shared_ptr<::cpp2::Foo>>
  FOLLY_ERASE const T&& bar() const&& {
    return static_cast<const T&&>(__fbthrift_field_bar);
  }

  template <class Protocol_>
  unsigned long read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<Foo>;
  friend void swap(Foo& a, Foo& b);
};

template <class Protocol_>
unsigned long Foo::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}


} // cpp2
