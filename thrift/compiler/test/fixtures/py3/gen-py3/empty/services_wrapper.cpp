/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include <thrift/compiler/test/fixtures/py3/src/gen-py3/empty/services_wrapper.h>
#include <thrift/compiler/test/fixtures/py3/src/gen-py3/empty/services_api.h>
#include <thrift/lib/cpp2/async/AsyncProcessor.h>

namespace cpp2 {

NullServiceWrapper::NullServiceWrapper(PyObject *obj, folly::Executor* exc)
  : if_object(obj), executor(exc)
  {
    import_empty__services();
  }


std::shared_ptr<apache::thrift::ServerInterface> NullServiceInterface(PyObject *if_object, folly::Executor *exc) {
  return std::make_shared<NullServiceWrapper>(if_object, exc);
}
folly::SemiFuture<folly::Unit> NullServiceWrapper::semifuture_onStartServing() {
  auto [promise, future] = folly::makePromiseContract<folly::Unit>();
  call_cy_NullService_onStartServing(
      this->if_object,
      std::move(promise)
  );
  return std::move(future);
}
folly::SemiFuture<folly::Unit> NullServiceWrapper::semifuture_onStopRequested() {
  auto [promise, future] = folly::makePromiseContract<folly::Unit>();
  call_cy_NullService_onStopRequested(
      this->if_object,
      std::move(promise)
  );
  return std::move(future);
}
} // namespace cpp2
