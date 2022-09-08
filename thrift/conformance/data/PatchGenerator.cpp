/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <limits>
#include <type_traits>
#include <thrift/conformance/data/PatchGenerator.h>

#include <boost/mp11.hpp>
#include <fmt/core.h>

#include <thrift/conformance/cpp2/Object.h>
#include <thrift/conformance/data/ValueGenerator.h>
#include <thrift/lib/cpp2/op/Clear.h>
#include <thrift/lib/cpp2/op/Get.h>
#include <thrift/lib/cpp2/op/Patch.h>
#include <thrift/lib/cpp2/type/BaseType.h>
#include <thrift/lib/cpp2/type/Name.h>
#include <thrift/lib/cpp2/type/Tag.h>
#include <thrift/lib/thrift/gen-cpp2/patch_types_custom_protocol.h>

namespace apache::thrift::conformance::data {

namespace mp11 = boost::mp11;

namespace {

template <typename TT, typename GeneratedValue>
auto toValue(const GeneratedValue& value) {
  if constexpr (std::is_same_v<TT, type::binary_t>) {
    return *folly::IOBuf::copyBuffer(value.data());
  } else {
    return value;
  }
}

template <typename TT, typename GeneratedValue>
PatchOpTestCase makeAssignTest(
    const GeneratedValue& value,
    const AnyRegistry& registry,
    const Protocol& protocol) {
  PatchOpTestCase opTest;
  PatchOpRequest req;
  auto initialValue = value.value;
  op::clear<TT>(initialValue);
  req.value() = registry.store(asValueStruct<TT>(initialValue), protocol);

  auto patch = op::patch_type<TT>();
  patch = toValue<TT>(value.value);
  req.patch() =
      registry.store(asValueStruct<type::struct_c>(patch.toThrift()), protocol);
  opTest.request() = req;
  opTest.result() = registry.store(asValueStruct<TT>(value.value), protocol);
  return opTest;
}

template <typename TT, typename GeneratedValue>
PatchOpTestCase makeClearTest(
    const GeneratedValue& value,
    const AnyRegistry& registry,
    const Protocol& protocol) {
  PatchOpTestCase opTest;
  PatchOpRequest req;
  req.value() = registry.store(asValueStruct<TT>(value.value), protocol);

  auto patch = op::patch_type<TT>();
  patch.clear();
  req.patch() =
      registry.store(asValueStruct<type::struct_c>(patch.toThrift()), protocol);

  auto clearValue = value.value;
  op::clear<TT>(clearValue);
  opTest.request() = req;
  opTest.result() = registry.store(asValueStruct<TT>(clearValue), protocol);
  return opTest;
}

template <typename TT, typename T>
T makeAddExpectedResult(T value, int add = 1) {
  if constexpr (std::is_convertible_v<TT, type::bool_t>) {
    return !value;
  } else {
    if (std::numeric_limits<T>::max() == value && add > 0) {
      return value;
    } else if (std::numeric_limits<T>::min() == value && add < 0) {
      return value;
    }
    return value + add;
  }
}

template <typename TT, typename GeneratedValue, typename T>
PatchOpTestCase makeAddTest(
    const GeneratedValue& value,
    const AnyRegistry& registry,
    const Protocol& protocol,
    T toAdd) {
  PatchOpTestCase opTest;
  PatchOpRequest req;
  req.value() = registry.store(asValueStruct<TT>(value.value), protocol);

  auto addOp = [&](auto& patch) {
    if constexpr (std::is_same_v<TT, type::bool_t>) {
      patch.invert();
    } else {
      patch += toAdd;
    }
  };

  auto patch = op::patch_type<TT>();
  addOp(patch);
  req.patch() =
      registry.store(asValueStruct<type::struct_c>(patch.toThrift()), protocol);
  opTest.request() = req;
  opTest.result() = registry.store(
      asValueStruct<TT>(makeAddExpectedResult<TT>(value.value)), protocol);
  return opTest;
}

template <typename TT, typename GeneratedValue>
PatchOpTestCase makePrependTest(
    const GeneratedValue& value,
    const AnyRegistry& registry,
    const Protocol& protocol) {
  PatchOpTestCase opTest;
  PatchOpRequest req;
  req.value() = registry.store(asValueStruct<TT>(value.value), protocol);

  auto patch = op::patch_type<TT>();
  patch.prepend(toValue<TT>(value.value));
  req.patch() =
      registry.store(asValueStruct<type::struct_c>(patch.toThrift()), protocol);
  opTest.request() = req;
  auto expected = value.value + value.value;
  opTest.result() =
      registry.store(asValueStruct<TT>(toValue<TT>(expected)), protocol);
  return opTest;
}

template <typename TT, typename GeneratedValue>
PatchOpTestCase makeAppendTest(
    const GeneratedValue& value,
    const AnyRegistry& registry,
    const Protocol& protocol) {
  PatchOpTestCase opTest;
  PatchOpRequest req;
  req.value() = registry.store(asValueStruct<TT>(value.value), protocol);

  auto patch = op::patch_type<TT>();
  patch.append(toValue<TT>(value.value));
  req.patch() =
      registry.store(asValueStruct<type::struct_c>(patch.toThrift()), protocol);
  opTest.request() = req;
  auto expected = value.value + value.value;
  opTest.result() =
      registry.store(asValueStruct<TT>(toValue<TT>(expected)), protocol);
  return opTest;
}

template <typename TT>
Test createNumericPatchTest(
    const AnyRegistry& registry, const Protocol& protocol) {
  Test test;
  test.name() = protocol.name();

  for (const auto& value : ValueGenerator<TT>::getInterestingValues()) {
    auto& assignCase = test.testCases()->emplace_back();
    assignCase.name() =
        fmt::format("{}/assign.{}", type::getName<TT>(), value.name);
    auto& tascase = assignCase.test().emplace().objectPatch_ref().emplace();
    tascase = makeAssignTest<TT>(value, registry, protocol);

    // TODO(afuller): decide if bool and numeric should have clear()

    using ValueType = decltype(value.value);
    auto addAddTestCase = [&](ValueType toAdd) {
      auto& addCase = test.testCases()->emplace_back();
      addCase.name() =
          fmt::format("{}/add.{}_{}", type::getName<TT>(), value.name, toAdd);
      auto& tadcase = addCase.test().emplace().objectPatch_ref().emplace();
      tadcase = makeAddTest<TT>(value, registry, protocol, toAdd);
    };

    addAddTestCase(1);
    if constexpr (!std::is_same_v<TT, type::bool_t>) {
      addAddTestCase(-1);
      if (value.value > 0) {
        addAddTestCase(-value.value);
      }
    }
  }

  return test;
}

template <typename TT>
Test createStringLikePatchTest(
    const AnyRegistry& registry, const Protocol& protocol) {
  Test test;
  test.name() = protocol.name();

  for (const auto& value : ValueGenerator<TT>::getInterestingValues()) {
    auto& assignCase = test.testCases()->emplace_back();
    assignCase.name() =
        fmt::format("{}/assign.{}", type::getName<TT>(), value.name);

    auto& tascase = assignCase.test().emplace().objectPatch_ref().emplace();
    tascase = makeAssignTest<TT>(value, registry, protocol);

    auto& clearCase = test.testCases()->emplace_back();
    clearCase.name() = fmt::format("{}/clear", type::getName<TT>());
    auto& tclcase = clearCase.test().emplace().objectPatch_ref().emplace();
    tclcase = makeClearTest<TT>(value, registry, protocol);

    auto& prependCase = test.testCases()->emplace_back();
    prependCase.name() =
        fmt::format("{}/prepend.{}", type::getName<TT>(), value.name);
    auto& tprcase = prependCase.test().emplace().objectPatch_ref().emplace();
    tprcase = makePrependTest<TT>(value, registry, protocol);

    auto& appendCase = test.testCases()->emplace_back();
    appendCase.name() =
        fmt::format("{}/append.{}", type::getName<TT>(), value.name);
    auto& tapcase = appendCase.test().emplace().objectPatch_ref().emplace();
    tapcase = makeAppendTest<TT>(value, registry, protocol);
  }

  return test;
}

void addPatchToSuite(
    const AnyRegistry& registry, const Protocol& protocol, TestSuite& suite) {
  mp11::mp_for_each<detail::PrimaryTypeTags>([&](auto tt) {
    using TT = decltype(tt);
    if constexpr (
        !std::is_same_v<TT, type::string_t> &&
        !std::is_same_v<TT, type::binary_t>) {
      suite.tests()->emplace_back(
          createNumericPatchTest<TT>(registry, protocol));
    } else {
      suite.tests()->emplace_back(
          createStringLikePatchTest<TT>(registry, protocol));
    }
  });
}
} // namespace

TestSuite createPatchSuite(
    const std::set<Protocol>& protocols, const AnyRegistry& registry) {
  TestSuite suite;
  suite.name() = "PatchTest";
  for (const auto& protocol : protocols) {
    addPatchToSuite(registry, protocol, suite);
  }
  return suite;
}

} // namespace apache::thrift::conformance::data
