// Copyright (c) Tribufu. All Rights Reserved.

#include <tribufu/users/profile.h>

namespace tribufu
{
    Profile::Profile()
    {
    }

    Profile::Profile(json data)
    {
        this->id = data["id"];
        this->uuid = data["uuid"];
        this->name = data["name"];
        this->display_name = data["display_name"];
        this->type = data["type"];
        this->public_flags = data["public_flags"];
        this->verified = data["verified"];
        this->level = data["level"];
        this->experience = data["experience"];
        this->public_birthday = data["public_birthday"];
        this->points = data["points"];
        this->location = data["location"];
        this->photo_url = data["photo_url"];
        this->banner_url = data["banner_url"];
        this->last_online = data["last_online"];
        this->biography = data["biography"];
        this->view_count = data["view_count"];
        this->created = data["created"];
        this->updated = data["updated"];
    }

    Profile::~Profile()
    {
    }

    json Profile::to_json()
    {
        json data;
        data["id"] = this->id;
        data["uuid"] = this->uuid;
        data["name"] = this->name;
        data["display_name"] = this->display_name;
        data["type"] = this->type;
        data["public_flags"] = this->public_flags;
        data["verified"] = this->verified;
        data["level"] = this->level;
        data["experience"] = this->experience;
        data["public_birthday"] = this->public_birthday;
        data["points"] = this->points;
        data["location"] = this->location;
        data["photo_url"] = this->photo_url;
        data["banner_url"] = this->banner_url;
        data["last_online"] = this->last_online;
        data["biography"] = this->biography;
        data["view_count"] = this->view_count;
        data["created"] = this->created;
        data["updated"] = this->updated;
        return data;
    }
}
