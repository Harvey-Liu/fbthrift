/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/types/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/types/gen-cpp2/module_fatal.h"

#include <fatal/type/enum.h>

#include <type_traits>

namespace apache { namespace thrift { namespace fixtures { namespace types {

namespace __fbthrift_refl {

class has_bitwise_ops_enum_traits {
 public:
  using type = ::apache::thrift::fixtures::types::has_bitwise_ops;

 private:
  struct __fbthrift_strings {
    using none = __fbthrift_strings_module::none;
    using zero = __fbthrift_strings_module::zero;
    using one = __fbthrift_strings_module::one;
    using two = __fbthrift_strings_module::two;
    using three = __fbthrift_strings_module::three;
  };

  struct __fbthrift_value_none {
    using name = __fbthrift_strings::none;
    using value = std::integral_constant<type, type::none>;
    using annotations = ::apache::thrift::detail::reflection_impl::no_annotations;
  };

  struct __fbthrift_value_zero {
    using name = __fbthrift_strings::zero;
    using value = std::integral_constant<type, type::zero>;
    using annotations = ::apache::thrift::detail::reflection_impl::no_annotations;
  };

  struct __fbthrift_value_one {
    using name = __fbthrift_strings::one;
    using value = std::integral_constant<type, type::one>;
    using annotations = ::apache::thrift::detail::reflection_impl::no_annotations;
  };

  struct __fbthrift_value_two {
    using name = __fbthrift_strings::two;
    using value = std::integral_constant<type, type::two>;
    using annotations = ::apache::thrift::detail::reflection_impl::no_annotations;
  };

  struct __fbthrift_value_three {
    using name = __fbthrift_strings::three;
    using value = std::integral_constant<type, type::three>;
    using annotations = ::apache::thrift::detail::reflection_impl::no_annotations;
  };

  struct __fbthrift_member {
    using none = __fbthrift_value_none;
    using zero = __fbthrift_value_zero;
    using one = __fbthrift_value_one;
    using two = __fbthrift_value_two;
    using three = __fbthrift_value_three;
  };

 public:
  using name = __fbthrift_strings_module::has_bitwise_ops;
  using member = __fbthrift_member;
  using fields = ::fatal::list<
      member::none,
      member::zero,
      member::one,
      member::two,
      member::three
  >;

  class annotations {
    struct __fbthrift_keys {
      using cpp_declare_bitwise_ops = __fbthrift_strings_module::cpp_declare_bitwise_ops;
    };

    struct __fbthrift_values {
      using cpp_declare_bitwise_ops = ::fatal::sequence<char, '1'>;
    };

   public:
    using keys = __fbthrift_keys;
    using values = __fbthrift_values;
    using map = ::fatal::list<
      ::apache::thrift::annotation<keys::cpp_declare_bitwise_ops, values::cpp_declare_bitwise_ops>
    >;
  };

  static char const *to_string(type e, char const *fallback) {
    switch (e) {
      case type::none: return "none";
      case type::zero: return "zero";
      case type::one: return "one";
      case type::two: return "two";
      case type::three: return "three";
      default: return fallback;
    }
  }
};

} // __fbthrift_refl

FATAL_REGISTER_ENUM_TRAITS(
  __fbthrift_refl::has_bitwise_ops_enum_traits,
  ::apache::thrift::detail::type_common_metadata_impl<
    module_tags::module,
    ::apache::thrift::reflected_annotations<__fbthrift_refl::has_bitwise_ops_enum_traits::annotations>,
    static_cast<::apache::thrift::legacy_type_id_t>(1216557680140306888ull)
  >
);
namespace __fbthrift_refl {

class is_unscoped_enum_traits {
 public:
  using type = ::apache::thrift::fixtures::types::is_unscoped;

 private:
  struct __fbthrift_strings {
    using hello = __fbthrift_strings_module::hello;
    using world = __fbthrift_strings_module::world;
  };

  struct __fbthrift_value_hello {
    using name = __fbthrift_strings::hello;
    using value = std::integral_constant<type, type::hello>;
    using annotations = ::apache::thrift::detail::reflection_impl::no_annotations;
  };

  struct __fbthrift_value_world {
    using name = __fbthrift_strings::world;
    using value = std::integral_constant<type, type::world>;
    using annotations = ::apache::thrift::detail::reflection_impl::no_annotations;
  };

  struct __fbthrift_member {
    using hello = __fbthrift_value_hello;
    using world = __fbthrift_value_world;
  };

 public:
  using name = __fbthrift_strings_module::is_unscoped;
  using member = __fbthrift_member;
  using fields = ::fatal::list<
      member::hello,
      member::world
  >;

  class annotations {
    struct __fbthrift_keys {
      using cpp_deprecated_enum_unscoped = __fbthrift_strings_module::cpp_deprecated_enum_unscoped;
    };

    struct __fbthrift_values {
      using cpp_deprecated_enum_unscoped = ::fatal::sequence<char, '1'>;
    };

   public:
    using keys = __fbthrift_keys;
    using values = __fbthrift_values;
    using map = ::fatal::list<
      ::apache::thrift::annotation<keys::cpp_deprecated_enum_unscoped, values::cpp_deprecated_enum_unscoped>
    >;
  };

  static char const *to_string(type e, char const *fallback) {
    switch (e) {
      case type::hello: return "hello";
      case type::world: return "world";
      default: return fallback;
    }
  }
};

} // __fbthrift_refl

FATAL_REGISTER_ENUM_TRAITS(
  __fbthrift_refl::is_unscoped_enum_traits,
  ::apache::thrift::detail::type_common_metadata_impl<
    module_tags::module,
    ::apache::thrift::reflected_annotations<__fbthrift_refl::is_unscoped_enum_traits::annotations>,
    static_cast<::apache::thrift::legacy_type_id_t>(2509072249807621768ull)
  >
);
namespace __fbthrift_refl {

class MyForwardRefEnum_enum_traits {
 public:
  using type = ::apache::thrift::fixtures::types::MyForwardRefEnum;

 private:
  struct __fbthrift_strings {
    using ZERO = __fbthrift_strings_module::ZERO;
    using NONZERO = __fbthrift_strings_module::NONZERO;
  };

  struct __fbthrift_value_ZERO {
    using name = __fbthrift_strings::ZERO;
    using value = std::integral_constant<type, type::ZERO>;
    using annotations = ::apache::thrift::detail::reflection_impl::no_annotations;
  };

  struct __fbthrift_value_NONZERO {
    using name = __fbthrift_strings::NONZERO;
    using value = std::integral_constant<type, type::NONZERO>;
    using annotations = ::apache::thrift::detail::reflection_impl::no_annotations;
  };

  struct __fbthrift_member {
    using ZERO = __fbthrift_value_ZERO;
    using NONZERO = __fbthrift_value_NONZERO;
  };

 public:
  using name = __fbthrift_strings_module::MyForwardRefEnum;
  using member = __fbthrift_member;
  using fields = ::fatal::list<
      member::ZERO,
      member::NONZERO
  >;

  using annotations = ::apache::thrift::detail::reflection_impl::no_annotations;

  static char const *to_string(type e, char const *fallback) {
    switch (e) {
      case type::ZERO: return "ZERO";
      case type::NONZERO: return "NONZERO";
      default: return fallback;
    }
  }
};

} // __fbthrift_refl

FATAL_REGISTER_ENUM_TRAITS(
  __fbthrift_refl::MyForwardRefEnum_enum_traits,
  ::apache::thrift::detail::type_common_metadata_impl<
    module_tags::module,
    ::apache::thrift::reflected_annotations<__fbthrift_refl::MyForwardRefEnum_enum_traits::annotations>,
    static_cast<::apache::thrift::legacy_type_id_t>(11057525912578401640ull)
  >
);
namespace __fbthrift_refl {

class MyEnumA_enum_traits {
 public:
  using type = ::apache::thrift::fixtures::types::MyEnumA;

 private:
  struct __fbthrift_strings {
    using fieldA = __fbthrift_strings_module::fieldA;
    using fieldB = __fbthrift_strings_module::fieldB;
    using fieldC = __fbthrift_strings_module::fieldC;
  };

  struct __fbthrift_value_fieldA {
    using name = __fbthrift_strings::fieldA;
    using value = std::integral_constant<type, type::fieldA>;
    using annotations = ::apache::thrift::detail::reflection_impl::no_annotations;
  };

  struct __fbthrift_value_fieldB {
    using name = __fbthrift_strings::fieldB;
    using value = std::integral_constant<type, type::fieldB>;
    using annotations = ::apache::thrift::detail::reflection_impl::no_annotations;
  };

  struct __fbthrift_value_fieldC {
    using name = __fbthrift_strings::fieldC;
    using value = std::integral_constant<type, type::fieldC>;
    using annotations = ::apache::thrift::detail::reflection_impl::no_annotations;
  };

  struct __fbthrift_member {
    using fieldA = __fbthrift_value_fieldA;
    using fieldB = __fbthrift_value_fieldB;
    using fieldC = __fbthrift_value_fieldC;
  };

 public:
  using name = __fbthrift_strings_module::MyEnumA;
  using member = __fbthrift_member;
  using fields = ::fatal::list<
      member::fieldA,
      member::fieldB,
      member::fieldC
  >;

  using annotations = ::apache::thrift::detail::reflection_impl::no_annotations;

  static char const *to_string(type e, char const *fallback) {
    switch (e) {
      case type::fieldA: return "fieldA";
      case type::fieldB: return "fieldB";
      case type::fieldC: return "fieldC";
      default: return fallback;
    }
  }
};

} // __fbthrift_refl

FATAL_REGISTER_ENUM_TRAITS(
  __fbthrift_refl::MyEnumA_enum_traits,
  ::apache::thrift::detail::type_common_metadata_impl<
    module_tags::module,
    ::apache::thrift::reflected_annotations<__fbthrift_refl::MyEnumA_enum_traits::annotations>,
    static_cast<::apache::thrift::legacy_type_id_t>(12764631319602759848ull)
  >
);
}}}} // apache::thrift::fixtures::types
