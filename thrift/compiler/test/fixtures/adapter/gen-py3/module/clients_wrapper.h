/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once
#if __has_include(<thrift/compiler/test/fixtures/adapter/src/gen-cpp2/Service.h>)
#include <thrift/compiler/test/fixtures/adapter/src/gen-cpp2/Service.h>
#else
#include <thrift/compiler/test/fixtures/adapter/src/gen-cpp2/module_clients.h>
#endif

#include <folly/futures/Future.h>
#include <folly/futures/Promise.h>
#include <folly/Unit.h>
#include <thrift/lib/py3/clientcallbacks.h>
#include <thrift/lib/py3/client_wrapper.h>

#include <cstdint>
#include <functional>
#include <map>
#include <memory>
#include <set>
#include <vector>

namespace facebook {
namespace thrift {
namespace test {

class ServiceClientWrapper : public ::thrift::py3::ClientWrapper {
  public:
    using ::thrift::py3::ClientWrapper::ClientWrapper;

    folly::Future<int32_t> func(
      apache::thrift::RpcOptions& rpcOptions,
      std::string arg_arg1,
      std::string arg_arg2,
      ::facebook::thrift::test::Foo arg_arg3);
};


} // namespace facebook
} // namespace thrift
} // namespace test
