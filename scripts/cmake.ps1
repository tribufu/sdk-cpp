#!/usr/bin/env sh

# cmake -G "Visual Studio 17 2022" -A x64

# cmake -B build -S . -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++

cmake -G "Unix Makefiles"
