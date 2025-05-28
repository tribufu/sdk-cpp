--- @diagnostic disable: undefined-global

project "tribufu"
    location "."
    language "C++"

    cppdialect "C++20"

    targetdir("../bin/%{cfg.platform}")
    objdir("../target/%{cfg.buildcfg}/%{cfg.platform}/%{prj.name}}")

    files
    {
        "./**.cpp",
        "./**.h",
        "../include/**.h",
    }

    vpaths
    {
        ["Sources"] = { "./**.cpp" },
        ["Headers"] = { "./**.h", "../include/**.h" },
    }

    includedirs
    {
        "../include",
        "../vendor/*/include",
    }

    libdirs
    {
        "../bin/%{cfg.platform}",
        "../vendor/*/lib/%{cfg.platform}",
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

    filter { "platforms:win-*" }
        kind "SharedLib"
        system "windows"
        systemversion "latest"
        staticruntime "On"

        toolset "msc"

        defines
        {
            "TRIBUFU_DESKTOP",
            "TRIBUFU_DYNAMIC",
            "TRIBUFU_LIBRARY",
            "TRIBUFU_WINDOWS",
        }

        links
        {
            "bcrypt",
            "cpprest_2_10.lib",
        }

        prelinkcommands
        {
        }

        postbuildcommands
        {
        }

    filter { "platforms:osx-*" }
        kind "SharedLib"
        system "macosx"
        systemversion "10.15"

        toolset "clang"

        defines
        {
            "TRIBUFU_APPLE",
            "TRIBUFU_DESKTOP",
            "TRIBUFU_DYNAMIC",
            "TRIBUFU_LIBRARY",
            "TRIBUFU_MAC",
        }

        links
        {
            "crypto",
        }

        prelinkcommands
        {
        }

        postbuildcommands
        {
        }

    filter { "platforms:linux-*" }
        kind "SharedLib"
        system "linux"

        toolset "gcc"

        defines
        {
            "TRIBUFU_DESKTOP",
            "TRIBUFU_DYNAMIC",
            "TRIBUFU_LIBRARY",
            "TRIBUFU_LINUX",
            "TRIBUFU_UNIX",
        }

        links
        {
            "crypto",
        }

        prelinkcommands
        {
        }

        postbuildcommands
        {
        }

    filter { "platforms:android-*" }
        kind "SharedLib"
        system "android"

        toolset "clang"

        defines
        {
            "TRIBUFU_ANDROID",
            "TRIBUFU_DYNAMIC",
            "TRIBUFU_LIBRARY",
            "TRIBUFU_MOBILE",
            "TRIBUFU_UNIX",
        }

        links
        {
        }

        prelinkcommands
        {
        }

        postbuildcommands
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

        prelinkcommands
        {
        }

        postbuildcommands
        {
        }

    -- Architecture

    filter { "platforms:*-x86" }
        architecture "x32"

        defines
        {
            "TRIBUFU_32BITS",
            "TRIBUFU_X86",
        }

    filter { "platforms:*-x64" }
        architecture "x64"

        defines
        {
            "TRIBUFU_64BITS",
            "TRIBUFU_X64",
        }

    filter { "platforms:*-arm64" }
        architecture "ARM64"

        defines
        {
            "TRIBUFU_64BITS",
            "TRIBUFU_ARM64",
        }
