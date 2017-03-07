/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/io/IOBuf.h>
#include <folly/io/Cursor.h>

#include <thrift/lib/cpp2/GeneratedHeaderHelper.h>



namespace apache { namespace thrift { namespace fixtures { namespace types {

class decorated_struct;
typedef std::map<std::string, int64_t> decorated_map;

}}}} // apache::thrift::fixtures::types
namespace std {

template<> struct hash<typename  ::apache::thrift::fixtures::types::decorated_map> {
  size_t operator()(const  ::apache::thrift::fixtures::types::decorated_map&) const;
};
template<> struct equal_to<typename  ::apache::thrift::fixtures::types::decorated_map> {
  bool operator()(const  ::apache::thrift::fixtures::types::decorated_map&,const  ::apache::thrift::fixtures::types::decorated_map&) const;
};

} // std
namespace apache { namespace thrift { namespace fixtures { namespace types {

class decorated_struct : private apache::thrift::detail::st::ComparisonOperators<decorated_struct> {
 public:

  decorated_struct() {}
  // FragileConstructor for use in initialization lists only

  decorated_struct(apache::thrift::FragileConstructor, std::string field__arg) :
      field(std::move(field__arg)) {
    __isset.field = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  decorated_struct(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    decorated_struct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    field = arg.move();
    __isset.field = true;
  }

  decorated_struct(decorated_struct&&) = default;

  decorated_struct(const decorated_struct&) = default;

  decorated_struct& operator=(decorated_struct&&) = default;

  decorated_struct& operator=(const decorated_struct&) = default;
  void __clear();

  virtual ~decorated_struct() throw() {}

  std::string field;

  struct __isset {
    void __clear() {
      field = false;
    }

    bool field = false;
  } __isset;
  bool operator==(const decorated_struct& rhs) const;

  bool operator < (const decorated_struct& rhs) const {
    if (!(field == rhs.field)) {
      return field < rhs.field;
    }
    (void)rhs;
    return false;
  }

  const std::string& get_field() const& {
    return field;
  }

  std::string get_field() && {
    return std::move(field);
  }

  template <typename T_decorated_struct_field_struct_setter>
  std::string& set_field(T_decorated_struct_field_struct_setter&& field_) {
    field = std::forward<T_decorated_struct_field_struct_setter>(field_);
    __isset.field = true;
    return field;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

void swap(decorated_struct& a, decorated_struct& b);
extern template uint32_t decorated_struct::read<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t decorated_struct::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t decorated_struct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t decorated_struct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t decorated_struct::read<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t decorated_struct::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t decorated_struct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t decorated_struct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}}}} // apache::thrift::fixtures::types
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::apache::thrift::fixtures::types::decorated_struct>::clear( ::apache::thrift::fixtures::types::decorated_struct* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::apache::thrift::fixtures::types::decorated_struct>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::fixtures::types::decorated_struct>::write(Protocol* proto,  ::apache::thrift::fixtures::types::decorated_struct const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::fixtures::types::decorated_struct>::read(Protocol* proto,  ::apache::thrift::fixtures::types::decorated_struct* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::fixtures::types::decorated_struct>::serializedSize(Protocol const* proto,  ::apache::thrift::fixtures::types::decorated_struct const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::fixtures::types::decorated_struct>::serializedSizeZC(Protocol const* proto,  ::apache::thrift::fixtures::types::decorated_struct const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace std {

template<> struct hash<typename  ::apache::thrift::fixtures::types::decorated_struct> {
  size_t operator()(const  ::apache::thrift::fixtures::types::decorated_struct&) const;
};
template<> struct equal_to<typename  ::apache::thrift::fixtures::types::decorated_struct> {
  bool operator()(const  ::apache::thrift::fixtures::types::decorated_struct&,const  ::apache::thrift::fixtures::types::decorated_struct&) const;
};

} // std
namespace apache { namespace thrift { namespace fixtures { namespace types {

}}}} // apache::thrift::fixtures::types
