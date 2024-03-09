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
// File Name    : ModelWithArrayFieldsGen.h
// Generated by : XsmpSdkGenerator-${qualifiedVersion}
// -----------------------------------------------------------------------------
/// @file Xsmp/Tests/ModelWithArrayFieldsGen.h
// This file is auto-generated, Do not edit otherwise your changes will be lost

#ifndef XSMP_TESTS_MODELWITHARRAYFIELDSGEN_H_
#define XSMP_TESTS_MODELWITHARRAYFIELDSGEN_H_

// ----------------------------------------------------------------------------
// ---------------------------- Include Header Files --------------------
// ----------------------------------------------------------------------------

#include <Smp/ISimulator.h>
#include <Smp/Publication/ITypeRegistry.h>
#include <Xsmp/FallibleModel.h>
#include <Xsmp/Field.h>
#include <Xsmp/Model.h>
#include <Xsmp/Tests/Types/BoolArray.h>
#include <Xsmp/Tests/Types/Char8Array.h>
#include <Xsmp/Tests/Types/Enum1Array.h>
#include <Xsmp/Tests/Types/Float1Array.h>
#include <Xsmp/Tests/Types/Integer1Array.h>
#include <Xsmp/Tests/Types/String1Array.h>
#include <type_traits>

// ----------------------------------------------------------------------------
// ------------------------ Types and Interfaces ------------------------
// ----------------------------------------------------------------------------

namespace Xsmp::Tests {
// forward declaration of user class
class ModelWithArrayFields;
/// Universally unique identifier of type ModelWithArrayFields.
static constexpr ::Smp::Uuid Uuid_ModelWithArrayFields { 0x120f3848U, 0x02d8U,
        0x4cecU, 0xa0c2U, 0x32e3e5714e1aU };

class ModelWithArrayFieldsGen: public ::Xsmp::Model,
        public virtual ::Xsmp::FallibleModel {

    friend class ::Xsmp::Tests::ModelWithArrayFields;

public:
    // ------------------------------------------------------------------------------------
    // -------------------------- Constructors/Destructor --------------------------
    // ------------------------------------------------------------------------------------

    /// Constructor setting name, description, parent and simulator.
    /// @param name Name of new model instance.
    /// @param description Description of new model instance.
    /// @param parent Parent of new model instance.
    /// @param simulator The simulator instance.
    ModelWithArrayFieldsGen(::Smp::String8 name, ::Smp::String8 description,
            ::Smp::IComposite *parent, ::Smp::ISimulator *simulator);
    /// deleted copy constructor
    ModelWithArrayFieldsGen(const ModelWithArrayFieldsGen&) = delete;
    /// deleted move constructor
    ModelWithArrayFieldsGen(ModelWithArrayFieldsGen&&) = delete;
    /// deleted copy assignment
    ModelWithArrayFieldsGen& operator=(const ModelWithArrayFieldsGen&) = delete;
    /// deleted move assignment
    ModelWithArrayFieldsGen& operator=(ModelWithArrayFieldsGen&&) = delete;

    /// Virtual destructor to release memory.
    ~ModelWithArrayFieldsGen() override = default;

    // ----------------------------------------------------------------------------------
    // -------------------------------- IComponent ---------------------------------
    // ----------------------------------------------------------------------------------

    /// Publish fields, operations and properties of the model.
    /// @param receiver Publication receiver.
    void Publish(::Smp::IPublication *receiver) override;

    /// Request for configuration.
    /// @param logger Logger to use for log messages during Configure().
    /// @param linkRegistry Link Registry to use for registration of
    ///         links created during Configure() or later.
    void Configure(::Smp::Services::ILogger *logger,
            ::Smp::Services::ILinkRegistry *linkRegistry) override;

    /// Connect model to simulator.
    /// @param simulator Simulation Environment that hosts the model.
    ///
    void Connect(::Smp::ISimulator *simulator) override;

    /// Disconnect model to simulator.
    /// @throws Smp::InvalidComponentState
    void Disconnect() override;

    /// Return the Universally Unique Identifier of the Model.
    /// @return Universally Unique Identifier of the Model.
    const Smp::Uuid& GetUuid() const override;

private:
    ::Xsmp::Tests::Types::BoolArray boolean;
    ::Xsmp::Tests::Types::Char8Array char8;
    ::Xsmp::Tests::Types::Enum1Array enum1;
    ::Xsmp::Tests::Types::String1Array string1;
    ::Xsmp::Tests::Types::Float1Array float1;
    ::Xsmp::Tests::Types::Integer1Array integer1;
    ::Xsmp::Tests::Types::BoolArray booleanInput;
    ::Xsmp::Tests::Types::Char8Array char8Input;
    ::Xsmp::Tests::Types::Enum1Array enum1Input;
    ::Xsmp::Tests::Types::String1Array string1Input;
    ::Xsmp::Tests::Types::Float1Array float1Input;
    ::Xsmp::Tests::Types::Integer1Array integer1Input;
    ::Xsmp::Tests::Types::BoolArray booleanTransient;
    ::Xsmp::Tests::Types::Char8Array char8Transient;
    ::Xsmp::Tests::Types::Enum1Array enum1Transient;
    ::Xsmp::Tests::Types::String1Array string1Transient;
    ::Xsmp::Tests::Types::Float1Array float1Transient;
    ::Xsmp::Tests::Types::Integer1Array integer1Transient;
    ::Xsmp::Field<::Xsmp::Tests::Types::BoolArray>::output booleanOutput;
    ::Xsmp::Field<::Xsmp::Tests::Types::Char8Array>::output char8Output;
    ::Xsmp::Field<::Xsmp::Tests::Types::Enum1Array>::output enum1Output;
    ::Xsmp::Field<::Xsmp::Tests::Types::String1Array>::output string1Output;
    ::Xsmp::Field<::Xsmp::Tests::Types::Float1Array>::output float1Output;
    ::Xsmp::Field<::Xsmp::Tests::Types::Integer1Array>::output integer1Output;
    ::Xsmp::Field<::Xsmp::Tests::Types::BoolArray>::forcible booleanForcible;
    ::Xsmp::Field<::Xsmp::Tests::Types::Char8Array>::forcible char8Forcible;
    ::Xsmp::Field<::Xsmp::Tests::Types::Enum1Array>::forcible enum1Forcible;
    ::Xsmp::Field<::Xsmp::Tests::Types::String1Array>::forcible string1Forcible;
    ::Xsmp::Field<::Xsmp::Tests::Types::Float1Array>::forcible float1Forcible;
    ::Xsmp::Field<::Xsmp::Tests::Types::Integer1Array>::forcible integer1Forcible;
    ::Xsmp::Field<::Xsmp::Tests::Types::BoolArray>::failure booleanFailure;
    ::Xsmp::Field<::Xsmp::Tests::Types::Char8Array>::failure char8Failure;
    ::Xsmp::Field<::Xsmp::Tests::Types::Enum1Array>::failure enum1Failure;
    ::Xsmp::Field<::Xsmp::Tests::Types::String1Array>::failure string1Failure;
    ::Xsmp::Field<::Xsmp::Tests::Types::Float1Array>::failure float1Failure;
    ::Xsmp::Field<::Xsmp::Tests::Types::Integer1Array>::failure integer1Failure;
    ::Xsmp::Field<::Xsmp::Tests::Types::BoolArray>::transient::input::output::forcible::failure booleanAll;
    ::Xsmp::Field<::Xsmp::Tests::Types::Char8Array>::transient::input::output::forcible::failure char8All;
    ::Xsmp::Field<::Xsmp::Tests::Types::Enum1Array>::transient::input::output::forcible::failure enum1All;
    ::Xsmp::Field<::Xsmp::Tests::Types::String1Array>::transient::input::output::forcible::failure string1All;
    ::Xsmp::Field<::Xsmp::Tests::Types::Float1Array>::transient::input::output::forcible::failure float1All;
    ::Xsmp::Field<::Xsmp::Tests::Types::Integer1Array>::transient::input::output::forcible::failure integer1All;
};
} // namespace Xsmp::Tests

#endif // XSMP_TESTS_MODELWITHARRAYFIELDSGEN_H_
