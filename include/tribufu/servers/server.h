// Copyright (c) Tribufu. All Rights Reserved.

#pragma once

#include <tribufu/prelude.h>

namespace tribufu
{
    class TRIBUFU_API Server
    {
    private:
        uint64_t id;
        std::string name;
        std::string description;
        std::string address;
        uint16_t game_port;
        uint16_t query_port;
        uint64_t package_id;

    public:
        Server();
        Server(json data);
        ~Server();

        json to_json();
    };
}
