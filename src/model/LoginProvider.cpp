/**
 * Tribufu API
 * REST API to access Tribufu services.
 *
 * The version of the OpenAPI document: 1.1.0
 * Contact: contact@tribufu.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.12.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "tribufu++/model/LoginProvider.h"

namespace tribufu
{
    namespace models
    {

        namespace
        {
            using EnumUnderlyingType = utility::string_t;

            LoginProvider::eLoginProvider toEnum(const EnumUnderlyingType &val)
            {
                if (val == utility::conversions::to_string_t(U("steam")))
                    return LoginProvider::eLoginProvider::LoginProvider_STEAM;
                if (val == utility::conversions::to_string_t(U("epic")))
                    return LoginProvider::eLoginProvider::LoginProvider_EPIC;
                if (val == utility::conversions::to_string_t(U("discord")))
                    return LoginProvider::eLoginProvider::LoginProvider_DISCORD;
                if (val == utility::conversions::to_string_t(U("microsoft")))
                    return LoginProvider::eLoginProvider::LoginProvider_MICROSOFT;
                if (val == utility::conversions::to_string_t(U("playstation")))
                    return LoginProvider::eLoginProvider::LoginProvider_PLAYSTATION;
                if (val == utility::conversions::to_string_t(U("google")))
                    return LoginProvider::eLoginProvider::LoginProvider_GOOGLE;
                if (val == utility::conversions::to_string_t(U("apple")))
                    return LoginProvider::eLoginProvider::LoginProvider_APPLE;
                return {};
            }

            EnumUnderlyingType fromEnum(LoginProvider::eLoginProvider e)
            {
                switch (e)
                {
                case LoginProvider::eLoginProvider::LoginProvider_STEAM:
                    return U("steam");
                case LoginProvider::eLoginProvider::LoginProvider_EPIC:
                    return U("epic");
                case LoginProvider::eLoginProvider::LoginProvider_DISCORD:
                    return U("discord");
                case LoginProvider::eLoginProvider::LoginProvider_MICROSOFT:
                    return U("microsoft");
                case LoginProvider::eLoginProvider::LoginProvider_PLAYSTATION:
                    return U("playstation");
                case LoginProvider::eLoginProvider::LoginProvider_GOOGLE:
                    return U("google");
                case LoginProvider::eLoginProvider::LoginProvider_APPLE:
                    return U("apple");
                default:
                    break;
                }
                return {};
            }
        }

        LoginProvider::LoginProvider()
        {
        }

        LoginProvider::~LoginProvider()
        {
        }

        void LoginProvider::validate()
        {
            // TODO: implement validation
        }

        web::json::value LoginProvider::toJson() const
        {
            auto val = fromEnum(m_value);
            return web::json::value(val);
        }

        bool LoginProvider::fromJson(const web::json::value &val)
        {
            m_value = toEnum(val.as_string());
            return true;
        }

        void LoginProvider::toMultipart(std::shared_ptr<MultipartFormData> multipart,
                                        const utility::string_t &prefix) const
        {
            utility::string_t namePrefix = prefix;
            if (!namePrefix.empty() && namePrefix.back() != U('.'))
            {
                namePrefix.push_back(U('.'));
            }

            auto e = fromEnum(m_value);
            multipart->add(ModelBase::toHttpContent(namePrefix, e));
        }

        bool LoginProvider::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t &prefix)
        {
            bool ok = true;
            utility::string_t namePrefix = prefix;
            if (!namePrefix.empty() && namePrefix.back() != U('.'))
            {
                namePrefix.push_back(U('.'));
            }
            {
                EnumUnderlyingType e;
                ok = ModelBase::fromHttpContent(multipart->getContent(namePrefix), e);
                if (ok)
                {
                    auto v = toEnum(e);
                    setValue(v);
                }
            }
            return ok;
        }

        LoginProvider::eLoginProvider LoginProvider::getValue() const
        {
            return m_value;
        }

        void LoginProvider::setValue(LoginProvider::eLoginProvider const value)
        {
            m_value = value;
        }

    }
}
