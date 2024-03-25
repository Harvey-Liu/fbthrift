# Copyright (c) Meta Platforms, Inc. and affiliates.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import importlib
import types
import unittest

from thrift.python.mutable_types import MutableStruct, MutableStructOrUnion

from thrift.test.thrift_python.struct_test.thrift_mutable_types import (  # @manual=//thrift/test/thrift-python:struct_test_thrift-python-types
    TestStruct as TestStructMutable,
)

from thrift.test.thrift_python.struct_test.thrift_types import (
    TestStruct as TestStructImmutable,
)


class ThriftPython_ImmutableStruct_Test(unittest.TestCase):
    def test_creation(self) -> None:
        # Field initialization at instantiation time
        w_new = TestStructImmutable(unqualified_string="hello, world!")
        self.assertEqual(w_new.unqualified_string, "hello, world!")

    def test_type_safety(self) -> None:
        # Field type is validated on instantiation
        with self.assertRaisesRegex(
            TypeError,
            (
                "Cannot create internal string data representation. Expected "
                "type <class 'str'>, got: <class 'int'>."
            ),
        ):
            TestStructImmutable(unqualified_string=42)

    def test_equality_and_hashability(self) -> None:
        # Equality
        w_new = TestStructImmutable(unqualified_string="hello, world!")
        self.assertEqual(w_new, w_new)
        w_new2 = TestStructImmutable(unqualified_string="hello, world!")
        self.assertEqual(w_new, w_new2)
        self.assertIsNot(w_new, w_new2)

        # Immutable types are hashable, with proper semantics.
        self.assertEqual(hash(w_new), hash(w_new2))
        self.assertIn(w_new, {w_new2})

        mapping = {w_new: 123}
        self.assertIn(w_new, mapping)
        self.assertIn(w_new2, mapping)
        self.assertEqual(mapping[w_new], 123)
        self.assertEqual(mapping[w_new2], 123)

        mapping[w_new2] = 456
        self.assertEqual(mapping[w_new], 456)
        self.assertEqual(mapping[w_new2], 456)


class ThriftPython_MutableStruct_Test(unittest.TestCase):

    def test_creation_and_assignment(self) -> None:
        w_mutable = TestStructMutable()
        self.assertIsInstance(w_mutable, MutableStruct)
        self.assertIsInstance(w_mutable, MutableStructOrUnion)

        self.assertEqual(w_mutable.unqualified_string, None)
        w_mutable.unqualified_string = "hello, world!"
        self.assertEqual(w_mutable.unqualified_string, "hello, world!")

    def test_equality_and_hashability(self) -> None:
        # Equality
        w_mutable = TestStructMutable(unqualified_string="hello, world!")
        self.assertEqual(w_mutable, w_mutable)

        w_mutable2 = TestStructMutable(unqualified_string="hello, world!")
        self.assertEqual(w_mutable.unqualified_string, w_mutable2.unqualified_string)
        self.assertEqual(w_mutable, w_mutable2)

        # Instances are not hashable
        with self.assertRaisesRegex(TypeError, "unhashable type: 'TestStruct'"):
            hash(w_mutable)

        with self.assertRaisesRegex(TypeError, "unhashable type: 'TestStruct'"):
            {w_mutable}

        # List and Tuple membership tests use equality (not hashing).
        self.assertIn(w_mutable, [w_mutable2])
        self.assertIn(w_mutable, (w_mutable2,))

        w_mutable2.unqualified_string = "changed value"
        self.assertNotIn(w_mutable, [w_mutable2])
        self.assertNotIn(w_mutable, (w_mutable2,))

    def test_subclass(self) -> None:
        with self.assertRaisesRegex(
            TypeError, "Inheriting from thrift-python data types is forbidden:"
        ):
            types.new_class("TestSubclass2", bases=(TestStructMutable,))

    def test_to_immutable(self) -> None:
        w_mutable = TestStructMutable(unqualified_string="hello")
        w_immutable = w_mutable._to_immutable()
        self.assertIsNot(w_mutable, w_immutable)

        # Even though their contents are the same, the mutable and immutable
        # instance are not "equal":
        self.assertEqual(w_mutable.unqualified_string, w_immutable.unqualified_string)
        self.assertNotEqual(w_mutable, w_immutable)

        w_mutable.unqualified_string = "hello, world!"
        self.assertNotEqual(
            w_mutable.unqualified_string, w_immutable.unqualified_string
        )

        # Check that converting to immutable validates field types
        w_mutable.unqualified_string = 42
        with self.assertRaisesRegex(
            TypeError,
            (
                "TypeError: Cannot create internal string data representation. "
                "Expected type <class 'str'>, got: <class 'int'>."
            ),
        ):
            w_mutable._to_immutable()
