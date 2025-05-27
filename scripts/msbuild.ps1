#!/usr/bin/env pwsh

echo "Building for win-x64"
New-Item "bin/win-x64" -ItemType Directory -Force
Remove-Item -Path "bin/win-x64/*" -Force
msbuild /p:Configuration="debug" /p:Platform="win-x64"
