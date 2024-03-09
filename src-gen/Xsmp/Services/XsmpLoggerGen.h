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
// File Name    : XsmpLoggerGen.h
// Generated by : XsmpSdkGenerator-${qualifiedVersion}
// -----------------------------------------------------------------------------
/// @file Xsmp/Services/XsmpLoggerGen.h
// This file is auto-generated, Do not edit otherwise your changes will be lost

#ifndef XSMP_SERVICES_XSMPLOGGERGEN_H_
#define XSMP_SERVICES_XSMPLOGGERGEN_H_

// ----------------------------------------------------------------------------
// ---------------------------- Include Header Files --------------------
// ----------------------------------------------------------------------------

#include <Smp/IPersist.h>
#include <Smp/ISimulator.h>
#include <Smp/Publication/ITypeRegistry.h>
#include <Smp/Services/ILogger.h>
#include <Xsmp/Service.h>
#include <type_traits>

// ----------------------------------------------------------------------------
// ------------------------ Types and Interfaces ------------------------
// ----------------------------------------------------------------------------

namespace Xsmp::Services {
// forward declaration of user class
class XsmpLogger;
/// Universally unique identifier of type XsmpLogger.
static constexpr ::Smp::Uuid Uuid_XsmpLogger { 0x2d9b0152U, 0x43fcU, 0x4146U,
        0x8614U, 0xa2000c38c2a5U };

class XsmpLoggerGen: public ::Xsmp::Service,
        public virtual ::Smp::Services::ILogger,
        public virtual ::Smp::IPersist {

    friend class ::Xsmp::Services::XsmpLogger;

public:
    // ------------------------------------------------------------------------------------
    // -------------------------- Constructors/Destructor --------------------------
    // ------------------------------------------------------------------------------------

    /// Constructor setting name, description, parent and simulator.
    /// @param name Name of new model instance.
    /// @param description Description of new model instance.
    /// @param parent Parent of new model instance.
    /// @param simulator The simulator instance.
    XsmpLoggerGen(::Smp::String8 name, ::Smp::String8 description,
            ::Smp::IComposite *parent, ::Smp::ISimulator *simulator);
    /// deleted copy constructor
    XsmpLoggerGen(const XsmpLoggerGen&) = delete;
    /// deleted move constructor
    XsmpLoggerGen(XsmpLoggerGen&&) = delete;
    /// deleted copy assignment
    XsmpLoggerGen& operator=(const XsmpLoggerGen&) = delete;
    /// deleted move assignment
    XsmpLoggerGen& operator=(XsmpLoggerGen&&) = delete;

    /// Virtual destructor to release memory.
    ~XsmpLoggerGen() override = default;

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

};
} // namespace Xsmp::Services

#endif // XSMP_SERVICES_XSMPLOGGERGEN_H_
