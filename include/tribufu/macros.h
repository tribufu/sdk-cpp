// Copyright (c) Tribufu. All Rights Reserved.

#pragma once

#ifdef __cplusplus
#define TRIBUFU_CPP
#endif

#ifdef TRIBUFU_LIBRARY
#define TRIBUFU_API DLLEXPORT
#else
#define TRIBUFU_API DLLIMPORT
#endif

// Macros Utils

#define TRIBUFU_EXPAND_MACRO(x) x
#define TRIBUFU_STRINGIFY_MACRO(x) #x
