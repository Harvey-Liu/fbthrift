/**
 * Autogenerated by Thrift for src/enums.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once


#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/enums_types.h"

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/enums_fatal.h"

#include <fatal/type/traits.h>
#include <fatal/type/list.h>

namespace facebook { namespace ns { namespace qwerty {

namespace __fbthrift_refl {

class SomeStruct_struct_traits {
  class __fbthrift_annotations {
    class __fbthrift_members {
      class __fbthrift_field_fieldA {
       public:
        using keys = void;
        using values = void;
        using map = ::fatal::list<>;
      };

     public:
      using fieldA = ::apache::thrift::reflected_annotations<__fbthrift_field_fieldA>;
    };

   public:
    using keys = void;
    using values = void;
    using map = ::fatal::list<>;
    using members = __fbthrift_members;
  };

  struct __fbthrift_member_fieldA {
    using owner = ::facebook::ns::qwerty::SomeStruct;
    using name = __fbthrift_strings_enums::fieldA;
    using type = int32_t;
    static constexpr ::apache::thrift::field_id_t id = 1;
    static constexpr auto optional = ::apache::thrift::optionality::required_of_writer;
    using getter = ::apache::thrift::detail::reflection_impl::data_member_accessor<::apache::thrift::tag::fieldA>;
    using field_ref_getter = ::apache::thrift::detail::invoke_reffer<::apache::thrift::tag::fieldA>;
    using type_class = ::apache::thrift::type_class::integral;
    using annotations = ::apache::thrift::reflected_annotations<__fbthrift_annotations::members::fieldA>;
  };

  struct __fbthrift_member {
    using fieldA = ::apache::thrift::reflected_struct_data_member<__fbthrift_member_fieldA>;
  };
 public:
  using type = ::facebook::ns::qwerty::SomeStruct;
  using name = __fbthrift_strings_enums::SomeStruct;
  using member = __fbthrift_member;
  using members = ::fatal::list<
      member::fieldA
  >;
  using members_annotations = __fbthrift_annotations::members;
  using metadata = ::apache::thrift::detail::type_common_metadata_impl<
      enums_tags::module,
      ::apache::thrift::reflected_annotations<__fbthrift_annotations>,
      static_cast<::apache::thrift::legacy_type_id_t>(1381543068409327820ull)
  >;
};

} // __fbthrift_refl

THRIFT_REGISTER_STRUCT_TRAITS(SomeStruct, __fbthrift_refl::SomeStruct_struct_traits);

}}} // facebook::ns::qwerty
