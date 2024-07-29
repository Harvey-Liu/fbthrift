/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic-annotations/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/client_h.h>

#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_types.h"
#if __has_include("thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/MyServicePrioParentAsyncClient.h")
#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/MyServicePrioParentAsyncClient.h"
#else
#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_clients.h"
#endif

namespace apache { namespace thrift {
  class Cpp2RequestContext;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace cpp2 {
class MyServicePrioChild;
} // namespace cpp2
namespace apache::thrift {

template <>
class Client<::cpp2::MyServicePrioChild> : public ::cpp2::MyServicePrioParentAsyncClient {
 public:
  using ::cpp2::MyServicePrioParentAsyncClient::MyServicePrioParentAsyncClient;

  char const* getServiceName() const noexcept override {
    return "MyServicePrioChild";
  }


  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioChild", "function": "pang"} */
  virtual void pang(std::unique_ptr<apache::thrift::RequestCallback> callback);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioChild", "function": "pang"} */
  virtual void pang(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void pangImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions = false);
 public:

  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioChild", "function": "pang"} */
  virtual void sync_pang();
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioChild", "function": "pang"} */
  virtual void sync_pang(apache::thrift::RpcOptions& rpcOptions);

  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioChild", "function": "pang"} */
  virtual folly::Future<folly::Unit> future_pang();
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioChild", "function": "pang"} */
  virtual folly::SemiFuture<folly::Unit> semifuture_pang();
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioChild", "function": "pang"} */
  virtual folly::Future<folly::Unit> future_pang(apache::thrift::RpcOptions& rpcOptions);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioChild", "function": "pang"} */
  virtual folly::SemiFuture<folly::Unit> semifuture_pang(apache::thrift::RpcOptions& rpcOptions);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioChild", "function": "pang"} */
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_pang(apache::thrift::RpcOptions& rpcOptions);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioChild", "function": "pang"} */
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_pang(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
#if __clang__
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioChild", "function": "pang"} */
  template <int = 0>
  folly::coro::Task<void> co_pang() {
    return co_pang<false>(nullptr);
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioChild", "function": "pang"} */
  template <int = 0>
  folly::coro::Task<void> co_pang(apache::thrift::RpcOptions& rpcOptions) {
    return co_pang<true>(&rpcOptions);
  }
#else
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioChild", "function": "pang"} */
  folly::coro::Task<void> co_pang() {
    co_await folly::coro::detachOnCancel(semifuture_pang());
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioChild", "function": "pang"} */
  folly::coro::Task<void> co_pang(apache::thrift::RpcOptions& rpcOptions) {
    co_await folly::coro::detachOnCancel(semifuture_pang(rpcOptions));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_pang(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = pangCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions* defaultRpcOptions = new apache::thrift::RpcOptions();
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    const bool shouldProcessClientInterceptors = ctx && ctx->shouldProcessClientInterceptors();
    if (shouldProcessClientInterceptors) {
      co_await ctx->processClientInterceptorsOnRequest();
    }
    if constexpr (hasRpcOptions) {
      pangImpl(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    } else {
      pangImpl(*defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (shouldProcessClientInterceptors) {
      co_await ctx->processClientInterceptorsOnResponse();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::move(ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header()) {
        auto* rheader = returnState.header();
        if (!rheader->getHeaders().empty()) {
          rpcOptions->setReadHeaders(rheader->releaseHeaders());
        }
        rpcOptions->setRoutingData(rheader->releaseRoutingData());
      }
    };
    if (auto ew = recv_wrapped_pang(returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioChild", "function": "pang"} */
  virtual void pang(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);


  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioChild", "function": "pang"} */
  static folly::exception_wrapper recv_wrapped_pang(::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioChild", "function": "pang"} */
  static void recv_pang(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioChild", "function": "pang"} */
  virtual void recv_instance_pang(::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioChild", "function": "pang"} */
  virtual folly::exception_wrapper recv_instance_wrapped_pang(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  apache::thrift::SerializedRequest fbthrift_serialize_pang(Protocol_* prot, const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack);
  template <typename RpcOptions>
  void fbthrift_send_pang(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> pangCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
};

} // namespace apache::thrift

namespace cpp2 {
using MyServicePrioChildAsyncClient [[deprecated("Use apache::thrift::Client<MyServicePrioChild> instead")]] = ::apache::thrift::Client<MyServicePrioChild>;
} // namespace cpp2
