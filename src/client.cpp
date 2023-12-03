// Copyright (c) Tribufu. All Rights Reserved.

#include <tribufu/client.h>

namespace tribufu
{
    TribufuClient::TribufuClient(uint64_t id, const std::string &secret)
    {
        this->id = id;
        this->secret = secret;
    }

    TribufuClient::~TribufuClient()
    {
    }
}
