// Copyright (c) Tribufu. All Rights Reserved.

#include <tribufu/servers/server.h>

namespace tribufu
{
    Server::Server()
    {
    }

    Server::Server(json data)
    {
        this->id = data["id"];
        this->name = data["name"];
        this->description = data["description"];
        this->address = data["address"];
        this->game_port = data["game_port"];
        this->query_port = data["query_port"];
        this->package_id = data["package_id"];
    }

    Server::~Server()
    {
    }

    json Server::to_json()
    {
        json data;
        data["id"] = this->id;
        data["name"] = this->name;
        data["description"] = this->description;
        data["address"] = this->address;
        data["game_port"] = this->game_port;
        data["query_port"] = this->query_port;
        data["package_id"] = this->package_id;
        return data;
    }
}
