--- @diagnostic disable: undefined-global

project "example"
    location "."
    kind "ConsoleApp"
    language "C++"

    cppdialect "C++20"

    targetdir("../bin/%{cfg.platform:gsub('-', '/')}")
    objdir("../target/%{cfg.buildcfg}/obj/%{prj.name}/%{cfg.platform:gsub('-', '/')}")

    files
    {
        "**.cpp",
        "**.h",
        "**.h",
    }

    includedirs
    {
        "../include",
        "../vendor/*/include",
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
            "TRIBUFU_DEVEL",
            "DEBUG",
            "TRACE",
        }

    filter { "configurations:release" }
        runtime "Release"
        optimize "On"

        defines
        {
            "TRIBUFU_RETAIL",
            "RELEASE",
        }

    -- Platform

    filter { "platforms:windows-*" }
        system "windows"
        systemversion "latest"
        staticruntime "On"

        toolset "msc"

        defines
        {
            "TRIBUFU_DESKTOP",
            "TRIBUFU_WINDOWS",
        }

        links
        {
            "tribufu_cpp",
        }

        prelinkcommands
        {
        }

        postbuildcommands
        {
        }

    filter { "platforms:mac-*" }
        system "macosx"
        systemversion "10.15"

        toolset "clang"

        defines
        {
            "TRIBUFU_APPLE",
            "TRIBUFU_DESKTOP",
            "TRIBUFU_MAC",
        }

        links
        {
            "tribufu_cpp",
        }

        prelinkcommands
        {
        }

        postbuildcommands
        {
        }

    filter { "platforms:linux-*" }
        system "linux"

        toolset "gcc"

        defines
        {
            "TRIBUFU_DESKTOP",
            "TRIBUFU_LINUX",
            "TRIBUFU_UNIX",
        }

        links
        {
            "tribufu_cpp",
        }

        prelinkcommands
        {
        }

        postbuildcommands
        {
        }

    filter { "platforms:android-*" }
        system "android"

        toolset "clang"

        defines
        {
            "TRIBUFU_ANDROID",
            "TRIBUFU_MOBILE",
            "TRIBUFU_UNIX",
        }

        links
        {
            "tribufu_cpp",
        }

        prelinkcommands
        {
        }

        postbuildcommands
        {
        }

    filter { "platforms:ios-*" }
        system "ios"
        systemversion "13.0"

        toolset "clang"

        defines
        {
            "TRIBUFU_APPLE",
            "TRIBUFU_IOS",
            "TRIBUFU_MOBILE",
        }

        links
        {
            "tribufu_cpp",
        }

    -- Architecture

    filter { "platforms:*-i686" }
        architecture "x32"

        defines
        {
            "TRIBUFU_32BITS",
            "TRIBUFU_I686",
        }

    filter { "platforms:*-x86_64" }
        architecture "x64"

        defines
        {
            "TRIBUFU_64BITS",
            "TRIBUFU_X8664",
        }

    filter { "platforms:*-aarch64" }
        architecture "ARM64"

        defines
        {
            "TRIBUFU_64BITS",
            "TRIBUFU_AARCH64",
        }
