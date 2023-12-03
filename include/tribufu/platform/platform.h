// Copyright (c) Tribufu. All Rights Reserved.

#pragma once

#ifdef _WIN32
#include <tribufu/platform/windows.h>
#endif

#ifdef __MACH__
#include <tribufu/platform/mac.h>
#endif

#ifdef __linux__
#include <tribufu/platform/linux.h>
#endif

#ifdef __FreeBSD__
#include <tribufu/platform/freebsd.h>
#endif

#ifdef __ANDROID__
#include <tribufu/platform/android.h>
#endif

#ifdef __APPLE__
// #include <TargetConditionals.h>
#ifdef TARGET_OS_IPHONE
#include <tribufu/platform/ios.h>
#endif
#endif
