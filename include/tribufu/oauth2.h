// Copyright (c) Tribufu. All Rights Reserved.

#pragma once

#include <tribufu/prelude.h>

namespace tribufu
{
    enum class TRIBUFU_API OAuth2ResponseType
    {
        Code,
        Token,
    };

    enum class TRIBUFU_API OAuth2ClientType
    {
        Confidential,
        Public,
    };

    enum class TRIBUFU_API OAuth2TokenHintType
    {
        AccessToken,
        RefreshToken,
    };

    enum class TRIBUFU_API OAuth2GrantType
    {
        AuthorizationCode,
        ClientCredentials,
        DeviceCode,
        Password,
        RefreshToken,
    };

    enum class TRIBUFU_API OAuth2AuthorizeError
    {
        AccessDenied,
        InvalidRequest,
        InvalidScope,
        ServerError,
        TemporarilyUnavailable,
        UnauthorizedClient,
        UnsupportedResponseType,
    };

    enum class TRIBUFU_API OAuth2TokenType
    {
        Bearer,
    };

    class TRIBUFU_API OAuth2AuthorizeRequest
    {
    private:
        OAuth2ResponseType response_type;
        uint64_t client_id;
        std::string client_secret;
        std::string redirect_uri;
        std::string scope;
        std::string state;

    public:
        OAuth2AuthorizeRequest();
        OAuth2AuthorizeRequest(OAuth2ResponseType response_type, uint64_t client_id, const std::string &client_secret, const std::string &redirect_uri, const std::string &scope, const std::string &state);
        ~OAuth2AuthorizeRequest();
    };

    class TRIBUFU_API OAuth2CodeResponse
    {
    private:
        std::string code;
        std::string state;

    public:
        OAuth2CodeResponse();
        OAuth2CodeResponse(const std::string &code, const std::string &state);
        ~OAuth2CodeResponse();
    };

    class TRIBUFU_API OAuth2ErrorResponse
    {
    private:
        OAuth2AuthorizeError error;
        std::string error_description;
        std::string error_uri;
        std::string state;

    public:
        OAuth2ErrorResponse();
        OAuth2ErrorResponse(OAuth2AuthorizeError error, const std::string &error_description, const std::string &error_uri, const std::string &state);
        ~OAuth2ErrorResponse();
    };

    class TRIBUFU_API OAuth2TokenRequest
    {
    private:
        OAuth2GrantType grant_type;
        uint64_t client_id;
        std::string client_secret;
        std::string redirect_uri;
        std::string code;
        std::string refresh_token;
        std::string username;
        std::string password;

    public:
        OAuth2TokenRequest();
        OAuth2TokenRequest(OAuth2GrantType grant_type, uint64_t client_id, const std::string &client_secret, const std::string &redirect_uri, const std::string &code, const std::string &refresh_token, const std::string &username, const std::string &password);
        ~OAuth2TokenRequest();
    };

    class TRIBUFU_API OAuth2TokenResponse
    {
    private:
        OAuth2TokenType token_type;
        std::string access_token;
        std::string refresh_token;
        std::string scope;
        std::string state;
        uint64_t expires_in;

    public:
        OAuth2TokenResponse();
        OAuth2TokenResponse(OAuth2TokenType token_type, const std::string &access_token, const std::string &refresh_token, const std::string &scope, const std::string &state, uint64_t expires_in);
        ~OAuth2TokenResponse();
    };
}
