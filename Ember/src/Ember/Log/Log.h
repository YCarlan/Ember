#ifndef EMBER_LOG_H
#define EMBER_LOG_H
#include "spdlog/spdlog.h"

namespace Ember {

    class Log {
    public:
        static void Init();

        inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
        inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

    private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger;
    };

}

// Define logging macros
#define EMBER_CORE_TRACE(...) Ember::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define EMBER_CORE_INFO(...) Ember::Log::GetCoreLogger()->info(__VA_ARGS__)
#define EMBER_CORE_WARN(...) Ember::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define EMBER_CORE_ERROR(...) Ember::Log::GetCoreLogger()->error(__VA_ARGS__)

#define EMBER_CLIENT_TRACE(...) Ember::Log::GetClientLogger()->trace(__VA_ARGS__)
#define EMBER_CLIENT_INFO(...) Ember::Log::GetClientLogger()->info(__VA_ARGS__)
#define EMBER_CLIENT_WARN(...) Ember::Log::GetClientLogger()->warn(__VA_ARGS__)
#define EMBER_CLIENT_ERROR(...) Ember::Log::GetClientLogger()->error(__VA_ARGS__)
#endif //EMBER_LOG_H