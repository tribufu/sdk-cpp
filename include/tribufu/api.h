// Copyright (c) Tribufu. All Rights Reserved.

#pragma once

#include <tribufu/prelude.h>
#include <tribufu/options.h>

namespace tribufu
{
    static const char *VERSION = "0.0.4";
    static const char *API_URL = "https://api.tribufu.com";

    class TRIBUFU_API TribufuApi
    {
    private:
        std::string base_url;
        TribufuApiOptions options;
        HttpClient http;

    public:
        TribufuApi();

        TribufuApi(std::string api_key);

        TribufuApi(TribufuApiOptions options);

        ~TribufuApi();

        static TribufuApi from_env();

        static TribufuApi from_env(std::string prefix);
    };
}
