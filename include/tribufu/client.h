// Copyright (c) Tribufu. All Rights Reserved.

#pragma once

#include <tribufu/pch.h>

const char *VERSION = "0.0.4";

class TribufuClient
{
private:
    uint64_t id;
    std::string secret;

public:
    TribufuClient(uint64_t id, const std::string &secret)
    {
        this->id = id;
        this->secret = secret;
    }

    uint64_t get_id() const
    {
        return this->id;
    }
};
