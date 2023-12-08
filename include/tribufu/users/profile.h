// Copyright (c) Tribufu. All Rights Reserved.

#pragma once

#include <tribufu/prelude.h>

namespace tribufu
{
    enum class UserType
    {
        User,
        Bot,
        Org,
    };

    class TRIBUFU_API Profile
    {
    private:
        uint64_t id;
        std::string uuid;
        std::string name;
        std::string display_name;
        UserType type;
        uint64_t public_flags;
        bool verified;
        uint32_t level;
        double experience;
        bool public_birthday;
        double points;
        std::string location;
        std::string photo_url;
        std::string banner_url;
        std::string last_online;
        std::string biography;
        uint32_t view_count;
        std::string created;
        std::string updated;

    public:
        Profile();
        Profile(json data);
        ~Profile();

        json to_json();
    };
}
