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
// File Name    : ModelWithOperationsGen.h
// Generated by : XsmpSdkGenerator-1.1.0
// -----------------------------------------------------------------------------
/// @file Xsmp/Tests/ModelWithOperationsGen.h
// This file is auto-generated, Do not edit otherwise your changes will be lost

#ifndef XSMP_TESTS_MODELWITHOPERATIONSGEN_H_
#define XSMP_TESTS_MODELWITHOPERATIONSGEN_H_

// ----------------------------------------------------------------------------
// ---------------------------- Include Header Files --------------------
// ----------------------------------------------------------------------------

#include <Smp/IRequest.h>
#include <Smp/ISimulator.h>
#include <Smp/PrimitiveTypes.h>
#include <Smp/Publication/IPublishOperation.h>
#include <Smp/Publication/ITypeRegistry.h>
#include <Xsmp/Model.h>
#include <functional>
#include <map>
#include <type_traits>

// ----------------------------------------------------------------------------
// ------------------------ Types and Interfaces ------------------------
// ----------------------------------------------------------------------------

namespace Xsmp::Tests {
// forward declaration of user class
class ModelWithOperations;
/// Universally unique identifier of type ModelWithOperations.
inline constexpr ::Smp::Uuid Uuid_ModelWithOperations{
    0x5c52ca42U, 0x4992U, 0x4401U, 0x9408U, 0x8d994b1fbabeU};

class ModelWithOperationsGen : public ::Xsmp::Model {

  friend class ::Xsmp::Tests::ModelWithOperations;

public:
  // ------------------------------------------------------------------------------------
  // -------------------------- Constructors/Destructor
  // --------------------------
  // ------------------------------------------------------------------------------------

  /// Constructor setting name, description, parent and simulator.
  /// @param name Name of new model instance.
  /// @param description Description of new model instance.
  /// @param parent Parent of new model instance.
  /// @param simulator The simulator instance.
  ModelWithOperationsGen(::Smp::String8 name, ::Smp::String8 description,
                         ::Smp::IComposite *parent,
                         ::Smp::ISimulator *simulator);
  /// deleted copy constructor
  ModelWithOperationsGen(const ModelWithOperationsGen &) = delete;
  /// deleted move constructor
  ModelWithOperationsGen(ModelWithOperationsGen &&) = delete;
  /// deleted copy assignment
  ModelWithOperationsGen &operator=(const ModelWithOperationsGen &) = delete;
  /// deleted move assignment
  ModelWithOperationsGen &operator=(ModelWithOperationsGen &&) = delete;

  /// Virtual destructor to release memory.
  ~ModelWithOperationsGen() override = default;

  // ----------------------------------------------------------------------------------
  // -------------------------------- IComponent
  // ---------------------------------
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
  const Smp::Uuid &GetUuid() const override;

  // ----------------------------------------------------------------------------------
  // --------------------------- IDynamicInvocation ---------------------------
  // ----------------------------------------------------------------------------------
  using RequestHandlers =
      std::map<std::string, std::function<void(ModelWithOperationsGen *,
                                               ::Smp::IRequest *)>>;
  static RequestHandlers requestHandlers;
  static RequestHandlers InitRequestHandlers();

  /// Invoke the operation for the given request.
  /// @param request Request object to invoke.
  void Invoke(::Smp::IRequest *request) override;

private:
  virtual void voidOperation() = 0;
  virtual ::Smp::Bool boolOperation() = 0;
  virtual ::Smp::Char8 char8Operation() = 0;
  virtual ::Smp::DateTime dateTimeOperation() = 0;
  virtual ::Smp::Duration durationOperation() = 0;
  virtual ::Smp::Float32 float32Operation() = 0;
  virtual ::Smp::Float64 float64Operation() = 0;
  virtual ::Smp::Int16 int16Operation() = 0;
  virtual ::Smp::Int32 int32Operation() = 0;
  virtual ::Smp::Int64 int64Operation() = 0;
  virtual ::Smp::Int8 int8Operation() = 0;
  virtual ::Smp::String8 string8Operation() = 0;
  virtual ::Smp::UInt16 uint16Operation() = 0;
  virtual ::Smp::UInt32 uint32Operation() = 0;
  virtual ::Smp::UInt64 uint64Operation() = 0;
  virtual ::Smp::UInt8 uint8Operation() = 0;
};
} // namespace Xsmp::Tests

#endif // XSMP_TESTS_MODELWITHOPERATIONSGEN_H_
