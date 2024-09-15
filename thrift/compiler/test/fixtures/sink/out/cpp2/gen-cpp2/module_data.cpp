/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/sink/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/sink/gen-cpp2/module_data.h"

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

THRIFT_DATA_MEMBER const folly::StringPiece TStructDataStorage<::cpp2::InitialResponse>::name = "InitialResponse";
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::InitialResponse>::fields_names = {{
  "content",
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 1> TStructDataStorage<::cpp2::InitialResponse>::fields_ids = {{
  1,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 1> TStructDataStorage<::cpp2::InitialResponse>::fields_types = {{
  TType::T_STRING,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::InitialResponse>::storage_names = {{
  "__fbthrift_field_content",
}};
THRIFT_DATA_MEMBER const std::array<int, 1> TStructDataStorage<::cpp2::InitialResponse>::isset_indexes = {{
  0,
}};

THRIFT_DATA_MEMBER const folly::StringPiece TStructDataStorage<::cpp2::FinalResponse>::name = "FinalResponse";
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::FinalResponse>::fields_names = {{
  "content",
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 1> TStructDataStorage<::cpp2::FinalResponse>::fields_ids = {{
  1,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 1> TStructDataStorage<::cpp2::FinalResponse>::fields_types = {{
  TType::T_STRING,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::FinalResponse>::storage_names = {{
  "__fbthrift_field_content",
}};
THRIFT_DATA_MEMBER const std::array<int, 1> TStructDataStorage<::cpp2::FinalResponse>::isset_indexes = {{
  0,
}};

THRIFT_DATA_MEMBER const folly::StringPiece TStructDataStorage<::cpp2::SinkPayload>::name = "SinkPayload";
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::SinkPayload>::fields_names = {{
  "content",
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 1> TStructDataStorage<::cpp2::SinkPayload>::fields_ids = {{
  1,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 1> TStructDataStorage<::cpp2::SinkPayload>::fields_types = {{
  TType::T_STRING,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::SinkPayload>::storage_names = {{
  "__fbthrift_field_content",
}};
THRIFT_DATA_MEMBER const std::array<int, 1> TStructDataStorage<::cpp2::SinkPayload>::isset_indexes = {{
  0,
}};

THRIFT_DATA_MEMBER const folly::StringPiece TStructDataStorage<::cpp2::CompatibleWithKeywordSink>::name = "CompatibleWithKeywordSink";
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::CompatibleWithKeywordSink>::fields_names = {{
  "sink",
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 1> TStructDataStorage<::cpp2::CompatibleWithKeywordSink>::fields_ids = {{
  1,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 1> TStructDataStorage<::cpp2::CompatibleWithKeywordSink>::fields_types = {{
  TType::T_STRING,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::CompatibleWithKeywordSink>::storage_names = {{
  "__fbthrift_field_sink",
}};
THRIFT_DATA_MEMBER const std::array<int, 1> TStructDataStorage<::cpp2::CompatibleWithKeywordSink>::isset_indexes = {{
  0,
}};

THRIFT_DATA_MEMBER const folly::StringPiece TStructDataStorage<::cpp2::InitialException>::name = "InitialException";
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::InitialException>::fields_names = {{
  "reason",
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 1> TStructDataStorage<::cpp2::InitialException>::fields_ids = {{
  1,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 1> TStructDataStorage<::cpp2::InitialException>::fields_types = {{
  TType::T_STRING,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::InitialException>::storage_names = {{
  "__fbthrift_field_reason",
}};
THRIFT_DATA_MEMBER const std::array<int, 1> TStructDataStorage<::cpp2::InitialException>::isset_indexes = {{
  0,
}};

THRIFT_DATA_MEMBER const folly::StringPiece TStructDataStorage<::cpp2::SinkException1>::name = "SinkException1";
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::SinkException1>::fields_names = {{
  "reason",
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 1> TStructDataStorage<::cpp2::SinkException1>::fields_ids = {{
  1,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 1> TStructDataStorage<::cpp2::SinkException1>::fields_types = {{
  TType::T_STRING,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::SinkException1>::storage_names = {{
  "__fbthrift_field_reason",
}};
THRIFT_DATA_MEMBER const std::array<int, 1> TStructDataStorage<::cpp2::SinkException1>::isset_indexes = {{
  0,
}};

THRIFT_DATA_MEMBER const folly::StringPiece TStructDataStorage<::cpp2::SinkException2>::name = "SinkException2";
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::SinkException2>::fields_names = {{
  "reason",
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 1> TStructDataStorage<::cpp2::SinkException2>::fields_ids = {{
  1,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 1> TStructDataStorage<::cpp2::SinkException2>::fields_types = {{
  TType::T_I64,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::SinkException2>::storage_names = {{
  "__fbthrift_field_reason",
}};
THRIFT_DATA_MEMBER const std::array<int, 1> TStructDataStorage<::cpp2::SinkException2>::isset_indexes = {{
  0,
}};

} // namespace thrift
} // namespace apache
