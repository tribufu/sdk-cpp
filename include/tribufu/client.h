// Copyright (c) Tribufu. All Rights Reserved.

#pragma once

#include <tribufu/pch.h>

#include <cpp-httplib/httplib.h>

const char *VERSION = "0.0.4";

class TribufuClient
{
private:
    uint64_t id;
    std::string secret;
    // httplib::Client http;

public:
    TribufuClient(uint64_t id, const std::string &secret) //: http("https://api.tribufu.com")
    {
        this->id = id;
        this->secret = secret;

        /*
        this->http.set_default_headers({{"User-Agent", "Tribufu/" + std::string(VERSION) + " (+https://api.tribufu.com; C++)"},
                                        {"X-Tribufu-Language", "cpp"},
                                        {"X-Tribufu-Version", VERSION}});
        */
    }

    uint64_t get_id() const
    {
        return this->id;
    }
};
