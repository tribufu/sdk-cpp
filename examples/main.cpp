// Copyright (c) Tribufu. All Rights Reserved.

#include <iostream>

#include <tribufu/client.h>

using namespace tribufu;

int main(int argc, char **argv)
{
    auto client = new TribufuClient(0, "client_secret");
    std::cout << "client_id: " << client->get_id() << std::endl;

    json json_obj = {
        {"nome", "John"},
        {"idade", 25},
        {"cidade", "Exemplo"}};

    std::string json_str = json_obj.dump(4);

    std::cout << json_str << std::endl;

    client->get_token();

    return 0;
}
