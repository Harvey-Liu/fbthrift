#
# Autogenerated by Thrift for module1.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#


from thrift.python.types import EnumMeta as __EnumMeta
import thrift.py3.types
import module1.thrift_metadata

_fbthrift__module_name__ = "module1.types"



class Enum(
    thrift.py3.types.CompiledEnum,
    metaclass=__EnumMeta,
):
    ONE = 1
    TWO = 2
    THREE = 3

    __module__ = _fbthrift__module_name__
    __slots__ = ()

    @staticmethod
    def __get_metadata__():
        return module1.thrift_metadata.gen_metadata_enum_Enum()

    @staticmethod
    def __get_thrift_name__():
        return "module1.Enum"

    def _to_python(self):
        import importlib
        python_types = importlib.import_module(
            "module1.thrift_types"
        )
        return python_types.Enum(self.value)

    def _to_py3(self):
        return self

    def _to_py_deprecated(self):
        return self.value




