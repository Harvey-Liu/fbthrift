/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/includes/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/includes/gen-cpp2/module_types.h"

#include <thrift/lib/cpp2/gen/module_types_tcc.h>


namespace apache {
namespace thrift {
namespace detail {

template <>
struct TccStructTraits<::cpp2::MyStruct> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

template <class Protocol_>
void MyStruct::readNoXfer(Protocol_* iprot) {
  __fbthrift_clear_terse_fields();

  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_STRUCT))) {
    goto _loop;
  }
_readField_MyIncludedField:
  {
    _readState.beforeSubobject(iprot);
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::cpp2::Included>::readWithContext(*iprot, this->__fbthrift_field_MyIncludedField, _readState);
    _readState.afterSubobject(iprot);
    
  }
 this->__isset.set(0, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_STRUCT))) {
    goto _loop;
  }
_readField_MyOtherIncludedField:
  {
    _readState.beforeSubobject(iprot);
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::cpp2::Included>::readWithContext(*iprot, this->__fbthrift_field_MyOtherIncludedField, _readState);
    _readState.afterSubobject(iprot);
    
  }
 this->__isset.set(1, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          3,
          apache::thrift::protocol::T_I64))) {
    goto _loop;
  }
_readField_MyIncludedInt:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::cpp2::IncludedInt64>::readWithContext(*iprot, this->__fbthrift_field_MyIncludedInt, _readState);
    
  }
 this->__isset.set(2, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          3,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<MyStruct>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRUCT))) {
        goto _readField_MyIncludedField;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRUCT))) {
        goto _readField_MyOtherIncludedField;
      } else {
        goto _skip;
      }
    }
    case 3:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I64))) {
        goto _readField_MyIncludedInt;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t MyStruct::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyStruct");
  {
    xfer += prot_->serializedFieldSize("MyIncludedField", apache::thrift::protocol::T_STRUCT, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::cpp2::Included>::serializedSize<false>(*prot_, this->__fbthrift_field_MyIncludedField);
  }
  {
    xfer += prot_->serializedFieldSize("MyOtherIncludedField", apache::thrift::protocol::T_STRUCT, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::cpp2::Included>::serializedSize<false>(*prot_, this->__fbthrift_field_MyOtherIncludedField);
  }
  {
    xfer += prot_->serializedFieldSize("MyIncludedInt", apache::thrift::protocol::T_I64, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::cpp2::IncludedInt64>::serializedSize<false>(*prot_, this->__fbthrift_field_MyIncludedInt);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyStruct::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyStruct");
  {
    xfer += prot_->serializedFieldSize("MyIncludedField", apache::thrift::protocol::T_STRUCT, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::cpp2::Included>::serializedSize<true>(*prot_, this->__fbthrift_field_MyIncludedField);
  }
  {
    xfer += prot_->serializedFieldSize("MyOtherIncludedField", apache::thrift::protocol::T_STRUCT, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::cpp2::Included>::serializedSize<true>(*prot_, this->__fbthrift_field_MyOtherIncludedField);
  }
  {
    xfer += prot_->serializedFieldSize("MyIncludedInt", apache::thrift::protocol::T_I64, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::cpp2::IncludedInt64>::serializedSize<false>(*prot_, this->__fbthrift_field_MyIncludedInt);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyStruct::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("MyStruct");
  bool previousFieldHasValue = true;
  {
    constexpr int16_t kPrevFieldId = 0;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRUCT, 1, kPrevFieldId>(*prot_, "MyIncludedField", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::cpp2::Included>::write(*prot_, this->__fbthrift_field_MyIncludedField);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 1;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRUCT, 2, kPrevFieldId>(*prot_, "MyOtherIncludedField", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::cpp2::Included>::write(*prot_, this->__fbthrift_field_MyOtherIncludedField);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 2;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I64, 3, kPrevFieldId>(*prot_, "MyIncludedInt", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::cpp2::IncludedInt64>::write(*prot_, this->__fbthrift_field_MyIncludedInt);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void MyStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t MyStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t MyStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void MyStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t MyStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t MyStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2
