// Copyright (c) Tribufu. All Rights Reserved.

#pragma once

#ifdef _WIN32
#include <tribufu/windows/windows_platform.h>
#endif

#ifdef __MACH__
#include <tribufu/mac/mac_platform.h>
#endif

#ifdef __linux__
#include <tribufu/linux/linux_platform.h>
#endif

#ifdef __FreeBSD__
#include <tribufu/freebsd/freebsd_platform.h>
#endif

#ifdef __ANDROID__
#include <tribufu/android/android_platform.h>
#endif

#ifdef __APPLE__
// #include <TargetConditionals.h>
#ifdef TARGET_OS_IPHONE
#include <tribufu/ios/ios_platform.h>
#endif
#endif
