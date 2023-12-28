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
// File Name    : xsmp_tests.h
// Generated by : XsmpSdkGenerator-${qualifiedVersion}
// -----------------------------------------------------------------------------
/// @file xsmp_tests.h
// This file is auto-generated, Do not edit otherwise your changes will be lost

#ifndef XSMP_TESTS_H_
#define XSMP_TESTS_H_

// ----------------------------------------------------------------------------
// ---------------------------- Include Header Files --------------------
// ----------------------------------------------------------------------------

#include <Smp/ISimulator.h>

// ----------------------------------------------------------------------------
// ------------------------ Types and Interfaces ------------------------
// ----------------------------------------------------------------------------

// Entry points for static library
extern "C" {
/// Initialise Package xsmp_tests.
/// @param simulator Simulator for registration of factories.
/// @param typeRegistry Type Registry for registration of types.
/// @return True if initialisation was successful, false otherwise.
bool Initialise_xsmp_tests(::Smp::ISimulator *simulator,
        ::Smp::Publication::ITypeRegistry *typeRegistry);

/// Finalise Package xsmp_tests.
/// @param simulator Optional Simulator.
/// @return True if finalisation was successful, false otherwise.
bool Finalise_xsmp_tests(::Smp::ISimulator *simulator = nullptr);
}

#endif // XSMP_TESTS_H_
