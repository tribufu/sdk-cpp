#!/usr/bin/env sh

cbindgen --config ./config/cbindgen.toml --crate tribufu-native --output ./include/tribufu/native.h
