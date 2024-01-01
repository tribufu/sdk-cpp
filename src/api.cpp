// Copyright (c) Tribufu. All Rights Reserved.

#include <tribufu/api.h>

namespace tribufu
{
    TribufuApi::TribufuApi()
    {
    }

    TribufuApi::TribufuApi(std::string api_key)
    {
        this->options.api_key = api_key;
    }

    TribufuApi::TribufuApi(TribufuApiOptions options)
    {
        this->options = options;
    }

    TribufuApi::~TribufuApi()
    {
    }

    TribufuApi TribufuApi::from_env()
    {
        return TribufuApi::from_env("");
    }

    TribufuApi TribufuApi::from_env(std::string prefix)
    {
        std::string env_prefix = "";

        if (prefix != "")
        {
            env_prefix = prefix + "_";
        }

        size_t required_size;
        char api_key[64];

        auto response = getenv_s(&required_size, api_key, sizeof(api_key), (env_prefix + "API_KEY").c_str());

        if (response == 0 && required_size > 0)
        {
            return TribufuApi(api_key);
        }

        return TribufuApi();
    }
}
