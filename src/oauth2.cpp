// Copyright (c) Tribufu. All Rights Reserved.

#include <tribufu/oauth2.h>

namespace tribufu
{
    OAuth2AuthorizeRequest::OAuth2AuthorizeRequest()
    {
    }

    OAuth2AuthorizeRequest::OAuth2AuthorizeRequest(OAuth2ResponseType response_type, uint64_t client_id, const std::string &client_secret, const std::string &redirect_uri, const std::string &scope, const std::string &state)
    {
        this->response_type = response_type;
        this->client_id = client_id;
        this->client_secret = client_secret;
        this->redirect_uri = redirect_uri;
        this->scope = scope;
        this->state = state;
    }

    OAuth2AuthorizeRequest::~OAuth2AuthorizeRequest()
    {
    }

    OAuth2CodeResponse::OAuth2CodeResponse()
    {
    }

    OAuth2CodeResponse::OAuth2CodeResponse(const std::string &code, const std::string &state)
    {
        this->code = code;
        this->state = state;
    }

    OAuth2CodeResponse::~OAuth2CodeResponse()
    {
    }

    OAuth2ErrorResponse::OAuth2ErrorResponse()
    {
    }

    OAuth2ErrorResponse::OAuth2ErrorResponse(OAuth2AuthorizeError error, const std::string &error_description, const std::string &error_uri, const std::string &state)
    {
        this->error = error;
        this->error_description = error_description;
        this->error_uri = error_uri;
        this->state = state;
    }

    OAuth2ErrorResponse::~OAuth2ErrorResponse()
    {
    }

    OAuth2TokenRequest::OAuth2TokenRequest()
    {
    }

    OAuth2TokenRequest::OAuth2TokenRequest(OAuth2GrantType grant_type, uint64_t client_id, const std::string &client_secret, const std::string &redirect_uri, const std::string &code, const std::string &refresh_token, const std::string &username, const std::string &password)
    {
        this->grant_type = grant_type;
        this->client_id = client_id;
        this->client_secret = client_secret;
        this->redirect_uri = redirect_uri;
        this->code = code;
        this->refresh_token = refresh_token;
        this->username = username;
        this->password = password;
    }

    OAuth2TokenRequest::~OAuth2TokenRequest()
    {
    }

    OAuth2TokenResponse::OAuth2TokenResponse()
    {
    }

    OAuth2TokenResponse::OAuth2TokenResponse(OAuth2TokenType token_type, const std::string &access_token, const std::string &refresh_token, const std::string &scope, const std::string &state, uint64_t expires_in)
    {
        this->token_type = token_type;
        this->access_token = access_token;
        this->refresh_token = refresh_token;
        this->scope = scope;
        this->state = state;
        this->expires_in = expires_in;
    }

    OAuth2TokenResponse::~OAuth2TokenResponse()
    {
    }
}
