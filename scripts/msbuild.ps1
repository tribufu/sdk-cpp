#!/usr/bin/env pwsh

echo "Building for windows-x86_64"
cargo build --package tribufu-native --target x86_64-pc-windows-msvc
New-Item "bin/windows/x86_64" -ItemType Directory -Force
Remove-Item -Path "bin/windows/x86_64/*" -Force
Copy-Item -Path "target/x86_64-pc-windows-msvc/debug/tribufu_native.lib" -Destination "bin/windows/x86_64" -Force
msbuild /p:Configuration="debug" /p:Platform="windows-x86_64"
