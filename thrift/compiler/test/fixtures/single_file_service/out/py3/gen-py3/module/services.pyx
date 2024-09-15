#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

cimport cython
from typing import AsyncIterator
from cpython.version cimport PY_VERSION_HEX
from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
)
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr
from libcpp.string cimport string
from libcpp cimport bool as cbool
from cpython cimport bool as pbool
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap
from libcpp.utility cimport move as cmove
from libcpp.pair cimport pair
from cython.operator cimport dereference as deref
from cpython.ref cimport PyObject
from thrift.py3.exceptions cimport (
    cTApplicationException,
    ApplicationError as __ApplicationError,
    cTApplicationExceptionType__UNKNOWN)
from thrift.py3.server cimport ServiceInterface, RequestContext, Cpp2RequestContext
from thrift.py3.server import RequestContext
from folly cimport (
  cFollyPromise,
  cFollyUnit,
  c_unit,
)
from thrift.py3.common cimport (
    cThriftServiceMetadataResponse as __fbthrift_cThriftServiceMetadataResponse,
    ServiceMetadata,
    MetadataBox as __MetadataBox,
)

from thrift.py3.server cimport THRIFT_REQUEST_CONTEXT as __THRIFT_REQUEST_CONTEXT
from thrift.py3.types cimport make_unique

cimport folly.futures
from folly.executor cimport get_executor
cimport folly.iobuf as _fbthrift_iobuf
import folly.iobuf as _fbthrift_iobuf
from folly.iobuf cimport move as move_iobuf
from folly.memory cimport to_shared_ptr as __to_shared_ptr

from libcpp.optional cimport optional
from thrift.py3.stream cimport cServerStream, cServerStreamPublisher, cResponseAndServerStream, createResponseAndServerStream, createAsyncIteratorFromPyIterator, pythonFuncToCppFunc, ServerStream, ServerPublisher
cimport module.types as _module_types
import module.types as _module_types

cimport module.services_reflection as _services_reflection

import asyncio
import functools
import sys
import traceback
import types as _py_types

from module.services_wrapper cimport cAInterface
from module.services_wrapper cimport cBInterface
from module.services_wrapper cimport cCInterface
cdef class ServerPublisher_cint32_t(ServerPublisher):
    cdef unique_ptr[cServerStreamPublisher[cint32_t]] cPublisher

    def complete(ServerPublisher self):
        cmove(deref(self.cPublisher)).complete()

    # Calling this send instead of the wrapped method name of next because next is
    # a python keyword and makes the linter complain
    def send(ServerPublisher self, cint32_t item):
        deref(self.cPublisher).next(<cint32_t?>item)

    @staticmethod
    cdef _fbthrift_create(cServerStreamPublisher[cint32_t] cPublisher):
        cdef ServerPublisher_cint32_t inst = ServerPublisher_cint32_t.__new__(ServerPublisher_cint32_t)
        inst.cPublisher = make_unique[cServerStreamPublisher[cint32_t]](cmove(cPublisher))
        return inst

cdef class ServerStream_cint32_t(ServerStream):
    cdef unique_ptr[cServerStream[cint32_t]] cStream

    @staticmethod
    cdef _fbthrift_create(cServerStream[cint32_t] cStream):
        cdef ServerStream_cint32_t inst = ServerStream_cint32_t.__new__(ServerStream_cint32_t)
        inst.cStream = make_unique[cServerStream[cint32_t]](cmove(cStream))
        return inst

async def runGenerator_B_stream_stuff(object generator, Promise_cint32_t_Stream promise):
    try:
        item = await generator.asend(None)
    except StopAsyncIteration:
        promise.cPromise.setValue(optional[cint32_t]())
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in stream_stuff:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler stream_stuff:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(optional[cint32_t](<cint32_t?>item))

cdef void getNextGenerator_B_stream_stuff(object generator, cFollyPromise[optional[cint32_t]] cPromise) noexcept:
    cdef Promise_cint32_t_Stream __promise = Promise_cint32_t_Stream._fbthrift_create(cmove(cPromise))
    asyncio.get_event_loop().create_task(
        runGenerator_B_stream_stuff(
            generator,
            __promise
        )
    )


@cython.auto_pickle(False)
cdef class Promise__module_types_cFoo:
    cdef cFollyPromise[unique_ptr[_module_types.cFoo]]* cPromise

    def __cinit__(self):
        self.cPromise = new cFollyPromise[unique_ptr[_module_types.cFoo]](cFollyPromise[unique_ptr[_module_types.cFoo]].makeEmpty())

    def __dealloc__(self):
        del self.cPromise

    @staticmethod
    cdef _fbthrift_create(cFollyPromise[unique_ptr[_module_types.cFoo]] cPromise):
        cdef Promise__module_types_cFoo inst = Promise__module_types_cFoo.__new__(Promise__module_types_cFoo)
        inst.cPromise[0] = cmove(cPromise)
        return inst

@cython.auto_pickle(False)
cdef class Promise_cServerStream__cint32_t:
    cdef cFollyPromise[cServerStream[cint32_t]]* cPromise

    def __cinit__(self):
        self.cPromise = new cFollyPromise[cServerStream[cint32_t]](cFollyPromise[cServerStream[cint32_t]].makeEmpty())

    def __dealloc__(self):
        del self.cPromise

    @staticmethod
    cdef _fbthrift_create(cFollyPromise[cServerStream[cint32_t]] cPromise):
        cdef Promise_cServerStream__cint32_t inst = Promise_cServerStream__cint32_t.__new__(Promise_cServerStream__cint32_t)
        inst.cPromise[0] = cmove(cPromise)
        return inst

@cython.auto_pickle(False)
cdef class Promise_cFollyUnit:
    cdef cFollyPromise[cFollyUnit]* cPromise

    def __cinit__(self):
        self.cPromise = new cFollyPromise[cFollyUnit](cFollyPromise[cFollyUnit].makeEmpty())

    def __dealloc__(self):
        del self.cPromise

    @staticmethod
    cdef _fbthrift_create(cFollyPromise[cFollyUnit] cPromise):
        cdef Promise_cFollyUnit inst = Promise_cFollyUnit.__new__(Promise_cFollyUnit)
        inst.cPromise[0] = cmove(cPromise)
        return inst

@cython.auto_pickle(False)
cdef class Promise_cint32_t_Stream:
    cdef cFollyPromise[optional[cint32_t]] cPromise

    @staticmethod
    cdef _fbthrift_create(cFollyPromise[optional[cint32_t]] cPromise):
        cdef Promise_cint32_t_Stream inst = Promise_cint32_t_Stream.__new__(Promise_cint32_t_Stream)
        inst.cPromise = cmove(cPromise)
        return inst

cdef object _A_annotations = _py_types.MappingProxyType({
})


@cython.auto_pickle(False)
cdef class AInterface(
    ServiceInterface
):
    annotations = _A_annotations

    def __cinit__(self):
        self._cpp_obj = cAInterface(
            <PyObject *> self,
            get_executor()
        )

    async def foo(
            self):
        raise NotImplementedError("async def foo is not implemented")

    @classmethod
    def __get_reflection__(cls):
        return _services_reflection.get_reflection__A(for_clients=False)

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftServiceMetadataResponse response
        ServiceMetadata[_services_reflection.cASvIf].gen(response)
        return __MetadataBox.box(cmove(deref(response.metadata_ref())))

    @staticmethod
    def __get_thrift_name__():
        return "module.A"

cdef object _B_annotations = _py_types.MappingProxyType({
})


@cython.auto_pickle(False)
cdef class BInterface(
AInterface
):
    annotations = _B_annotations

    def __cinit__(self):
        self._cpp_obj = cBInterface(
            <PyObject *> self,
            get_executor()
        )

    async def bar(
            self,
            foo):
        raise NotImplementedError("async def bar is not implemented")

    async def stream_stuff(
            self):
        raise NotImplementedError("async def stream_stuff is not implemented")

    @staticmethod
    def createPublisher_stream_stuff(callback=None):
        cdef unique_ptr[pair[cServerStream[cint32_t], cServerStreamPublisher[cint32_t]]] streams = make_unique[pair[cServerStream[cint32_t], cServerStreamPublisher[cint32_t]]](cServerStream[cint32_t].createPublisher(pythonFuncToCppFunc(callback)))

        return (ServerStream_cint32_t._fbthrift_create(cmove(deref(streams).first)), ServerPublisher_cint32_t._fbthrift_create(cmove(deref(streams).second)))

    @classmethod
    def __get_reflection__(cls):
        return _services_reflection.get_reflection__B(for_clients=False)

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftServiceMetadataResponse response
        ServiceMetadata[_services_reflection.cBSvIf].gen(response)
        return __MetadataBox.box(cmove(deref(response.metadata_ref())))

    @staticmethod
    def __get_thrift_name__():
        return "module.B"

cdef object _C_annotations = _py_types.MappingProxyType({
})


@cython.auto_pickle(False)
cdef class CInterface(
    ServiceInterface
):
    annotations = _C_annotations

    def __cinit__(self):
        self._cpp_obj = cCInterface(
            <PyObject *> self,
            get_executor()
        )

    @classmethod
    def __get_reflection__(cls):
        return _services_reflection.get_reflection__C(for_clients=False)

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftServiceMetadataResponse response
        ServiceMetadata[_services_reflection.cCSvIf].gen(response)
        return __MetadataBox.box(cmove(deref(response.metadata_ref())))

    @staticmethod
    def __get_thrift_name__():
        return "module.C"



cdef api void call_cy_A_foo(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[unique_ptr[_module_types.cFoo]] cPromise
) noexcept:
    cdef Promise__module_types_cFoo __promise = Promise__module_types_cFoo._fbthrift_create(cmove(cPromise))
    __context = RequestContext._fbthrift_create(ctx)
    __context_token = __THRIFT_REQUEST_CONTEXT.set(__context)
    asyncio.get_event_loop().create_task(
        A_foo_coro(
            self,
            __promise
        )
    )
    __THRIFT_REQUEST_CONTEXT.reset(__context_token)
cdef api void call_cy_A_onStartServing(
    object self,
    cFollyPromise[cFollyUnit] cPromise
) noexcept:
    cdef Promise_cFollyUnit __promise = Promise_cFollyUnit._fbthrift_create(cmove(cPromise))
    asyncio.get_event_loop().create_task(
        A_onStartServing_coro(
            self,
            __promise
        )
    )
cdef api void call_cy_A_onStopRequested(
    object self,
    cFollyPromise[cFollyUnit] cPromise
) noexcept:
    cdef Promise_cFollyUnit __promise = Promise_cFollyUnit._fbthrift_create(cmove(cPromise))
    asyncio.get_event_loop().create_task(
        A_onStopRequested_coro(
            self,
            __promise
        )
    )
async def A_foo_coro(
    object self,
    Promise__module_types_cFoo promise
):
    try:
        result = await self.foo()
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler foo:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler foo:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(make_unique[_module_types.cFoo](deref((<_module_types.Foo?> result)._cpp_obj)))

async def A_onStartServing_coro(
    object self,
    Promise_cFollyUnit promise
):
    try:
        result = await self.onStartServing()
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler onStartServing:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler onStartServing:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)

async def A_onStopRequested_coro(
    object self,
    Promise_cFollyUnit promise
):
    try:
        result = await self.onStopRequested()
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler onStopRequested:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler onStopRequested:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)

cdef api void call_cy_B_bar(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[cFollyUnit] cPromise,
    unique_ptr[_module_types.cFoo] foo
) noexcept:
    cdef Promise_cFollyUnit __promise = Promise_cFollyUnit._fbthrift_create(cmove(cPromise))
    arg_foo = _module_types.Foo._fbthrift_create(shared_ptr[_module_types.cFoo](foo.release()))
    __context = RequestContext._fbthrift_create(ctx)
    __context_token = __THRIFT_REQUEST_CONTEXT.set(__context)
    asyncio.get_event_loop().create_task(
        B_bar_coro(
            self,
            __promise,
            arg_foo
        )
    )
    __THRIFT_REQUEST_CONTEXT.reset(__context_token)
cdef api void call_cy_B_stream_stuff(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[cServerStream[cint32_t]] cPromise
) noexcept:
    cdef Promise_cServerStream__cint32_t __promise = Promise_cServerStream__cint32_t._fbthrift_create(cmove(cPromise))
    __context = RequestContext._fbthrift_create(ctx)
    __context_token = __THRIFT_REQUEST_CONTEXT.set(__context)
    asyncio.get_event_loop().create_task(
        B_stream_stuff_coro(
            self,
            __promise
        )
    )
    __THRIFT_REQUEST_CONTEXT.reset(__context_token)
cdef api void call_cy_B_onStartServing(
    object self,
    cFollyPromise[cFollyUnit] cPromise
) noexcept:
    cdef Promise_cFollyUnit __promise = Promise_cFollyUnit._fbthrift_create(cmove(cPromise))
    asyncio.get_event_loop().create_task(
        B_onStartServing_coro(
            self,
            __promise
        )
    )
cdef api void call_cy_B_onStopRequested(
    object self,
    cFollyPromise[cFollyUnit] cPromise
) noexcept:
    cdef Promise_cFollyUnit __promise = Promise_cFollyUnit._fbthrift_create(cmove(cPromise))
    asyncio.get_event_loop().create_task(
        B_onStopRequested_coro(
            self,
            __promise
        )
    )
async def B_bar_coro(
    object self,
    Promise_cFollyUnit promise,
    foo
):
    try:
        result = await self.bar(
                    foo)
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler bar:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler bar:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)

async def B_stream_stuff_coro(
    object self,
    Promise_cServerStream__cint32_t promise
):
    try:
        result = self.stream_stuff()
        if not isinstance(result, (ServerStream, AsyncIterator)):
            result = await result
        if isinstance(result, AsyncIterator):
            result = ServerStream_cint32_t._fbthrift_create(cmove(createAsyncIteratorFromPyIterator[cint32_t](result, get_executor(), &getNextGenerator_B_stream_stuff)))
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler stream_stuff:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler stream_stuff:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(cmove(deref((<ServerStream_cint32_t?>result).cStream)))

async def B_onStartServing_coro(
    object self,
    Promise_cFollyUnit promise
):
    try:
        result = await self.onStartServing()
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler onStartServing:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler onStartServing:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)

async def B_onStopRequested_coro(
    object self,
    Promise_cFollyUnit promise
):
    try:
        result = await self.onStopRequested()
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler onStopRequested:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler onStopRequested:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)

cdef api void call_cy_C_onStartServing(
    object self,
    cFollyPromise[cFollyUnit] cPromise
) noexcept:
    cdef Promise_cFollyUnit __promise = Promise_cFollyUnit._fbthrift_create(cmove(cPromise))
    asyncio.get_event_loop().create_task(
        C_onStartServing_coro(
            self,
            __promise
        )
    )
cdef api void call_cy_C_onStopRequested(
    object self,
    cFollyPromise[cFollyUnit] cPromise
) noexcept:
    cdef Promise_cFollyUnit __promise = Promise_cFollyUnit._fbthrift_create(cmove(cPromise))
    asyncio.get_event_loop().create_task(
        C_onStopRequested_coro(
            self,
            __promise
        )
    )
async def C_onStartServing_coro(
    object self,
    Promise_cFollyUnit promise
):
    try:
        result = await self.onStartServing()
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler onStartServing:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler onStartServing:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)

async def C_onStopRequested_coro(
    object self,
    Promise_cFollyUnit promise
):
    try:
        result = await self.onStopRequested()
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler onStopRequested:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler onStopRequested:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)

