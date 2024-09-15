/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/doctext/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/doctext/gen-cpp2/module_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

FOLLY_CLANG_DISABLE_WARNING("-Wunused-macros")

#if defined(__GNUC__) && defined(__linux__) && !FOLLY_MOBILE
// These attributes are applied to the static data members to ensure that they
// are not stripped from the compiled binary, in order to keep them available
// for use by debuggers at runtime.
//
// The "used" attribute is required to ensure the compiler always emits unused
// data.
//
// The "section" attribute is required to stop the linker from stripping used
// data. It works by forcing all of the data members (both used and unused ones)
// into the same section. As the linker strips data on a per-section basis, it
// is then unable to remove unused data without also removing used data.
// This has a similar effect to the "retain" attribute, but works with older
// toolchains.
#define THRIFT_DATA_MEMBER [[gnu::used]] [[gnu::section(".rodata.thrift.data")]]
#else
#define THRIFT_DATA_MEMBER
#endif

namespace apache {
namespace thrift {

THRIFT_DATA_MEMBER const folly::StringPiece TStructDataStorage<::cpp2::A>::name = "A";
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::A>::fields_names = {{
  "useless_field",
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 1> TStructDataStorage<::cpp2::A>::fields_ids = {{
  1,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 1> TStructDataStorage<::cpp2::A>::fields_types = {{
  TType::T_I32,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::A>::storage_names = {{
  "__fbthrift_field_useless_field",
}};
THRIFT_DATA_MEMBER const std::array<int, 1> TStructDataStorage<::cpp2::A>::isset_indexes = {{
  0,
}};

THRIFT_DATA_MEMBER const folly::StringPiece TStructDataStorage<::cpp2::U>::name = "U";
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::U>::fields_names = {{
  "i",
  "s",
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 2> TStructDataStorage<::cpp2::U>::fields_ids = {{
  1,
  2,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 2> TStructDataStorage<::cpp2::U>::fields_types = {{
  TType::T_I32,
  TType::T_STRING,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::U>::storage_names = {{
  "i",
  "s",
}};
THRIFT_DATA_MEMBER const std::array<int, 2> TStructDataStorage<::cpp2::U>::isset_indexes = {{
  0,
  1,
}};

THRIFT_DATA_MEMBER const folly::StringPiece TStructDataStorage<::cpp2::Bang>::name = "Bang";
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::Bang>::fields_names = {{
  "message",
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 1> TStructDataStorage<::cpp2::Bang>::fields_ids = {{
  1,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 1> TStructDataStorage<::cpp2::Bang>::fields_types = {{
  TType::T_STRING,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::Bang>::storage_names = {{
  "__fbthrift_field_message",
}};
THRIFT_DATA_MEMBER const std::array<int, 1> TStructDataStorage<::cpp2::Bang>::isset_indexes = {{
  0,
}};

} // namespace thrift
} // namespace apache
