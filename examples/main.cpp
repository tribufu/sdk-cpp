// Copyright (c) Tribufu. All Rights Reserved.

#include <tribufu++/sdk.h>

using namespace tribufu;

int main(int argc, char **argv)
{
    if (TribufuSdk::Initialize())
    {
        std::cout << "Tribufu SDK initialized successfully!" << std::endl;
    }
    else
    {
        std::cout << "Failed to initialize Tribufu SDK!" << std::endl;
        return 1;
    }

    if (TribufuSdk::Ping())
    {
        std::cout << "Tribufu SDK is online!" << std::endl;
    }
    else
    {
        std::cout << "Tribufu SDK is offline!" << std::endl;
    }

    TribufuSdk::Shutdown();

    return 0;
}
