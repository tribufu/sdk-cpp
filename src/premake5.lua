--- @diagnostic disable: undefined-global

project "tribufu_sdk++"
    location "."
    language "C++"

    cppdialect "C++20"

    targetdir("../bin/%{cfg.platform:gsub('-', '/')}")
    objdir("../target/%{cfg.buildcfg}/obj/%{prj.name}/%{cfg.platform:gsub('-', '/')}")

    -- pchheader "tribufu/pch.h"
    -- pchsource "pch.cpp"

    files
    {
        "**.cpp",
        "**.h",
        "**.h",
        "../include/tribufu/**.h",
        "../include/tribufu/**.h",
    }

    vpaths
    {
        ["Sources"] = { "**.cpp" },
        ["Headers"] = { "**.h", "**.h", "../include/tribufu/**.h", "../include/tribufu/**.h"  },
    }

    includedirs
    {
        "../include",
        "../vendor",
    }

    libdirs
    {
        "../bin/%{cfg.platform:gsub('-', '/')}",
    }

    -- Profile

    filter { "configurations:debug" }
        runtime "Debug"
        symbols "On"

        defines
        {
            "DEBUG",
            "TRACE",
            "TRIBUFU_DEBUG",
            "TRIBUFU_TRACE",
        }

    filter { "configurations:release" }
        runtime "Release"
        optimize "On"

        defines
        {
            "RELEASE",
            "TRIBUFU_RELEASE",
        }

    -- Platform

    filter { "platforms:windows-*" }
        kind "StaticLib"
        system "windows"
        systemversion "latest"
        staticruntime "On"

        toolset "msc"

        defines
        {
            "TRIBUFU_WINDOWS",
            "TRIBUFU_DESKTOP",
            "TRIBUFU_DYNAMIC",
            "TRIBUFU_LIBRARY",
        }

        links
        {
        }

        prelinkcommands
        {
        }

    filter { "platforms:mac-*" }
        kind "StaticLib"
        system "macosx"
        systemversion "10.15"

        toolset "clang"

        defines
        {
            "TRIBUFU_MAC",
            "TRIBUFU_APPLE",
            "TRIBUFU_DESKTOP",
            "TRIBUFU_DYNAMIC",
            "TRIBUFU_LIBRARY",
        }

        links
        {
        }

        prelinkcommands
        {
        }

    filter { "platforms:linux-*" }
        kind "StaticLib"
        system "linux"

        toolset "gcc"

        defines
        {
            "TRIBUFU_LINUX",
            "TRIBUFU_UNIX",
            "TRIBUFU_DESKTOP",
            "TRIBUFU_DYNAMIC",
            "TRIBUFU_LIBRARY",
        }

        links
        {
        }

        prelinkcommands
        {
        }

    filter { "platforms:android-*" }
        kind "StaticLib"
        system "android"

        toolset "clang"

        defines
        {
            "TRIBUFU_ANDROID",
            "TRIBUFU_UNIX",
            "TRIBUFU_MOBILE",
            "TRIBUFU_DYNAMIC",
            "TRIBUFU_LIBRARY",
        }

        links
        {
        }

        prelinkcommands
        {
        }

    filter { "platforms:ios-*" }
        kind "StaticLib"
        system "ios"
        systemversion "13.0"

        toolset "clang"

        defines
        {
            "TRIBUFU_IOS",
            "TRIBUFU_APPLE",
            "TRIBUFU_MOBILE",
            "TRIBUFU_MONOLITHIC",
            "TRIBUFU_LIBRARY",
        }

        links
        {
        }

    -- Architecture

    filter { "platforms:*-i686" }
        architecture "x32"

        defines
        {
            "TRIBUFU_I686",
            "TRIBUFU_32BITS",
        }

    filter { "platforms:*-x86_64" }
        architecture "x64"

        defines
        {
            "TRIBUFU_X8664",
            "TRIBUFU_64BITS",
        }

    filter { "platforms:*-aarch64" }
        architecture "ARM64"

        defines
        {
            "TRIBUFU_AARCH64",
            "TRIBUFU_64BITS",
        }
