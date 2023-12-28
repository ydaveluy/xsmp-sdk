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
// File Name    : SimpleString1Array.cpp
// Generated by : XsmpSdkGenerator-${qualifiedVersion}
// -----------------------------------------------------------------------------
/// @file Xsmp/Tests/Types/SimpleString1Array.cpp
// This file is auto-generated, Do not edit otherwise your changes will be lost

// ----------------------------------------------------------------------------
// ---------------------------- Include Header Files --------------------
// ----------------------------------------------------------------------------

#include <Xsmp/Tests/Types/SimpleString1Array.h>

namespace Xsmp::Tests::Types {
void _Register_SimpleString1Array(::Smp::Publication::ITypeRegistry *registry) {
    registry->AddArrayType("SimpleString1Array", // Name
            "", // Description
            ::Xsmp::Tests::Types::Uuid_SimpleString1Array, // UUID
            ::Xsmp::Tests::Types::Uuid_String1, // Item Type UUID
            sizeof(::Xsmp::Tests::Types::String1), // Item Type size
            3, // size of the array
            true // is simple array
            );
}
} // namespace Xsmp::Tests::Types
