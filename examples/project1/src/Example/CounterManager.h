// Copyright 2023 YOUR ORGANIZATION. All rights reserved.
//
// YOUR NOTICE

// -----------------------------------------------------------------------------
// File Name    : CounterManager.h
// Generated by : XsmpSdkGenerator-${qualifiedVersion}
// -----------------------------------------------------------------------------
/// @file Example/CounterManager.h

#ifndef EXAMPLE_COUNTERMANAGER_H_
#define EXAMPLE_COUNTERMANAGER_H_

// Include the generated header file
#include <Example/CounterManagerGen.h>

// ----------------------------------------------------------------------------
// ------------------------ Types and Interfaces ------------------------
// ----------------------------------------------------------------------------

namespace Example {
class CounterManager : public CounterManagerGen {
public:
  /// Re-use parent constructors
  using CounterManagerGen::CounterManagerGen;

  /// Virtual destructor to release memory.
  ~CounterManager() noexcept override = default;

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

  ::Smp::Int32 get_sum() override;
  ::Smp::Float64 get_average() override;
  void set_count(::Smp::Int32 count) override;
};
} // namespace Example

#endif // EXAMPLE_COUNTERMANAGER_H_
