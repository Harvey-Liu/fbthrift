/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

include "thrift/annotation/thrift.thrift"
include "thrift/lib/thrift/patch.thrift"

namespace cpp2 apache.thrift.test.patch

struct TestFields {
  1: optional bool optBoolVal;
  2: optional byte optByteVal;
  3: optional i16 optI16Val;
  4: optional i32 optI32Val;
  5: optional i64 optI64Val;
  6: optional float optFloatVal;
  7: optional double optDoubleVal;
  8: optional string optStringVal;
  9: optional binary (cpp.type = "::folly::IOBuf") optBinaryVal;
}

@patch.GeneratePatch
struct MyStruct {
  1: bool boolVal;
  2: byte byteVal;
  3: i16 i16Val;
  4: i32 i32Val;
  5: i64 i64Val;
  6: float floatVal;
  7: double doubleVal;
  8: string stringVal;
  9: binary (cpp.type = "::folly::IOBuf") binaryVal;
} (thrift.uri = "facebook.com/thrift/test/patch/MyStruct")
