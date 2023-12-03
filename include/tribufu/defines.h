// Copyright (c) Tribufu. All Rights Reserved.

#pragma once

#ifndef EXTERN_C
#ifdef __cplusplus
#define EXTERN_C extern "C"
#define TRIBUFU_CPP
#else
#define EXTERN_C
#endif
#endif

// Declare Enum

#ifdef __cplusplus

#define TRIBUFU_ENUM_START(name) enum class name {
#define TRIBUFU_ENUM_END(name) }

#else

#define TRIBUFU_ENUM_START(name) typedef enum name {
#define TRIBUFU_ENUM_END } name

#endif

#define TRIBUFU_DECLARE_ENUM(name, ...) TRIBUFU_ENUM_START(name) __VA_ARGS__ TRIBUFU_ENUM_END

// Declare Struct

#define TRIBUFU_PASTE(...) __VA_ARGS__

#define TRIBUFU_DECLARE_STRUCT(name, body) \
    EXTERN_C typedef struct name           \
    {                                      \
        TRIBUFU_PASTE body                 \
    } name

// Experimental

#define TRIBUFU_CLASS(...)
#define TRIBUFU_STRUCT(...)
#define TRIBUFU_ENUM(...)
#define TRIBUFU_FUNCTION(...)
#define TRIBUFU_PROPERTY(...)

// Import/Export API

#define NATIVE_API EXTERN_C

#ifdef TRIBUFU_LIBRARY
#define TRIBUFU_API DLLEXPORT
#else
#define TRIBUFU_API DLLIMPORT
#endif

// Macros Utils

#define TRIBUFU_EXPAND_MACRO(x) x
#define TRIBUFU_STRINGIFY_MACRO(x) #x
