/*****************************************************************************

  Licensed to Accellera Systems Initiative Inc. (Accellera) under one or
  more contributor license agreements.  See the NOTICE file distributed
  with this work for additional information regarding copyright ownership.
  Accellera licenses this file to you under the Apache License, Version 2.0
  (the "License"); you may not use this file except in compliance with the
  License.  You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
  implied.  See the License for the specific language governing
  permissions and limitations under the License.

 *****************************************************************************/

/*****************************************************************************

  cci_dll.h -- DLL export/import definitions for SystemC CCI

  Original Author: SystemC CCI Working Group

 *****************************************************************************/

#ifndef CCI_CORE_CCI_DLL_H_INCLUDED_
#define CCI_CORE_CCI_DLL_H_INCLUDED_

// DLL export/import macros for Windows
#if defined(CCI_DLL) && defined(_WIN32)
#if defined(CCI_DLL_EXPORTS)
// Building the CCI DLL - export symbols
#define CCI_API __declspec(dllexport)
#else
// Using the CCI DLL - import symbols
#define CCI_API __declspec(dllimport)
#endif
#else
// Static library or non-Windows platform
#define CCI_API
#endif

// Template instantiation export for Windows DLL
#if defined(CCI_DLL) && defined(_WIN32) && defined(CCI_DLL_EXPORTS)
#define CCI_TEMPLATE_EXPORT __declspec(dllexport)
#else
#define CCI_TEMPLATE_EXPORT
#endif

#endif // CCI_CORE_CCI_DLL_H_INCLUDED_
