#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from thrift.py3.reflection cimport (
  InterfaceSpec as __InterfaceSpec,
)


cdef __InterfaceSpec get_reflection__SomeService(bint for_clients)

cdef extern from "thrift/compiler/test/fixtures/types/src/gen-cpp2/module_handlers.h" namespace "::apache::thrift::fixtures::types":
    cdef cppclass cSomeServiceSvIf "::apache::thrift::fixtures::types::SomeServiceSvIf":
        pass
