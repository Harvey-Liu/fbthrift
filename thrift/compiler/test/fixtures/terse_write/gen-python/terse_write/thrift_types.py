#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#
import enum

import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_py3lite_types
import thrift.python.exceptions as _fbthrift_py3lite_exceptions


import facebook.thrift.annotation.thrift.thrift_types


class MyStruct(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "terse_write.MyStruct"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_MyStruct()



class StructLevelTerseStruct(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_py3lite_types.FieldQualifier.Terse, # qualifier
            "bool_field",  # name
            _fbthrift_py3lite_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Terse, # qualifier
            "byte_field",  # name
            _fbthrift_py3lite_types.typeinfo_byte,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_py3lite_types.FieldQualifier.Terse, # qualifier
            "short_field",  # name
            _fbthrift_py3lite_types.typeinfo_i16,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_py3lite_types.FieldQualifier.Terse, # qualifier
            "int_field",  # name
            _fbthrift_py3lite_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            5,  # id
            _fbthrift_py3lite_types.FieldQualifier.Terse, # qualifier
            "long_field",  # name
            _fbthrift_py3lite_types.typeinfo_i64,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            6,  # id
            _fbthrift_py3lite_types.FieldQualifier.Terse, # qualifier
            "float_field",  # name
            _fbthrift_py3lite_types.typeinfo_float,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            7,  # id
            _fbthrift_py3lite_types.FieldQualifier.Terse, # qualifier
            "double_field",  # name
            _fbthrift_py3lite_types.typeinfo_double,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            8,  # id
            _fbthrift_py3lite_types.FieldQualifier.Terse, # qualifier
            "string_field",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            9,  # id
            _fbthrift_py3lite_types.FieldQualifier.Terse, # qualifier
            "binary_field",  # name
            _fbthrift_py3lite_types.typeinfo_binary,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            10,  # id
            _fbthrift_py3lite_types.FieldQualifier.Terse, # qualifier
            "enum_field",  # name
            lambda: _fbthrift_py3lite_types.EnumTypeInfo(MyEnum),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            11,  # id
            _fbthrift_py3lite_types.FieldQualifier.Terse, # qualifier
            "list_field",  # name
            lambda: _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.typeinfo_i16),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            12,  # id
            _fbthrift_py3lite_types.FieldQualifier.Terse, # qualifier
            "set_field",  # name
            lambda: _fbthrift_py3lite_types.SetTypeInfo(_fbthrift_py3lite_types.typeinfo_i16),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            13,  # id
            _fbthrift_py3lite_types.FieldQualifier.Terse, # qualifier
            "map_field",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_i16, _fbthrift_py3lite_types.typeinfo_i16),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            14,  # id
            _fbthrift_py3lite_types.FieldQualifier.Terse, # qualifier
            "struct_field",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(MyStruct),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "terse_write.StructLevelTerseStruct"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_StructLevelTerseStruct()



class FieldLevelTerseStruct(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_py3lite_types.FieldQualifier.Terse, # qualifier
            "terse_bool_field",  # name
            _fbthrift_py3lite_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Terse, # qualifier
            "terse_byte_field",  # name
            _fbthrift_py3lite_types.typeinfo_byte,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_py3lite_types.FieldQualifier.Terse, # qualifier
            "terse_short_field",  # name
            _fbthrift_py3lite_types.typeinfo_i16,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_py3lite_types.FieldQualifier.Terse, # qualifier
            "terse_int_field",  # name
            _fbthrift_py3lite_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            5,  # id
            _fbthrift_py3lite_types.FieldQualifier.Terse, # qualifier
            "terse_long_field",  # name
            _fbthrift_py3lite_types.typeinfo_i64,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            6,  # id
            _fbthrift_py3lite_types.FieldQualifier.Terse, # qualifier
            "terse_float_field",  # name
            _fbthrift_py3lite_types.typeinfo_float,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            7,  # id
            _fbthrift_py3lite_types.FieldQualifier.Terse, # qualifier
            "terse_double_field",  # name
            _fbthrift_py3lite_types.typeinfo_double,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            8,  # id
            _fbthrift_py3lite_types.FieldQualifier.Terse, # qualifier
            "terse_string_field",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            9,  # id
            _fbthrift_py3lite_types.FieldQualifier.Terse, # qualifier
            "terse_binary_field",  # name
            _fbthrift_py3lite_types.typeinfo_binary,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            10,  # id
            _fbthrift_py3lite_types.FieldQualifier.Terse, # qualifier
            "terse_enum_field",  # name
            lambda: _fbthrift_py3lite_types.EnumTypeInfo(MyEnum),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            11,  # id
            _fbthrift_py3lite_types.FieldQualifier.Terse, # qualifier
            "terse_list_field",  # name
            lambda: _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.typeinfo_i16),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            12,  # id
            _fbthrift_py3lite_types.FieldQualifier.Terse, # qualifier
            "terse_set_field",  # name
            lambda: _fbthrift_py3lite_types.SetTypeInfo(_fbthrift_py3lite_types.typeinfo_i16),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            13,  # id
            _fbthrift_py3lite_types.FieldQualifier.Terse, # qualifier
            "terse_map_field",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_i16, _fbthrift_py3lite_types.typeinfo_i16),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            14,  # id
            _fbthrift_py3lite_types.FieldQualifier.Terse, # qualifier
            "terse_struct_field",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(MyStruct),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            15,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "bool_field",  # name
            _fbthrift_py3lite_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            16,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "byte_field",  # name
            _fbthrift_py3lite_types.typeinfo_byte,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            17,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "short_field",  # name
            _fbthrift_py3lite_types.typeinfo_i16,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            18,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "int_field",  # name
            _fbthrift_py3lite_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            19,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "long_field",  # name
            _fbthrift_py3lite_types.typeinfo_i64,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            20,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "float_field",  # name
            _fbthrift_py3lite_types.typeinfo_float,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            21,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "double_field",  # name
            _fbthrift_py3lite_types.typeinfo_double,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            22,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "string_field",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            23,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "binary_field",  # name
            _fbthrift_py3lite_types.typeinfo_binary,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            24,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "enum_field",  # name
            lambda: _fbthrift_py3lite_types.EnumTypeInfo(MyEnum),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            25,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "list_field",  # name
            lambda: _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.typeinfo_i16),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            26,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "set_field",  # name
            lambda: _fbthrift_py3lite_types.SetTypeInfo(_fbthrift_py3lite_types.typeinfo_i16),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            27,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "map_field",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_i16, _fbthrift_py3lite_types.typeinfo_i16),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            28,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "struct_field",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(MyStruct),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "terse_write.FieldLevelTerseStruct"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_FieldLevelTerseStruct()


# This unfortunately has to be down here to prevent circular imports
import terse_write.thrift_metadata

class MyEnum(_fbthrift_py3lite_types.Enum, enum.Enum):
    ME0 = 0
    ME1 = 1
    @staticmethod
    def __get_thrift_name__() -> str:
        return "terse_write.MyEnum"

    @staticmethod
    def __get_metadata__():
        return terse_write.thrift_metadata.gen_metadata_enum_MyEnum()

def _fbthrift_metadata__struct_MyStruct():
    return terse_write.thrift_metadata.gen_metadata_struct_MyStruct()
def _fbthrift_metadata__struct_StructLevelTerseStruct():
    return terse_write.thrift_metadata.gen_metadata_struct_StructLevelTerseStruct()
def _fbthrift_metadata__struct_FieldLevelTerseStruct():
    return terse_write.thrift_metadata.gen_metadata_struct_FieldLevelTerseStruct()

_fbthrift_all_structs = [
    MyStruct,
    StructLevelTerseStruct,
    FieldLevelTerseStruct,
]
_fbthrift_py3lite_types.fill_specs(*_fbthrift_all_structs)
