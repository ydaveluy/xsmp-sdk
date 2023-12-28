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
// File Name    : ModelWithArrayFields.h
// Generated by : XsmpSdkGenerator-${qualifiedVersion}
// -----------------------------------------------------------------------------
/// @file Xsmp/Tests/ModelWithArrayFields.h

#ifndef XSMP_TESTS_MODELWITHARRAYFIELDS_H_
#define XSMP_TESTS_MODELWITHARRAYFIELDS_H_

// Include the generated header file
#include <Xsmp/Tests/ModelWithArrayFieldsGen.h>

// ----------------------------------------------------------------------------
// ------------------------ Types and Interfaces ------------------------
// ----------------------------------------------------------------------------

namespace Xsmp {
namespace Tests {
class ModelWithArrayFields: public ModelWithArrayFieldsGen {
public:
    /// Re-use parent constructors
    using ModelWithArrayFieldsGen::ModelWithArrayFieldsGen;

    /// Virtual destructor to release memory.
    ~ModelWithArrayFields() noexcept override = default;

private:
    // visibility to call DoPublish/DoConfigure/DoConnect/DoDisconnect
    friend class ::Xsmp::Component::Helper;

    /// Publish fields, operations and properties of the model.
    /// @param receiver Publication receiver.
    void DoPublish(::Smp::IPublication *receiver);

    /// Request for configuration.
    /// @param logger Logger to use for log messages during Configure().
    /// @param linkRegistry Link Registry to use for registration of
    ///         links created during Configure() or later.
    void DoConfigure(::Smp::Services::ILogger *logger,
            ::Smp::Services::ILinkRegistry *linkRegistry);

    /// Connect model to simulator.
    /// @param simulator Simulation Environment that hosts the model.
    ///
    void DoConnect(::Smp::ISimulator *simulator);

    /// Disconnect model to simulator.
    /// @throws Smp::InvalidComponentState
    void DoDisconnect();

};
} // namespace Tests
} // namespace Xsmp

#endif // XSMP_TESTS_MODELWITHARRAYFIELDS_H_
