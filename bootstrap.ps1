#!/usr/bin/env pwsh

$env:VCPKG_ROOT = "D:\Program Files\vcpkg"
$env:PATH = "$env:VCPKG_ROOT;$env:PATH"

git submodule update --init --recursive

if ($IsWindows)
{
}
elseif ($IsMacOS)
{
}
elseif ($IsLinux)
{
}
