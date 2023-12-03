// Copyright (c) Tribufu. All Rights Reserved.

#pragma once

#include <tribufu/base.h>

const char *VERSION = "0.0.4";

namespace tribufu
{
    class TRIBUFU_API TribufuClient
    {
    private:
        uint64_t id;
        std::string secret;

    public:
        TribufuClient(uint64_t id, const std::string &secret);
        ~TribufuClient();

        uint64_t get_id() const
        {
            return this->id;
        }
    };
}
