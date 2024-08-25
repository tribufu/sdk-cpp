#!/usr/bin/env pwsh

echo "Building for windows-x86_64"
New-Item "bin/windows-x86_64" -ItemType Directory -Force
Remove-Item -Path "bin/windows-x86_64/*" -Force
msbuild /p:Configuration="debug" /p:Platform="windows-x86_64"
