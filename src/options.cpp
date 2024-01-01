// Copyright (c) Tribufu. All Rights Reserved.

#include <tribufu/options.h>

namespace tribufu
{
    TribufuApiOptions::TribufuApiOptions() : TribufuApiOptions(nullptr, nullptr, nullptr, 0.0f)
    {
    }

    TribufuApiOptions::TribufuApiOptions(std::string api_key) : TribufuApiOptions(api_key, nullptr, nullptr, 0.0f)
    {
    }

    TribufuApiOptions::TribufuApiOptions(std::string access_token, std::string refresh_token, float expires_in) : TribufuApiOptions(nullptr, access_token, refresh_token, expires_in)
    {
    }

    TribufuApiOptions::TribufuApiOptions(std::string api_key, std::string access_token, std::string refresh_token, float expires_in)
    {
        this->api_key = api_key;
        this->access_token = access_token;
        this->refresh_token = refresh_token;
        this->expires_in = expires_in;
    }

    TribufuApiOptions::~TribufuApiOptions()
    {
    }
}
