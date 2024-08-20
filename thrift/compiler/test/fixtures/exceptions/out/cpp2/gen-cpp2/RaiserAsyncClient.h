/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/exceptions/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/client_h.h>

#include "thrift/compiler/test/fixtures/exceptions/gen-cpp2/module_types.h"

namespace apache { namespace thrift {
  class Cpp2RequestContext;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace cpp2 {
class Raiser;
} // namespace cpp2
namespace apache::thrift {

template <>
class Client<::cpp2::Raiser> : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "Raiser";
  }


  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doBland"} */
  virtual void doBland(std::unique_ptr<apache::thrift::RequestCallback> callback);
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doBland"} */
  virtual void doBland(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void fbthrift_serialize_and_send_doBland(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions = false);
 public:

  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doBland"} */
  virtual void sync_doBland();
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doBland"} */
  virtual void sync_doBland(apache::thrift::RpcOptions& rpcOptions);

  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doBland"} */
  virtual folly::Future<folly::Unit> future_doBland();
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doBland"} */
  virtual folly::SemiFuture<folly::Unit> semifuture_doBland();
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doBland"} */
  virtual folly::Future<folly::Unit> future_doBland(apache::thrift::RpcOptions& rpcOptions);
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doBland"} */
  virtual folly::SemiFuture<folly::Unit> semifuture_doBland(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
#if __clang__
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doBland"} */
  template <int = 0>
  folly::coro::Task<void> co_doBland() {
    return co_doBland<false>(nullptr);
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doBland"} */
  template <int = 0>
  folly::coro::Task<void> co_doBland(apache::thrift::RpcOptions& rpcOptions) {
    return co_doBland<true>(&rpcOptions);
  }
#else
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doBland"} */
  folly::coro::Task<void> co_doBland() {
    co_await folly::coro::detachOnCancel(semifuture_doBland());
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doBland"} */
  folly::coro::Task<void> co_doBland(apache::thrift::RpcOptions& rpcOptions) {
    co_await folly::coro::detachOnCancel(semifuture_doBland(rpcOptions));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_doBland(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = doBlandCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions* defaultRpcOptions = new apache::thrift::RpcOptions();
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    const bool shouldProcessClientInterceptors = ctx && ctx->shouldProcessClientInterceptors();
    if (shouldProcessClientInterceptors) {
      co_await ctx->processClientInterceptorsOnRequest();
    }
    if constexpr (hasRpcOptions) {
      fbthrift_serialize_and_send_doBland(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    } else {
      fbthrift_serialize_and_send_doBland(*defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
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
    if (auto ew = recv_wrapped_doBland(returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doBland"} */
  virtual void doBland(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);


  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doBland"} */
  static folly::exception_wrapper recv_wrapped_doBland(::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doBland"} */
  static void recv_doBland(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doBland"} */
  virtual void recv_instance_doBland(::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doBland"} */
  virtual folly::exception_wrapper recv_instance_wrapped_doBland(::apache::thrift::ClientReceiveState& state);
 private:
  apache::thrift::SerializedRequest fbthrift_serialize_doBland(const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack);
  template <typename RpcOptions>
  void fbthrift_send_doBland(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> doBlandCtx(apache::thrift::RpcOptions* rpcOptions);
  template <typename CallbackType>
  folly::SemiFuture<folly::Unit> fbthrift_semifuture_doBland(apache::thrift::RpcOptions& rpcOptions);
  FOLLY_NOINLINE folly::SemiFuture<folly::Unit> fbthrift_semifuture_doBland(folly::SemiFuture<typename apache::thrift::detail::FutureCallbackHelper<folly::Unit>::PromiseResult> semifuture, apache::thrift::RpcOptions& rpcOptions, apache::thrift::RequestClientCallback::Ptr callback, apache::thrift::ContextStack* contextStack, std::shared_ptr<::apache::thrift::transport::THeader> header);
 public:
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doRaise"} */
  virtual void doRaise(std::unique_ptr<apache::thrift::RequestCallback> callback);
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doRaise"} */
  virtual void doRaise(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void fbthrift_serialize_and_send_doRaise(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions = false);
 public:

  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doRaise"} */
  virtual void sync_doRaise();
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doRaise"} */
  virtual void sync_doRaise(apache::thrift::RpcOptions& rpcOptions);

  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doRaise"} */
  virtual folly::Future<folly::Unit> future_doRaise();
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doRaise"} */
  virtual folly::SemiFuture<folly::Unit> semifuture_doRaise();
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doRaise"} */
  virtual folly::Future<folly::Unit> future_doRaise(apache::thrift::RpcOptions& rpcOptions);
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doRaise"} */
  virtual folly::SemiFuture<folly::Unit> semifuture_doRaise(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
#if __clang__
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doRaise"} */
  template <int = 0>
  folly::coro::Task<void> co_doRaise() {
    return co_doRaise<false>(nullptr);
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doRaise"} */
  template <int = 0>
  folly::coro::Task<void> co_doRaise(apache::thrift::RpcOptions& rpcOptions) {
    return co_doRaise<true>(&rpcOptions);
  }
#else
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doRaise"} */
  folly::coro::Task<void> co_doRaise() {
    co_await folly::coro::detachOnCancel(semifuture_doRaise());
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doRaise"} */
  folly::coro::Task<void> co_doRaise(apache::thrift::RpcOptions& rpcOptions) {
    co_await folly::coro::detachOnCancel(semifuture_doRaise(rpcOptions));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_doRaise(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = doRaiseCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions* defaultRpcOptions = new apache::thrift::RpcOptions();
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    const bool shouldProcessClientInterceptors = ctx && ctx->shouldProcessClientInterceptors();
    if (shouldProcessClientInterceptors) {
      co_await ctx->processClientInterceptorsOnRequest();
    }
    if constexpr (hasRpcOptions) {
      fbthrift_serialize_and_send_doRaise(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    } else {
      fbthrift_serialize_and_send_doRaise(*defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
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
    if (auto ew = recv_wrapped_doRaise(returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doRaise"} */
  virtual void doRaise(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);


  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doRaise"} */
  static folly::exception_wrapper recv_wrapped_doRaise(::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doRaise"} */
  static void recv_doRaise(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doRaise"} */
  virtual void recv_instance_doRaise(::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "doRaise"} */
  virtual folly::exception_wrapper recv_instance_wrapped_doRaise(::apache::thrift::ClientReceiveState& state);
 private:
  apache::thrift::SerializedRequest fbthrift_serialize_doRaise(const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack);
  template <typename RpcOptions>
  void fbthrift_send_doRaise(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> doRaiseCtx(apache::thrift::RpcOptions* rpcOptions);
  template <typename CallbackType>
  folly::SemiFuture<folly::Unit> fbthrift_semifuture_doRaise(apache::thrift::RpcOptions& rpcOptions);
  FOLLY_NOINLINE folly::SemiFuture<folly::Unit> fbthrift_semifuture_doRaise(folly::SemiFuture<typename apache::thrift::detail::FutureCallbackHelper<folly::Unit>::PromiseResult> semifuture, apache::thrift::RpcOptions& rpcOptions, apache::thrift::RequestClientCallback::Ptr callback, apache::thrift::ContextStack* contextStack, std::shared_ptr<::apache::thrift::transport::THeader> header);
 public:
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get200"} */
  virtual void get200(std::unique_ptr<apache::thrift::RequestCallback> callback);
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get200"} */
  virtual void get200(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void fbthrift_serialize_and_send_get200(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions = false);
 public:

  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get200"} */
  virtual void sync_get200(::std::string& _return);
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get200"} */
  virtual void sync_get200(apache::thrift::RpcOptions& rpcOptions, ::std::string& _return);

  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get200"} */
  virtual folly::Future<::std::string> future_get200();
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get200"} */
  virtual folly::SemiFuture<::std::string> semifuture_get200();
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get200"} */
  virtual folly::Future<::std::string> future_get200(apache::thrift::RpcOptions& rpcOptions);
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get200"} */
  virtual folly::SemiFuture<::std::string> semifuture_get200(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
#if __clang__
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get200"} */
  template <int = 0>
  folly::coro::Task<::std::string> co_get200() {
    return co_get200<false>(nullptr);
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get200"} */
  template <int = 0>
  folly::coro::Task<::std::string> co_get200(apache::thrift::RpcOptions& rpcOptions) {
    return co_get200<true>(&rpcOptions);
  }
#else
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get200"} */
  folly::coro::Task<::std::string> co_get200() {
    co_return co_await folly::coro::detachOnCancel(semifuture_get200());
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get200"} */
  folly::coro::Task<::std::string> co_get200(apache::thrift::RpcOptions& rpcOptions) {
    co_return co_await folly::coro::detachOnCancel(semifuture_get200(rpcOptions));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<::std::string> co_get200(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = get200Ctx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions* defaultRpcOptions = new apache::thrift::RpcOptions();
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    const bool shouldProcessClientInterceptors = ctx && ctx->shouldProcessClientInterceptors();
    if (shouldProcessClientInterceptors) {
      co_await ctx->processClientInterceptorsOnRequest();
    }
    if constexpr (hasRpcOptions) {
      fbthrift_serialize_and_send_get200(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    } else {
      fbthrift_serialize_and_send_get200(*defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
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
    ::std::string _return;
    if (auto ew = recv_wrapped_get200(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get200"} */
  virtual void get200(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);


  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get200"} */
  static folly::exception_wrapper recv_wrapped_get200(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get200"} */
  static void recv_get200(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get200"} */
  virtual void recv_instance_get200(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get200"} */
  virtual folly::exception_wrapper recv_instance_wrapped_get200(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  apache::thrift::SerializedRequest fbthrift_serialize_get200(const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack);
  template <typename RpcOptions>
  void fbthrift_send_get200(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> get200Ctx(apache::thrift::RpcOptions* rpcOptions);
  template <typename CallbackType>
  folly::SemiFuture<::std::string> fbthrift_semifuture_get200(apache::thrift::RpcOptions& rpcOptions);
  FOLLY_NOINLINE folly::SemiFuture<::std::string> fbthrift_semifuture_get200(folly::SemiFuture<typename apache::thrift::detail::FutureCallbackHelper<::std::string>::PromiseResult> semifuture, apache::thrift::RpcOptions& rpcOptions, apache::thrift::RequestClientCallback::Ptr callback, apache::thrift::ContextStack* contextStack, std::shared_ptr<::apache::thrift::transport::THeader> header);
 public:
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get500"} */
  virtual void get500(std::unique_ptr<apache::thrift::RequestCallback> callback);
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get500"} */
  virtual void get500(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void fbthrift_serialize_and_send_get500(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions = false);
 public:

  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get500"} */
  virtual void sync_get500(::std::string& _return);
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get500"} */
  virtual void sync_get500(apache::thrift::RpcOptions& rpcOptions, ::std::string& _return);

  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get500"} */
  virtual folly::Future<::std::string> future_get500();
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get500"} */
  virtual folly::SemiFuture<::std::string> semifuture_get500();
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get500"} */
  virtual folly::Future<::std::string> future_get500(apache::thrift::RpcOptions& rpcOptions);
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get500"} */
  virtual folly::SemiFuture<::std::string> semifuture_get500(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
#if __clang__
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get500"} */
  template <int = 0>
  folly::coro::Task<::std::string> co_get500() {
    return co_get500<false>(nullptr);
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get500"} */
  template <int = 0>
  folly::coro::Task<::std::string> co_get500(apache::thrift::RpcOptions& rpcOptions) {
    return co_get500<true>(&rpcOptions);
  }
#else
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get500"} */
  folly::coro::Task<::std::string> co_get500() {
    co_return co_await folly::coro::detachOnCancel(semifuture_get500());
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get500"} */
  folly::coro::Task<::std::string> co_get500(apache::thrift::RpcOptions& rpcOptions) {
    co_return co_await folly::coro::detachOnCancel(semifuture_get500(rpcOptions));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<::std::string> co_get500(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = get500Ctx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions* defaultRpcOptions = new apache::thrift::RpcOptions();
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    const bool shouldProcessClientInterceptors = ctx && ctx->shouldProcessClientInterceptors();
    if (shouldProcessClientInterceptors) {
      co_await ctx->processClientInterceptorsOnRequest();
    }
    if constexpr (hasRpcOptions) {
      fbthrift_serialize_and_send_get500(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    } else {
      fbthrift_serialize_and_send_get500(*defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
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
    ::std::string _return;
    if (auto ew = recv_wrapped_get500(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get500"} */
  virtual void get500(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);


  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get500"} */
  static folly::exception_wrapper recv_wrapped_get500(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get500"} */
  static void recv_get500(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get500"} */
  virtual void recv_instance_get500(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/exceptions/src/module.thrift", "service": "Raiser", "function": "get500"} */
  virtual folly::exception_wrapper recv_instance_wrapped_get500(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  apache::thrift::SerializedRequest fbthrift_serialize_get500(const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack);
  template <typename RpcOptions>
  void fbthrift_send_get500(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> get500Ctx(apache::thrift::RpcOptions* rpcOptions);
  template <typename CallbackType>
  folly::SemiFuture<::std::string> fbthrift_semifuture_get500(apache::thrift::RpcOptions& rpcOptions);
  FOLLY_NOINLINE folly::SemiFuture<::std::string> fbthrift_semifuture_get500(folly::SemiFuture<typename apache::thrift::detail::FutureCallbackHelper<::std::string>::PromiseResult> semifuture, apache::thrift::RpcOptions& rpcOptions, apache::thrift::RequestClientCallback::Ptr callback, apache::thrift::ContextStack* contextStack, std::shared_ptr<::apache::thrift::transport::THeader> header);
 public:
};

} // namespace apache::thrift

namespace cpp2 {
using RaiserAsyncClient [[deprecated("Use apache::thrift::Client<Raiser> instead")]] = ::apache::thrift::Client<Raiser>;
} // namespace cpp2
