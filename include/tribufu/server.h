// Copyright (c) Tribufu. All Rights Reserved.

#pragma once

#include <tribufu/client.h>
#include <tribufu/prelude.h>

namespace tribufu
{
    class TRIBUFU_API TribufuServer : public TribufuClient
    {
    private:
        uint64_t server_id;

    public:
        TribufuServer(uint64_t server_id, uint64_t client_id, const std::string &client_secret);
        ~TribufuServer();
        uint64_t &get_server_id();
    };
}
