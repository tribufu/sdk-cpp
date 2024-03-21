#!/usr/bin/env sh

if [ "$(expr substr $(uname -s) 1 5)" = "Linux" ]
then
    ./vendor/MintakaCpp/vendor/premake-core/linux/premake5 gmake2

elif [ "$(uname)" = "Darwin" ]
then
    ./vendor/MintakaCpp/vendor/premake-core/mac/premake5 xcode4
fi
