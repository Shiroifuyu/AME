#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Ame
{
	class AME_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core log macros
#define AME_CORE_TRACE(...)    ::Ame::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define AME_CORE_INFO(...)     ::Ame::Log::GetCoreLogger()->info(__VA_ARGS__)
#define AME_CORE_WARN(...)     ::Ame::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define AME_CORE_ERROR(...)    ::Ame::Log::GetCoreLogger()->error(__VA_ARGS__)
#define AME_CORE_FATAL(...)    ::Ame::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define AME_TRACE(...)         ::Ame::Log::GetClientLogger()->trace(__VA_ARGS__)
#define AME_INFO(...)          ::Ame::Log::GetClientLogger()->info(__VA_ARGS__)
#define AME__WARN(...)         ::Ame::Log::GetClientLogger()->warn(__VA_ARGS__)
#define AME_ERROR(...)         ::Ame::Log::GetClientLogger()->error(__VA_ARGS__)
#define AME_FATAL(...)         ::Ame::Log::GetClientLogger()->fatal(__VA_ARGS__)