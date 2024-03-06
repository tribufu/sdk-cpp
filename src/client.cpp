// Copyright (c) Tribufu. All Rights Reserved.

#include <tribufu/client.h>

namespace tribufu
{
    TribufuClient::TribufuClient(uint64_t client_id, const std::string &client_secret) : TribufuApi()
    {
        this->client_id = client_id;
        this->client_secret = client_secret;
    }

    TribufuClient::~TribufuClient()
    {
    }

    uint64_t &TribufuClient::get_client_id()
    {
        return this->client_id;
    }

    /*
    void TribufuClient::get_token()
    {
        try
        {
            std::string url = "https://api.tribufu.com/v1/servers";
            FHttpResponse response = this->http.get(url);
            std::cout << "status_code: " << response.status_code << std::endl;

            if (response.body != nullptr)
            {
                json response_body = json::parse(response.body);
                std::string json_str = response_body.dump(4);
                std::cout << json_str << std::endl;
            }

            mintaka_http_free_response(response);
        }
        catch (std::exception &e)
        {
            std::cout << "exception: " << e.what() << std::endl;
        }
    }
    */
}
