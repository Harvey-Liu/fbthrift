/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/empty-struct/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace ident {
} // namespace ident
namespace detail {
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace cpp2 {
class Empty;
class Nada;
} // cpp2
// END forward_declare
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;


class Empty final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;
  template<class> friend struct ::apache::thrift::detail::invoke_reffer;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static const folly::StringPiece __fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord);
  using __fbthrift_reflection_ident_list = folly::tag_t<
  >;


  void __fbthrift_clear();
  void __fbthrift_clear_terse_fields();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = Empty;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  Empty() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Empty(apache::thrift::FragileConstructor);

  Empty(Empty&&) = default;

  Empty(const Empty&) = default;


  Empty& operator=(Empty&&) = default;

  Empty& operator=(const Empty&) = default;

 public:

  bool operator==(const Empty&) const;
  bool operator<(const Empty&) const;

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

  friend class ::apache::thrift::Cpp2Ops<Empty>;
  friend void swap(Empty& a, Empty& b);
};

template <class Protocol_>
unsigned long Empty::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}


class Nada final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;
  template<class> friend struct ::apache::thrift::detail::invoke_reffer;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static const folly::StringPiece __fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord);
  using __fbthrift_reflection_ident_list = folly::tag_t<
  >;


  void __fbthrift_clear();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = Nada;
  static constexpr bool __fbthrift_cpp2_is_union =
    true;


 public:
  enum Type : int {
    __EMPTY__ = 0,
  } ;

  Nada()
      : type_(folly::to_underlying(Type::__EMPTY__)) {}

  Nada(Nada&& rhs) noexcept
      : type_(folly::to_underlying(Type::__EMPTY__)) {
    if (this == &rhs) { return; }
    switch (rhs.getType()) {
      case Type::__EMPTY__:
      {
        return;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    apache::thrift::clear(rhs);
  }

  Nada(const Nada& rhs)
      : type_(folly::to_underlying(Type::__EMPTY__)) {
    if (this == &rhs) { return; }
    switch (rhs.getType()) {
      case Type::__EMPTY__:
      {
        return;
      }
      default:
      {
        assert(false);
        break;
      }
    }
  }

  Nada& operator=(Nada&& rhs) noexcept {
    if (this == &rhs) { return *this; }
    __fbthrift_clear();
    switch (rhs.getType()) {
      case Type::__EMPTY__:
      {
        return *this;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    apache::thrift::clear(rhs);
    return *this;
  }

  Nada& operator=(const Nada& rhs) {
    if (this == &rhs) { return *this; }
    __fbthrift_clear();
    switch (rhs.getType()) {
      case Type::__EMPTY__:
      {
        return *this;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    return *this;
  }

  ~Nada() {
    apache::thrift::clear(*this);
  }

  union storage_type {

    storage_type() {}
    ~storage_type() {}
  } ;

  bool operator==(const Nada&) const;
  bool operator<(const Nada&) const;

  Type getType() const { return static_cast<Type>(type_); }

  template <class Protocol_>
  unsigned long read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
 protected:
  template <class T>
  void destruct(T &val) {
    (&val)->~T();
  }

  storage_type value_;
  std::underlying_type_t<Type> type_;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<Nada>;
  friend void swap(Nada& a, Nada& b);
};

template <class Protocol_>
unsigned long Nada::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}


} // cpp2

namespace apache { namespace thrift {

template <> struct TEnumDataStorage<::cpp2::Nada::Type>;

template <> struct TEnumTraits<::cpp2::Nada::Type> {
  using type = ::cpp2::Nada::Type;

  static constexpr std::size_t const size = 0;
  static folly::Range<type const*> const values;
  static folly::Range<folly::StringPiece const*> const names;

  static bool findName(type value, folly::StringPiece* out) noexcept;
  static bool findValue(folly::StringPiece name, type* out) noexcept;

#if FOLLY_HAS_STRING_VIEW
  static bool findName(type value, std::string_view* out) noexcept {
    folly::StringPiece outp;
    return findName(value, &outp) && ((*out = outp), true);
  }
#endif
  static char const* findName(type value) noexcept {
    folly::StringPiece ret;
    (void)findName(value, &ret);
    return ret.data();
  }
};
}} // apache::thrift
