// Copyright (c) Tribufu. All Rights Reserved.

#pragma once

#include <tribufu/sdk.h>

namespace tribufu
{
    class TRIBUFU_API TribufuSdk
    {
    public:
        static bool Initialize();
        static void Shutdown();
        static bool Ping();
        static void PingAsync(void *client_date, TribufuSdkPingCallback callback);

    private:
        static void PingCallbackHandler(void *client_data, bool result);
    };
}
