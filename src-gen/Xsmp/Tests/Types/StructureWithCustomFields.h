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
// File Name    : StructureWithCustomFields.h
// Generated by : XsmpSdkGenerator-1.1.0
// -----------------------------------------------------------------------------
/// @file Xsmp/Tests/Types/StructureWithCustomFields.h
// This file is auto-generated, Do not edit otherwise your changes will be lost

#ifndef XSMP_TESTS_TYPES_STRUCTUREWITHCUSTOMFIELDS_H_
#define XSMP_TESTS_TYPES_STRUCTUREWITHCUSTOMFIELDS_H_

// ----------------------------------------------------------------------------
// ---------------------------- Include Header Files --------------------
// ----------------------------------------------------------------------------

#include <Smp/PrimitiveTypes.h>
#include <Smp/Publication/ITypeRegistry.h>
#include <Xsmp/Tests/Types/Enum1.h>
#include <Xsmp/Tests/Types/Float1.h>
#include <Xsmp/Tests/Types/Integer1.h>
#include <Xsmp/Tests/Types/SimpleStructure.h>
#include <Xsmp/Tests/Types/String1.h>

// ----------------------------------------------------------------------------
// ------------------------ Types and Interfaces ------------------------
// ----------------------------------------------------------------------------

namespace Xsmp::Tests::Types {
struct StructureWithCustomFields {
  ::Smp::Bool booleanInput;
  ::Smp::Char8 char8Input;
  ::Xsmp::Tests::Types::Enum1 enum1Input;
  ::Xsmp::Tests::Types::String1 string1Input;
  ::Xsmp::Tests::Types::Float1 float1Input;
  ::Xsmp::Tests::Types::Integer1 integer1Input;
  ::Xsmp::Tests::Types::SimpleStructure struct1Input;
  ::Smp::Bool booleanTransient;
  ::Smp::Char8 char8Transient;
  ::Xsmp::Tests::Types::Enum1 enum1Transient;
  ::Xsmp::Tests::Types::String1 string1Transient;
  ::Xsmp::Tests::Types::Float1 float1Transient;
  ::Xsmp::Tests::Types::Integer1 integer1Transient;
  ::Xsmp::Tests::Types::SimpleStructure struct1Transient;
  ::Smp::Bool booleanOutput;
  ::Smp::Char8 char8Output;
  ::Xsmp::Tests::Types::Enum1 enum1Output;
  ::Xsmp::Tests::Types::String1 string1Output;
  ::Xsmp::Tests::Types::Float1 float1Output;
  ::Xsmp::Tests::Types::Integer1 integer1Output;
  ::Xsmp::Tests::Types::SimpleStructure struct1Output;
  ::Smp::Bool booleanForcible;
  ::Smp::Char8 char8Forcible;
  ::Xsmp::Tests::Types::Enum1 enum1Forcible;
  ::Xsmp::Tests::Types::String1 string1Forcible;
  ::Xsmp::Tests::Types::Float1 float1Forcible;
  ::Xsmp::Tests::Types::Integer1 integer1Forcible;
  ::Xsmp::Tests::Types::SimpleStructure struct1Forcible;
  ::Smp::Bool booleanFailure;
  ::Smp::Char8 char8Failure;
  ::Xsmp::Tests::Types::Enum1 enum1Failure;
  ::Xsmp::Tests::Types::String1 string1Failure;
  ::Xsmp::Tests::Types::Float1 float1Failure;
  ::Xsmp::Tests::Types::Integer1 integer1Failure;
  ::Xsmp::Tests::Types::SimpleStructure struct1Failure;
  ::Smp::Bool booleanAll;
  ::Smp::Char8 char8All;
  ::Xsmp::Tests::Types::Enum1 enum1All;
  ::Xsmp::Tests::Types::String1 string1All;
  ::Xsmp::Tests::Types::Float1 float1All;
  ::Xsmp::Tests::Types::Integer1 integer1All;
  ::Xsmp::Tests::Types::SimpleStructure struct1All;

  static void _Register(::Smp::Publication::ITypeRegistry *registry);

  template <typename _BASE> struct _Field : public _BASE {
    // constructor
    // template<typename ..._Args>
    _Field(::Smp::Publication::ITypeRegistry *typeRegistry,
           ::Smp::Uuid typeUuid, ::Smp::String8 name,
           ::Smp::String8 description = "", ::Smp::IObject *parent = nullptr,
           ::Smp::ViewKind view = ::Smp::ViewKind::VK_None,
           const ::Xsmp::Tests::Types::StructureWithCustomFields &value = {})
        : _BASE(typeRegistry, typeUuid, name, description, parent, view),
          /// booleanInput initialization
          booleanInput{
              typeRegistry, ::Smp::Uuids::Uuid_Bool, "booleanInput", "", this,
              view,         value.booleanInput},
          /// char8Input initialization
          char8Input{
              typeRegistry, ::Smp::Uuids::Uuid_Char8, "char8Input", "", this,
              view,         value.char8Input},
          /// enum1Input initialization
          enum1Input{typeRegistry,
                     ::Xsmp::Tests::Types::Uuid_Enum1,
                     "enum1Input",
                     "",
                     this,
                     view,
                     value.enum1Input},
          /// string1Input initialization
          string1Input{typeRegistry,
                       ::Xsmp::Tests::Types::Uuid_String1,
                       "string1Input",
                       "",
                       this,
                       view,
                       value.string1Input},
          /// float1Input initialization
          float1Input{typeRegistry,
                      ::Xsmp::Tests::Types::Uuid_Float1,
                      "float1Input",
                      "",
                      this,
                      view,
                      value.float1Input},
          /// integer1Input initialization
          integer1Input{typeRegistry,
                        ::Xsmp::Tests::Types::Uuid_Integer1,
                        "integer1Input",
                        "",
                        this,
                        view,
                        value.integer1Input},
          /// struct1Input initialization
          struct1Input{typeRegistry,
                       ::Xsmp::Tests::Types::Uuid_SimpleStructure,
                       "struct1Input",
                       "",
                       this,
                       view,
                       value.struct1Input},
          /// booleanTransient initialization
          booleanTransient{typeRegistry,
                           ::Smp::Uuids::Uuid_Bool,
                           "booleanTransient",
                           "",
                           this,
                           view,
                           value.booleanTransient},
          /// char8Transient initialization
          char8Transient{typeRegistry,
                         ::Smp::Uuids::Uuid_Char8,
                         "char8Transient",
                         "",
                         this,
                         view,
                         value.char8Transient},
          /// enum1Transient initialization
          enum1Transient{typeRegistry,
                         ::Xsmp::Tests::Types::Uuid_Enum1,
                         "enum1Transient",
                         "",
                         this,
                         view,
                         value.enum1Transient},
          /// string1Transient initialization
          string1Transient{typeRegistry,
                           ::Xsmp::Tests::Types::Uuid_String1,
                           "string1Transient",
                           "",
                           this,
                           view,
                           value.string1Transient},
          /// float1Transient initialization
          float1Transient{typeRegistry,
                          ::Xsmp::Tests::Types::Uuid_Float1,
                          "float1Transient",
                          "",
                          this,
                          view,
                          value.float1Transient},
          /// integer1Transient initialization
          integer1Transient{typeRegistry,
                            ::Xsmp::Tests::Types::Uuid_Integer1,
                            "integer1Transient",
                            "",
                            this,
                            view,
                            value.integer1Transient},
          /// struct1Transient initialization
          struct1Transient{typeRegistry,
                           ::Xsmp::Tests::Types::Uuid_SimpleStructure,
                           "struct1Transient",
                           "",
                           this,
                           view,
                           value.struct1Transient},
          /// booleanOutput initialization
          booleanOutput{
              typeRegistry, ::Smp::Uuids::Uuid_Bool, "booleanOutput", "", this,
              view,         value.booleanOutput},
          /// char8Output initialization
          char8Output{
              typeRegistry, ::Smp::Uuids::Uuid_Char8, "char8Output", "", this,
              view,         value.char8Output},
          /// enum1Output initialization
          enum1Output{typeRegistry,
                      ::Xsmp::Tests::Types::Uuid_Enum1,
                      "enum1Output",
                      "",
                      this,
                      view,
                      value.enum1Output},
          /// string1Output initialization
          string1Output{typeRegistry,
                        ::Xsmp::Tests::Types::Uuid_String1,
                        "string1Output",
                        "",
                        this,
                        view,
                        value.string1Output},
          /// float1Output initialization
          float1Output{typeRegistry,
                       ::Xsmp::Tests::Types::Uuid_Float1,
                       "float1Output",
                       "",
                       this,
                       view,
                       value.float1Output},
          /// integer1Output initialization
          integer1Output{typeRegistry,
                         ::Xsmp::Tests::Types::Uuid_Integer1,
                         "integer1Output",
                         "",
                         this,
                         view,
                         value.integer1Output},
          /// struct1Output initialization
          struct1Output{typeRegistry,
                        ::Xsmp::Tests::Types::Uuid_SimpleStructure,
                        "struct1Output",
                        "",
                        this,
                        view,
                        value.struct1Output},
          /// booleanForcible initialization
          booleanForcible{typeRegistry,
                          ::Smp::Uuids::Uuid_Bool,
                          "booleanForcible",
                          "",
                          this,
                          view,
                          value.booleanForcible},
          /// char8Forcible initialization
          char8Forcible{
              typeRegistry, ::Smp::Uuids::Uuid_Char8, "char8Forcible", "", this,
              view,         value.char8Forcible},
          /// enum1Forcible initialization
          enum1Forcible{typeRegistry,
                        ::Xsmp::Tests::Types::Uuid_Enum1,
                        "enum1Forcible",
                        "",
                        this,
                        view,
                        value.enum1Forcible},
          /// string1Forcible initialization
          string1Forcible{typeRegistry,
                          ::Xsmp::Tests::Types::Uuid_String1,
                          "string1Forcible",
                          "",
                          this,
                          view,
                          value.string1Forcible},
          /// float1Forcible initialization
          float1Forcible{typeRegistry,
                         ::Xsmp::Tests::Types::Uuid_Float1,
                         "float1Forcible",
                         "",
                         this,
                         view,
                         value.float1Forcible},
          /// integer1Forcible initialization
          integer1Forcible{typeRegistry,
                           ::Xsmp::Tests::Types::Uuid_Integer1,
                           "integer1Forcible",
                           "",
                           this,
                           view,
                           value.integer1Forcible},
          /// struct1Forcible initialization
          struct1Forcible{typeRegistry,
                          ::Xsmp::Tests::Types::Uuid_SimpleStructure,
                          "struct1Forcible",
                          "",
                          this,
                          view,
                          value.struct1Forcible},
          /// booleanFailure initialization
          booleanFailure{
              typeRegistry, ::Smp::Uuids::Uuid_Bool, "booleanFailure", "", this,
              view,         value.booleanFailure},
          /// char8Failure initialization
          char8Failure{
              typeRegistry, ::Smp::Uuids::Uuid_Char8, "char8Failure", "", this,
              view,         value.char8Failure},
          /// enum1Failure initialization
          enum1Failure{typeRegistry,
                       ::Xsmp::Tests::Types::Uuid_Enum1,
                       "enum1Failure",
                       "",
                       this,
                       view,
                       value.enum1Failure},
          /// string1Failure initialization
          string1Failure{typeRegistry,
                         ::Xsmp::Tests::Types::Uuid_String1,
                         "string1Failure",
                         "",
                         this,
                         view,
                         value.string1Failure},
          /// float1Failure initialization
          float1Failure{typeRegistry,
                        ::Xsmp::Tests::Types::Uuid_Float1,
                        "float1Failure",
                        "",
                        this,
                        view,
                        value.float1Failure},
          /// integer1Failure initialization
          integer1Failure{typeRegistry,
                          ::Xsmp::Tests::Types::Uuid_Integer1,
                          "integer1Failure",
                          "",
                          this,
                          view,
                          value.integer1Failure},
          /// struct1Failure initialization
          struct1Failure{typeRegistry,
                         ::Xsmp::Tests::Types::Uuid_SimpleStructure,
                         "struct1Failure",
                         "",
                         this,
                         view,
                         value.struct1Failure},
          /// booleanAll initialization
          booleanAll{
              typeRegistry, ::Smp::Uuids::Uuid_Bool, "booleanAll", "", this,
              view,         value.booleanAll},
          /// char8All initialization
          char8All{typeRegistry,  ::Smp::Uuids::Uuid_Char8,
                   "char8All",    "",
                   this,          view,
                   value.char8All},
          /// enum1All initialization
          enum1All{typeRegistry,  ::Xsmp::Tests::Types::Uuid_Enum1,
                   "enum1All",    "",
                   this,          view,
                   value.enum1All},
          /// string1All initialization
          string1All{typeRegistry,
                     ::Xsmp::Tests::Types::Uuid_String1,
                     "string1All",
                     "",
                     this,
                     view,
                     value.string1All},
          /// float1All initialization
          float1All{typeRegistry,   ::Xsmp::Tests::Types::Uuid_Float1,
                    "float1All",    "",
                    this,           view,
                    value.float1All},
          /// integer1All initialization
          integer1All{typeRegistry,
                      ::Xsmp::Tests::Types::Uuid_Integer1,
                      "integer1All",
                      "",
                      this,
                      view,
                      value.integer1All},
          /// struct1All initialization
          struct1All{typeRegistry,
                     ::Xsmp::Tests::Types::Uuid_SimpleStructure,
                     "struct1All",
                     "",
                     this,
                     view,
                     value.struct1All} {}
    _Field(const _Field &) = delete;
    _Field &operator=(const _Field &) = delete;

    // copy operator from ::Xsmp::Tests::Types::StructureWithCustomFields
    _Field &
    operator=(const ::Xsmp::Tests::Types::StructureWithCustomFields &other) {
      this->booleanInput = other.booleanInput;
      this->char8Input = other.char8Input;
      this->enum1Input = other.enum1Input;
      this->string1Input = other.string1Input;
      this->float1Input = other.float1Input;
      this->integer1Input = other.integer1Input;
      this->struct1Input = other.struct1Input;
      this->booleanTransient = other.booleanTransient;
      this->char8Transient = other.char8Transient;
      this->enum1Transient = other.enum1Transient;
      this->string1Transient = other.string1Transient;
      this->float1Transient = other.float1Transient;
      this->integer1Transient = other.integer1Transient;
      this->struct1Transient = other.struct1Transient;
      this->booleanOutput = other.booleanOutput;
      this->char8Output = other.char8Output;
      this->enum1Output = other.enum1Output;
      this->string1Output = other.string1Output;
      this->float1Output = other.float1Output;
      this->integer1Output = other.integer1Output;
      this->struct1Output = other.struct1Output;
      this->booleanForcible = other.booleanForcible;
      this->char8Forcible = other.char8Forcible;
      this->enum1Forcible = other.enum1Forcible;
      this->string1Forcible = other.string1Forcible;
      this->float1Forcible = other.float1Forcible;
      this->integer1Forcible = other.integer1Forcible;
      this->struct1Forcible = other.struct1Forcible;
      this->booleanFailure = other.booleanFailure;
      this->char8Failure = other.char8Failure;
      this->enum1Failure = other.enum1Failure;
      this->string1Failure = other.string1Failure;
      this->float1Failure = other.float1Failure;
      this->integer1Failure = other.integer1Failure;
      this->struct1Failure = other.struct1Failure;
      this->booleanAll = other.booleanAll;
      this->char8All = other.char8All;
      this->enum1All = other.enum1All;
      this->string1All = other.string1All;
      this->float1All = other.float1All;
      this->integer1All = other.integer1All;
      this->struct1All = other.struct1All;
      return *this;
    }

    // convert to ::Xsmp::Tests::Types::StructureWithCustomFields
    operator ::Xsmp::Tests::Types::StructureWithCustomFields() const noexcept {
      return {booleanInput,      char8Input,       enum1Input,
              string1Input,      float1Input,      integer1Input,
              struct1Input,      booleanTransient, char8Transient,
              enum1Transient,    string1Transient, float1Transient,
              integer1Transient, struct1Transient, booleanOutput,
              char8Output,       enum1Output,      string1Output,
              float1Output,      integer1Output,   struct1Output,
              booleanForcible,   char8Forcible,    enum1Forcible,
              string1Forcible,   float1Forcible,   integer1Forcible,
              struct1Forcible,   booleanFailure,   char8Failure,
              enum1Failure,      string1Failure,   float1Failure,
              integer1Failure,   struct1Failure,   booleanAll,
              char8All,          enum1All,         string1All,
              float1All,         integer1All,      struct1All};
    }

    // Fields declaration
    typename _BASE::template Field<::Smp::Bool>::input booleanInput;
    typename _BASE::template Field<::Smp::Char8>::input char8Input;
    typename _BASE::template Field<::Xsmp::Tests::Types::Enum1>::input
        enum1Input;
    typename _BASE::template Field<::Xsmp::Tests::Types::String1>::input
        string1Input;
    typename _BASE::template Field<::Xsmp::Tests::Types::Float1>::input
        float1Input;
    typename _BASE::template Field<::Xsmp::Tests::Types::Integer1>::input
        integer1Input;
    typename _BASE::template Field<::Xsmp::Tests::Types::SimpleStructure>::input
        struct1Input;
    typename _BASE::template Field<::Smp::Bool>::transient booleanTransient;
    typename _BASE::template Field<::Smp::Char8>::transient char8Transient;
    typename _BASE::template Field<::Xsmp::Tests::Types::Enum1>::transient
        enum1Transient;
    typename _BASE::template Field<::Xsmp::Tests::Types::String1>::transient
        string1Transient;
    typename _BASE::template Field<::Xsmp::Tests::Types::Float1>::transient
        float1Transient;
    typename _BASE::template Field<::Xsmp::Tests::Types::Integer1>::transient
        integer1Transient;
    typename _BASE::template Field<
        ::Xsmp::Tests::Types::SimpleStructure>::transient struct1Transient;
    typename _BASE::template Field<::Smp::Bool>::output booleanOutput;
    typename _BASE::template Field<::Smp::Char8>::output char8Output;
    typename _BASE::template Field<::Xsmp::Tests::Types::Enum1>::output
        enum1Output;
    typename _BASE::template Field<::Xsmp::Tests::Types::String1>::output
        string1Output;
    typename _BASE::template Field<::Xsmp::Tests::Types::Float1>::output
        float1Output;
    typename _BASE::template Field<::Xsmp::Tests::Types::Integer1>::output
        integer1Output;
    typename _BASE::template Field<
        ::Xsmp::Tests::Types::SimpleStructure>::output struct1Output;
    typename _BASE::template Field<::Smp::Bool>::forcible booleanForcible;
    typename _BASE::template Field<::Smp::Char8>::forcible char8Forcible;
    typename _BASE::template Field<::Xsmp::Tests::Types::Enum1>::forcible
        enum1Forcible;
    typename _BASE::template Field<::Xsmp::Tests::Types::String1>::forcible
        string1Forcible;
    typename _BASE::template Field<::Xsmp::Tests::Types::Float1>::forcible
        float1Forcible;
    typename _BASE::template Field<::Xsmp::Tests::Types::Integer1>::forcible
        integer1Forcible;
    typename _BASE::template Field<
        ::Xsmp::Tests::Types::SimpleStructure>::forcible struct1Forcible;
    typename _BASE::template Field<::Smp::Bool>::failure booleanFailure;
    typename _BASE::template Field<::Smp::Char8>::failure char8Failure;
    typename _BASE::template Field<::Xsmp::Tests::Types::Enum1>::failure
        enum1Failure;
    typename _BASE::template Field<::Xsmp::Tests::Types::String1>::failure
        string1Failure;
    typename _BASE::template Field<::Xsmp::Tests::Types::Float1>::failure
        float1Failure;
    typename _BASE::template Field<::Xsmp::Tests::Types::Integer1>::failure
        integer1Failure;
    typename _BASE::template Field<
        ::Xsmp::Tests::Types::SimpleStructure>::failure struct1Failure;
    typename _BASE::template Field<
        ::Smp::Bool>::transient::input::output::forcible::failure booleanAll;
    typename _BASE::template Field<
        ::Smp::Char8>::transient::input::output::forcible::failure char8All;
    typename _BASE::template Field<::Xsmp::Tests::Types::Enum1>::transient::
        input::output::forcible::failure enum1All;
    typename _BASE::template Field<::Xsmp::Tests::Types::String1>::transient::
        input::output::forcible::failure string1All;
    typename _BASE::template Field<::Xsmp::Tests::Types::Float1>::transient::
        input::output::forcible::failure float1All;
    typename _BASE::template Field<::Xsmp::Tests::Types::Integer1>::transient::
        input::output::forcible::failure integer1All;
    typename _BASE::template Field<::Xsmp::Tests::Types::SimpleStructure>::
        transient::input::output::forcible::failure struct1All;
  };
};

/// Universally unique identifier of type StructureWithCustomFields.
inline constexpr ::Smp::Uuid Uuid_StructureWithCustomFields{
    0xf7de138dU, 0xe0a5U, 0x4ae2U, 0x9624U, 0xab49cc75b8b8U};
} // namespace Xsmp::Tests::Types

#endif // XSMP_TESTS_TYPES_STRUCTUREWITHCUSTOMFIELDS_H_
