#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations


# EXPERIMENTAL - DO NOT USE !!!
# See `experimental_generate_mutable_types` documentation in thrift compiler

import dataclasses

import thrift.python.mutable_types as _fbthrift_python_mutable_types
import thrift.python.types as _fbthrift_python_types


class MyStruct(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "MyIntField",  # name
            _fbthrift_python_types.typeinfo_i64,  # typeinfo
            None,  # default value
            None,  # adapter info
            True, # field type is primitive
        ),
        (
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "MyStringField",  # name
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
        ),
        (
            3,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "MyDataField",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(MyDataItem),  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
        ),
        (
            4,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "myEnum",  # name
            lambda: _fbthrift_python_types.EnumTypeInfo(MyEnum),  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
        ),
        (
            5,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "oneway",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter info
            True, # field type is primitive
        ),
        (
            6,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "readonly",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter info
            True, # field type is primitive
        ),
        (
            7,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "idempotent",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter info
            True, # field type is primitive
        ),
        (
            8,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "floatSet",  # name
            lambda: _fbthrift_python_types.SetTypeInfo(_fbthrift_python_types.typeinfo_float),  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
        ),
        (
            9,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "no_hack_codegen_field",  # name
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.MyStruct"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/basic/MyStruct"

    @staticmethod
    def __get_metadata__():
        raise NotImplementedError(f"__get_metadata__() is not yet implemented for mutable thrift-python structs: {type(self)}")

    def _to_immutable(self):
        import importlib
        immutable_types = importlib.import_module("test.fixtures.basic.module.thrift_types")
        return immutable_types.MyStruct(**dataclasses.asdict(self))


class MyDataItem(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.MyDataItem"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/basic/MyDataItem"

    @staticmethod
    def __get_metadata__():
        raise NotImplementedError(f"__get_metadata__() is not yet implemented for mutable thrift-python structs: {type(self)}")

    def _to_immutable(self):
        import importlib
        immutable_types = importlib.import_module("test.fixtures.basic.module.thrift_types")
        return immutable_types.MyDataItem(**dataclasses.asdict(self))


class ReservedKeyword(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "reserved_field",  # name
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter info
            True, # field type is primitive
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.ReservedKeyword"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/basic/ReservedKeyword"

    @staticmethod
    def __get_metadata__():
        raise NotImplementedError(f"__get_metadata__() is not yet implemented for mutable thrift-python structs: {type(self)}")

    def _to_immutable(self):
        import importlib
        immutable_types = importlib.import_module("test.fixtures.basic.module.thrift_types")
        return immutable_types.ReservedKeyword(**dataclasses.asdict(self))

