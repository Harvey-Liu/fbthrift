#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import folly.iobuf as _fbthrift_iobuf
import thrift.py3.types
import thrift.py3.exceptions
from thrift.py3.types import __NotSet, NOTSET
import typing as _typing
from typing_extensions import Final

import sys
import itertools
import facebook.thrift.annotation.thrift.types as _facebook_thrift_annotation_thrift_types


__property__ = property


class MyEnum(thrift.py3.types.Enum):
    MyValue1: MyEnum = ...
    MyValue2: MyEnum = ...


class MyStruct(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        myIntField: bool
        myStringField: bool
        pass

    myIntField: Final[int] = ...

    myStringField: Final[str] = ...

    def __init__(
        self, *,
        myIntField: _typing.Optional[int]=None,
        myStringField: _typing.Optional[str]=None
    ) -> None: ...

    def __call__(
        self, *,
        myIntField: _typing.Union[int, '__NotSet', None]=NOTSET,
        myStringField: _typing.Union[str, '__NotSet', None]=NOTSET
    ) -> MyStruct: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['MyStruct'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'MyStruct') -> bool: ...
    def __gt__(self, other: 'MyStruct') -> bool: ...
    def __le__(self, other: 'MyStruct') -> bool: ...
    def __ge__(self, other: 'MyStruct') -> bool: ...


_MyUnionValueType = _typing.Union[None, MyEnum, MyStruct]

class MyUnion(thrift.py3.types.Union, _typing.Hashable):
    class __fbthrift_IsSet:
        myEnum: bool
        myDataItem: bool
        pass

    myEnum: Final[MyEnum] = ...

    myDataItem: Final[MyStruct] = ...

    def __init__(
        self, *,
        myEnum: _typing.Optional[MyEnum]=None,
        myDataItem: _typing.Optional[MyStruct]=None
    ) -> None: ...

    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'MyUnion') -> bool: ...
    def __gt__(self, other: 'MyUnion') -> bool: ...
    def __le__(self, other: 'MyUnion') -> bool: ...
    def __ge__(self, other: 'MyUnion') -> bool: ...

    class Type(thrift.py3.types.Enum):
        EMPTY: MyUnion.Type = ...
        myEnum: MyUnion.Type = ...
        myDataItem: MyUnion.Type = ...

    @staticmethod
    def fromValue(value: _MyUnionValueType) -> MyUnion: ...
    @__property__
    def value(self) -> _MyUnionValueType: ...
    @__property__
    def type(self) -> "MyUnion.Type": ...


