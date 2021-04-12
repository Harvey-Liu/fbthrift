/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/MyServicePrioParent.h"
#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/MyServicePrioParent.tcc"
#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

namespace cpp2 {
std::unique_ptr<apache::thrift::AsyncProcessor> MyServicePrioParentSvIf::getProcessor() {
  return std::make_unique<MyServicePrioParentAsyncProcessor>(this);
}


void MyServicePrioParentSvIf::ping() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("ping");
}

folly::SemiFuture<folly::Unit> MyServicePrioParentSvIf::semifuture_ping() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_ping.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  return apache::thrift::detail::si::semifuture([&] {
    return ping();
  });
}

folly::Future<folly::Unit> MyServicePrioParentSvIf::future_ping() {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_ping.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  auto ka = getThreadManager()->getKeepAlive(getRequestContext()->getRequestExecutionScope(), apache::thrift::concurrency::ThreadManager::Source::INTERNAL);
  return apache::thrift::detail::si::future(semifuture_ping(), std::move(ka));
}

void MyServicePrioParentSvIf::async_tm_ping(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we set that up
  // for all cases.
  apache::thrift::detail::si::async_tm_prep(this, callback.get());
  switch (__fbthrift_invocation_ping.load(std::memory_order_relaxed)) {
    case apache::thrift::detail::si::InvocationType::AsyncTm:
    {
      auto expected{apache::thrift::detail::si::InvocationType::AsyncTm};
      __fbthrift_invocation_ping.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
      apache::thrift::detail::si::async_tm_future(std::move(callback), [&] {
        return future_ping();
      });
      return;
    }
    case apache::thrift::detail::si::InvocationType::SemiFuture:
    {
      apache::thrift::detail::si::async_tm_semifuture(std::move(callback), [&] {
        return semifuture_ping(); });
      return;
    }
    case apache::thrift::detail::si::InvocationType::Sync:
    {
      try {
        ping();
        callback->done();
      } catch (...) {
        callback->exception(std::current_exception());
      }
      return;
    }
    case apache::thrift::detail::si::InvocationType::Future:
    {
      apache::thrift::detail::si::async_tm_future(std::move(callback), [&] {
        return future_ping();
      });
      return;
    }
    default:
    {
      folly::assume_unreachable();
    }
  }
}

void MyServicePrioParentSvIf::pong() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("pong");
}

folly::SemiFuture<folly::Unit> MyServicePrioParentSvIf::semifuture_pong() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_pong.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  return apache::thrift::detail::si::semifuture([&] {
    return pong();
  });
}

folly::Future<folly::Unit> MyServicePrioParentSvIf::future_pong() {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_pong.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  auto ka = getThreadManager()->getKeepAlive(getRequestContext()->getRequestExecutionScope(), apache::thrift::concurrency::ThreadManager::Source::INTERNAL);
  return apache::thrift::detail::si::future(semifuture_pong(), std::move(ka));
}

void MyServicePrioParentSvIf::async_tm_pong(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we set that up
  // for all cases.
  apache::thrift::detail::si::async_tm_prep(this, callback.get());
  switch (__fbthrift_invocation_pong.load(std::memory_order_relaxed)) {
    case apache::thrift::detail::si::InvocationType::AsyncTm:
    {
      auto expected{apache::thrift::detail::si::InvocationType::AsyncTm};
      __fbthrift_invocation_pong.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
      apache::thrift::detail::si::async_tm_future(std::move(callback), [&] {
        return future_pong();
      });
      return;
    }
    case apache::thrift::detail::si::InvocationType::SemiFuture:
    {
      apache::thrift::detail::si::async_tm_semifuture(std::move(callback), [&] {
        return semifuture_pong(); });
      return;
    }
    case apache::thrift::detail::si::InvocationType::Sync:
    {
      try {
        pong();
        callback->done();
      } catch (...) {
        callback->exception(std::current_exception());
      }
      return;
    }
    case apache::thrift::detail::si::InvocationType::Future:
    {
      apache::thrift::detail::si::async_tm_future(std::move(callback), [&] {
        return future_pong();
      });
      return;
    }
    default:
    {
      folly::assume_unreachable();
    }
  }
}

void MyServicePrioParentSvNull::ping() {
  return;
}

void MyServicePrioParentSvNull::pong() {
  return;
}



const char* MyServicePrioParentAsyncProcessor::getServiceName() {
  return "MyServicePrioParent";
}

void MyServicePrioParentAsyncProcessor::getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  ::apache::thrift::detail::md::ServiceMetadata<MyServicePrioParentSvIf>::gen(*response.metadata_ref(), *response.context_ref());
}

void MyServicePrioParentAsyncProcessor::processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), protType, context, eb, tm);
}

std::shared_ptr<folly::RequestContext> MyServicePrioParentAsyncProcessor::getBaseContextForRequest() {
  return iface_->getBaseContextForRequest();
}

const MyServicePrioParentAsyncProcessor::ProcessMap& MyServicePrioParentAsyncProcessor::getBinaryProtocolProcessMap() {
  return binaryProcessMap_;
}

const MyServicePrioParentAsyncProcessor::ProcessMap MyServicePrioParentAsyncProcessor::binaryProcessMap_ {
  {"ping", &MyServicePrioParentAsyncProcessor::setUpAndProcess_ping<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"pong", &MyServicePrioParentAsyncProcessor::setUpAndProcess_pong<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
};

const MyServicePrioParentAsyncProcessor::ProcessMap& MyServicePrioParentAsyncProcessor::getCompactProtocolProcessMap() {
  return compactProcessMap_;
}

const MyServicePrioParentAsyncProcessor::ProcessMap MyServicePrioParentAsyncProcessor::compactProcessMap_ {
  {"ping", &MyServicePrioParentAsyncProcessor::setUpAndProcess_ping<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"pong", &MyServicePrioParentAsyncProcessor::setUpAndProcess_pong<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
};

} // cpp2
