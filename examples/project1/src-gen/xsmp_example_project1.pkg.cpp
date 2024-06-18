// Copyright 2023-2024 YOUR ORGANIZATION. All rights reserved.
//
// YOUR NOTICE
// -----------------------------------------------------------------------------
// File Name    : xsmp_example_project1.cpp
// Generated by : XsmpSdkGenerator-1.1.2
// -----------------------------------------------------------------------------
/// @file xsmp_example_project1.cpp
// This file is auto-generated, Do not edit otherwise your changes will be lost

// -------------------------------------------------------------------------------
// --------------------------------- Includes ----------------------------------
// -------------------------------------------------------------------------------
#include <Smp/Publication/ITypeRegistry.h>
#include <xsmp_example_project1.h>

#ifdef WIN32
#define DLL_EXPORT                                                             \
  __declspec(dllexport) // %RELAX<mconst> Visual Studio requires a define
#else
#define DLL_EXPORT
#endif

// -----------------------------------------------------------------------------
// -------------------------- Initialise Function ------------------------------
// -----------------------------------------------------------------------------

extern "C" {

/// Global Initialise function of Package xsmp_example_project1.
/// @param simulator Simulator for registration of factories.
/// @param typeRegistry Type Registry for registration of types.
/// @return True if initialisation was successful, false otherwise.
DLL_EXPORT bool Initialise(::Smp::ISimulator *simulator,
                           ::Smp::Publication::ITypeRegistry *typeRegistry) {
  return Initialise_xsmp_example_project1(simulator, typeRegistry);
}
}

// -----------------------------------------------------------------------------
// ---------------------------- Finalise Function ------------------------------
// -----------------------------------------------------------------------------

extern "C" {
/// Global Finalise function of Package xsmp_example_project1.
/// @param simulator Simulator.
/// @return True if finalisation was successful, false otherwise.
DLL_EXPORT bool Finalise(::Smp::ISimulator *) {
  return Finalise_xsmp_example_project1();
}
}
