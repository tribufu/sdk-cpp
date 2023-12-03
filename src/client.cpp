// Copyright (c) Tribufu. All Rights Reserved.

#include <tribufu/client.h>

namespace tribufu
{
    TribufuClient::TribufuClient(uint64_t id, const std::string &secret)
    {
        this->id = id;
        this->secret = secret;
        this->http = hv::HttpClient();
    }

    TribufuClient::~TribufuClient()
    {
    }

    void TribufuClient::get_token()
    {
        try
        {
            const char *base_url = "http://localhost:5000";

            HttpRequest req;
            req.SetMethod("POST");
            req.SetUrl(base_url);

            HttpResponse resp;

            int ret = this->http.send(&req, &resp);

            if (ret != 0)
            {
                std::cout << "request_failed" << std::endl;
            }
            else
            {
                std::cout << "request_success" << std::endl;
            }
        }
        catch (std::exception &e)
        {
            std::cout << "exception" << e.what() << std::endl;
        }
    }
}
