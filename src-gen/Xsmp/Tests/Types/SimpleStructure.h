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
// File Name    : SimpleStructure.h
// Generated by : XsmpSdkGenerator-1.1.0
// -----------------------------------------------------------------------------
/// @file Xsmp/Tests/Types/SimpleStructure.h
// This file is auto-generated, Do not edit otherwise your changes will be lost

#ifndef XSMP_TESTS_TYPES_SIMPLESTRUCTURE_H_
#define XSMP_TESTS_TYPES_SIMPLESTRUCTURE_H_

// ----------------------------------------------------------------------------
// ---------------------------- Include Header Files --------------------
// ----------------------------------------------------------------------------

#include <Smp/PrimitiveTypes.h>
#include <Smp/Publication/ITypeRegistry.h>
#include <Xsmp/Tests/Types/Enum1.h>
#include <Xsmp/Tests/Types/Float1.h>
#include <Xsmp/Tests/Types/Integer1.h>
#include <Xsmp/Tests/Types/String1.h>

// ----------------------------------------------------------------------------
// ------------------------ Types and Interfaces ------------------------
// ----------------------------------------------------------------------------

namespace Xsmp::Tests::Types {
struct SimpleStructure {
  ::Smp::Bool boolean;
  ::Smp::Char8 char8;
  ::Xsmp::Tests::Types::Enum1 enum1;
  ::Xsmp::Tests::Types::String1 string1;
  ::Xsmp::Tests::Types::Float1 float1;
  ::Xsmp::Tests::Types::Integer1 integer1;

  static void _Register(::Smp::Publication::ITypeRegistry *registry);

  template <typename _BASE> struct _Field : public _BASE {
    // constructor
    // template<typename ..._Args>
    _Field(::Smp::Publication::ITypeRegistry *typeRegistry,
           ::Smp::Uuid typeUuid, ::Smp::String8 name,
           ::Smp::String8 description = "", ::Smp::IObject *parent = nullptr,
           ::Smp::ViewKind view = ::Smp::ViewKind::VK_None,
           const ::Xsmp::Tests::Types::SimpleStructure &value = {})
        : _BASE(typeRegistry, typeUuid, name, description, parent, view),
          /// boolean initialization
          boolean{
              typeRegistry, ::Smp::Uuids::Uuid_Bool, "boolean", "", this, view,
              value.boolean},
          /// char8 initialization
          char8{typeRegistry, ::Smp::Uuids::Uuid_Char8, "char8", "", this, view,
                value.char8},
          /// enum1 initialization
          enum1{typeRegistry, ::Xsmp::Tests::Types::Uuid_Enum1,
                "enum1",      "",
                this,         view,
                value.enum1},
          /// string1 initialization
          string1{typeRegistry, ::Xsmp::Tests::Types::Uuid_String1,
                  "string1",    "",
                  this,         view,
                  value.string1},
          /// float1 initialization
          float1{typeRegistry, ::Xsmp::Tests::Types::Uuid_Float1,
                 "float1",     "",
                 this,         view,
                 value.float1},
          /// integer1 initialization
          integer1{typeRegistry,  ::Xsmp::Tests::Types::Uuid_Integer1,
                   "integer1",    "",
                   this,          view,
                   value.integer1} {}
    _Field(const _Field &) = delete;
    _Field &operator=(const _Field &) = delete;

    // copy operator from ::Xsmp::Tests::Types::SimpleStructure
    _Field &operator=(const ::Xsmp::Tests::Types::SimpleStructure &other) {
      this->boolean = other.boolean;
      this->char8 = other.char8;
      this->enum1 = other.enum1;
      this->string1 = other.string1;
      this->float1 = other.float1;
      this->integer1 = other.integer1;
      return *this;
    }

    // convert to ::Xsmp::Tests::Types::SimpleStructure
    operator ::Xsmp::Tests::Types::SimpleStructure() const noexcept {
      return {boolean, char8, enum1, string1, float1, integer1};
    }

    // Fields declaration
    typename _BASE::template Field<::Smp::Bool> boolean;
    typename _BASE::template Field<::Smp::Char8> char8;
    typename _BASE::template Field<::Xsmp::Tests::Types::Enum1> enum1;
    typename _BASE::template Field<::Xsmp::Tests::Types::String1> string1;
    typename _BASE::template Field<::Xsmp::Tests::Types::Float1> float1;
    typename _BASE::template Field<::Xsmp::Tests::Types::Integer1> integer1;
  };
};

/// Universally unique identifier of type SimpleStructure.
inline constexpr ::Smp::Uuid Uuid_SimpleStructure{0xd5831073U, 0x1037U, 0x48a0U,
                                                  0xb455U, 0x53083c542d75U};
} // namespace Xsmp::Tests::Types

#endif // XSMP_TESTS_TYPES_SIMPLESTRUCTURE_H_
