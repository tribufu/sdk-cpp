// Copyright (c) Tribufu. All Rights Reserved.

#include <iostream>

#include <tribufu/client.h>

using namespace tribufu;

int main(int argc, char **argv)
{
    auto client = new TribufuClient(0, "client_secret");
    std::cout << "client_id: " << client->get_id() << std::endl;
    return 0;
}
