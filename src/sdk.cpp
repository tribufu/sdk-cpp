// Copyright (c) Tribufu. All Rights Reserved.

#include <tribufu++/sdk.h>

namespace tribufu
{
    bool TribufuSdk::Initialize()
    {
        return tribufu_sdk_initialize(nullptr);
    }

    void TribufuSdk::Shutdown()
    {
        tribufu_sdk_shutdown();
    }

    bool TribufuSdk::Ping()
    {
        std::promise<bool> promise;
        std::future<bool> future = promise.get_future();
        PingAsync(static_cast<void *>(&promise), PingCallbackHandler);
        return future.get();
    }

    void TribufuSdk::PingCallbackHandler(void *client_data, bool result)
    {
        std::promise<bool> *promise = static_cast<std::promise<bool> *>(client_data);
        promise->set_value(result);
    }

    void TribufuSdk::PingAsync(void *client_data, TribufuSdkPingCallback callback)
    {
        tribufu_sdk_ping(client_data, callback);
    }
}
