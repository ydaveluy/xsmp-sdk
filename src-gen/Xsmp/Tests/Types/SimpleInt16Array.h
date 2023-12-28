// Copyright 2023 THALES ALENIA SPACE FRANCE. All rights reserved.
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//     http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// -----------------------------------------------------------------------------
// File Name    : SimpleInt16Array.h
// Generated by : XsmpSdkGenerator-${qualifiedVersion}
// -----------------------------------------------------------------------------
/// @file Xsmp/Tests/Types/SimpleInt16Array.h
// This file is auto-generated, Do not edit otherwise your changes will be lost

#ifndef XSMP_TESTS_TYPES_SIMPLEINT16ARRAY_H_
#define XSMP_TESTS_TYPES_SIMPLEINT16ARRAY_H_

// ----------------------------------------------------------------------------
// ---------------------------- Include Header Files --------------------
// ----------------------------------------------------------------------------

#include <Smp/PrimitiveTypes.h>
#include <Smp/Publication/ITypeRegistry.h>
#include <Xsmp/Array.h>

// ----------------------------------------------------------------------------
// ------------------------ Types and Interfaces ------------------------
// ----------------------------------------------------------------------------

namespace Xsmp::Tests::Types {
using SimpleInt16Array = ::Xsmp::Array<::Smp::Int16, 3>::simple;

/// Universally unique identifier of type SimpleInt16Array.
static constexpr ::Smp::Uuid Uuid_SimpleInt16Array { 0xcdb58aeeU, 0xdccbU,
        0x42c4U, 0xb90bU, 0x8bba61224fc9U };

void _Register_SimpleInt16Array(::Smp::Publication::ITypeRegistry *registry);
} // namespace Xsmp::Tests::Types

#endif // XSMP_TESTS_TYPES_SIMPLEINT16ARRAY_H_
