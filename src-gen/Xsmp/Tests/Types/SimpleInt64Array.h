// Copyright 2023-2024 THALES ALENIA SPACE FRANCE. All rights reserved.
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
// File Name    : SimpleInt64Array.h
// Generated by : XsmpSdkGenerator-1.1.0
// -----------------------------------------------------------------------------
/// @file Xsmp/Tests/Types/SimpleInt64Array.h
// This file is auto-generated, Do not edit otherwise your changes will be lost

#ifndef XSMP_TESTS_TYPES_SIMPLEINT64ARRAY_H_
#define XSMP_TESTS_TYPES_SIMPLEINT64ARRAY_H_

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
using SimpleInt64Array = ::Xsmp::Array<::Smp::Int64, 3>::simple;

/// Universally unique identifier of type SimpleInt64Array.
inline constexpr ::Smp::Uuid Uuid_SimpleInt64Array{
    0xda0d220cU, 0xec85U, 0x4c7dU, 0x90ddU, 0xa332f6c92295U};

void _Register_SimpleInt64Array(::Smp::Publication::ITypeRegistry *registry);
} // namespace Xsmp::Tests::Types

#endif // XSMP_TESTS_TYPES_SIMPLEINT64ARRAY_H_
