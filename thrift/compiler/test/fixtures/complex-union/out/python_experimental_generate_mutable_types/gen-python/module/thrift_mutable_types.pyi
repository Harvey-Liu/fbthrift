#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations


# EXPERIMENTAL - DO NOT USE !!!
# See `experimental_generate_mutable_types` documentation in thrift compiler

#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import typing as _typing

import enum

import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_python_types
import thrift.python.mutable_types as _fbthrift_python_mutable_types
import thrift.python.mutable_exceptions as _fbthrift_python_mutable_exceptions


class _fbthrift_compatible_with_ComplexUnion:
    pass


class ComplexUnion(_fbthrift_python_mutable_types.MutableUnion, _fbthrift_compatible_with_ComplexUnion):
    intValue: int = ...
    intListValue: _typing.MutableSequence[int] = ...
    stringListValue: _typing.MutableSequence[str] = ...
    stringValue: str = ...
    typedefValue: _typing.MutableMapping[int, str] = ...
    stringRef: str = ...
    def __init__(
        self, *,
        intValue: _typing.Optional[int]=...,
        intListValue: _typing.Optional[_typing.MutableSequence[int]]=...,
        stringListValue: _typing.Optional[_typing.MutableSequence[str]]=...,
        stringValue: _typing.Optional[str]=...,
        typedefValue: _typing.Optional[_typing.MutableMapping[int, str]]=...,
        stringRef: _typing.Optional[str]=...
    ) -> None: ...


    class Type(enum.Enum):
        FBTHRIFT_UNION_EMPTY: ComplexUnion.FbThriftUnionFieldEnum = ...
        intValue: ComplexUnion.Type = ...
        intListValue: ComplexUnion.Type = ...
        stringListValue: ComplexUnion.Type = ...
        stringValue: ComplexUnion.Type = ...
        typedefValue: ComplexUnion.Type = ...
        stringRef: ComplexUnion.Type = ...

    fbthrift_current_value: _typing.Final[_typing.Union[None, int, _typing.MutableSequence[int], _typing.MutableSequence[str], str, _typing.MutableMapping[int, str], str]]
    fbthrift_current_field: FbThriftUnionFieldEnum
    def get_type(self) -> FbThriftUnionFieldEnum:...
    def _to_python(self) -> "module.thrift_types.ComplexUnion": ...  # type: ignore
    def _to_mutable_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "module.types.ComplexUnion": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.ComplexUnion": ...  # type: ignore


class _fbthrift_compatible_with_ListUnion:
    pass


class ListUnion(_fbthrift_python_mutable_types.MutableUnion, _fbthrift_compatible_with_ListUnion):
    intListValue: _typing.MutableSequence[int] = ...
    stringListValue: _typing.MutableSequence[str] = ...
    def __init__(
        self, *,
        intListValue: _typing.Optional[_typing.MutableSequence[int]]=...,
        stringListValue: _typing.Optional[_typing.MutableSequence[str]]=...
    ) -> None: ...


    class Type(enum.Enum):
        FBTHRIFT_UNION_EMPTY: ListUnion.FbThriftUnionFieldEnum = ...
        intListValue: ListUnion.Type = ...
        stringListValue: ListUnion.Type = ...

    fbthrift_current_value: _typing.Final[_typing.Union[None, _typing.MutableSequence[int], _typing.MutableSequence[str]]]
    fbthrift_current_field: FbThriftUnionFieldEnum
    def get_type(self) -> FbThriftUnionFieldEnum:...
    def _to_python(self) -> "module.thrift_types.ListUnion": ...  # type: ignore
    def _to_mutable_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "module.types.ListUnion": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.ListUnion": ...  # type: ignore


class _fbthrift_compatible_with_DataUnion:
    pass


class DataUnion(_fbthrift_python_mutable_types.MutableUnion, _fbthrift_compatible_with_DataUnion):
    binaryData: bytes = ...
    stringData: str = ...
    def __init__(
        self, *,
        binaryData: _typing.Optional[bytes]=...,
        stringData: _typing.Optional[str]=...
    ) -> None: ...


    class Type(enum.Enum):
        FBTHRIFT_UNION_EMPTY: DataUnion.FbThriftUnionFieldEnum = ...
        binaryData: DataUnion.Type = ...
        stringData: DataUnion.Type = ...

    fbthrift_current_value: _typing.Final[_typing.Union[None, bytes, str]]
    fbthrift_current_field: FbThriftUnionFieldEnum
    def get_type(self) -> FbThriftUnionFieldEnum:...
    def _to_python(self) -> "module.thrift_types.DataUnion": ...  # type: ignore
    def _to_mutable_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "module.types.DataUnion": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.DataUnion": ...  # type: ignore


class _fbthrift_compatible_with_Val:
    pass


class Val(_fbthrift_python_mutable_types.MutableStruct, _fbthrift_compatible_with_Val):
    strVal: str = ...
    intVal: int = ...
    typedefValue: _typing.MutableMapping[int, str] = ...
    def __init__(
        self, *,
        strVal: _typing.Optional[str]=...,
        intVal: _typing.Optional[int]=...,
        typedefValue: _typing.Optional[_typing.MutableMapping[int, str]]=...
    ) -> None: ...

    def __call__(
        self, *,
        strVal: _typing.Optional[str]=...,
        intVal: _typing.Optional[int]=...,
        typedefValue: _typing.Optional[_typing.MutableMapping[int, str]]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, int, _typing.MutableMapping[int, str]]]]: ...
    def _to_python(self) -> "module.thrift_types.Val": ...  # type: ignore
    def _to_mutable_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "module.types.Val": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.Val": ...  # type: ignore


class _fbthrift_compatible_with_ValUnion:
    pass


class ValUnion(_fbthrift_python_mutable_types.MutableUnion, _fbthrift_compatible_with_ValUnion):
    v1: Val = ...
    v2: Val = ...
    def __init__(
        self, *,
        v1: _typing.Optional[_fbthrift_compatible_with_Val]=...,
        v2: _typing.Optional[_fbthrift_compatible_with_Val]=...
    ) -> None: ...


    class Type(enum.Enum):
        FBTHRIFT_UNION_EMPTY: ValUnion.FbThriftUnionFieldEnum = ...
        v1: ValUnion.Type = ...
        v2: ValUnion.Type = ...

    fbthrift_current_value: _typing.Final[_typing.Union[None, Val, Val]]
    fbthrift_current_field: FbThriftUnionFieldEnum
    def get_type(self) -> FbThriftUnionFieldEnum:...
    def _to_python(self) -> "module.thrift_types.ValUnion": ...  # type: ignore
    def _to_mutable_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "module.types.ValUnion": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.ValUnion": ...  # type: ignore


class _fbthrift_compatible_with_VirtualComplexUnion:
    pass


class VirtualComplexUnion(_fbthrift_python_mutable_types.MutableUnion, _fbthrift_compatible_with_VirtualComplexUnion):
    thingOne: str = ...
    thingTwo: str = ...
    def __init__(
        self, *,
        thingOne: _typing.Optional[str]=...,
        thingTwo: _typing.Optional[str]=...
    ) -> None: ...


    class Type(enum.Enum):
        FBTHRIFT_UNION_EMPTY: VirtualComplexUnion.FbThriftUnionFieldEnum = ...
        thingOne: VirtualComplexUnion.Type = ...
        thingTwo: VirtualComplexUnion.Type = ...

    fbthrift_current_value: _typing.Final[_typing.Union[None, str, str]]
    fbthrift_current_field: FbThriftUnionFieldEnum
    def get_type(self) -> FbThriftUnionFieldEnum:...
    def _to_python(self) -> "module.thrift_types.VirtualComplexUnion": ...  # type: ignore
    def _to_mutable_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "module.types.VirtualComplexUnion": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.VirtualComplexUnion": ...  # type: ignore


class _fbthrift_compatible_with_NonCopyableStruct:
    pass


class NonCopyableStruct(_fbthrift_python_mutable_types.MutableStruct, _fbthrift_compatible_with_NonCopyableStruct):
    num: int = ...
    def __init__(
        self, *,
        num: _typing.Optional[int]=...
    ) -> None: ...

    def __call__(
        self, *,
        num: _typing.Optional[int]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int]]]: ...
    def _to_python(self) -> "module.thrift_types.NonCopyableStruct": ...  # type: ignore
    def _to_mutable_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "module.types.NonCopyableStruct": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.NonCopyableStruct": ...  # type: ignore


class _fbthrift_compatible_with_NonCopyableUnion:
    pass


class NonCopyableUnion(_fbthrift_python_mutable_types.MutableUnion, _fbthrift_compatible_with_NonCopyableUnion):
    s: NonCopyableStruct = ...
    def __init__(
        self, *,
        s: _typing.Optional[_fbthrift_compatible_with_NonCopyableStruct]=...
    ) -> None: ...


    class Type(enum.Enum):
        FBTHRIFT_UNION_EMPTY: NonCopyableUnion.FbThriftUnionFieldEnum = ...
        s: NonCopyableUnion.Type = ...

    fbthrift_current_value: _typing.Final[_typing.Union[None, NonCopyableStruct]]
    fbthrift_current_field: FbThriftUnionFieldEnum
    def get_type(self) -> FbThriftUnionFieldEnum:...
    def _to_python(self) -> "module.thrift_types.NonCopyableUnion": ...  # type: ignore
    def _to_mutable_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "module.types.NonCopyableUnion": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.NonCopyableUnion": ...  # type: ignore

containerTypedef = _typing.Dict[int, str]
