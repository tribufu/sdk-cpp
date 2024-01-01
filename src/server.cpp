// Copyright (c) Tribufu. All Rights Reserved.

#include <tribufu/server.h>

namespace tribufu
{
    TribufuServer::TribufuServer(uint64_t server_id, uint64_t client_id, const std::string &client_secret) : TribufuClient(client_id, client_secret)
    {
        this->server_id = server_id;
    }

    TribufuServer::~TribufuServer()
    {
    }

    uint64_t &TribufuServer::get_server_id()
    {
        return this->server_id;
    }
}
