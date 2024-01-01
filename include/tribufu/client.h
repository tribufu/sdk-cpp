// Copyright (c) Tribufu. All Rights Reserved.

#pragma once

#include <tribufu/prelude.h>
#include <tribufu/api.h>

namespace tribufu
{
    class TRIBUFU_API TribufuClient : public TribufuApi
    {
    private:
        uint64_t client_id;
        std::string client_secret;

    public:
        TribufuClient(uint64_t id, const std::string &secret);

        ~TribufuClient();

        uint64_t &get_client_id();
    };
}
