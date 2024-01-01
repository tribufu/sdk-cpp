// Copyright (c) Tribufu. All Rights Reserved.

#pragma once

#include <tribufu/prelude.h>

namespace tribufu
{
    class TRIBUFU_API TribufuApiOptions
    {
    public:
        std::string api_key;
        std::string access_token;
        std::string refresh_token;
        float expires_in;

    public:
        TribufuApiOptions();
        TribufuApiOptions(std::string api_key);
        TribufuApiOptions(std::string access_token, std::string refresh_token, float expires_in);
        TribufuApiOptions(std::string api_key, std::string access_token, std::string refresh_token, float expires_in);
        ~TribufuApiOptions();
    };
}
