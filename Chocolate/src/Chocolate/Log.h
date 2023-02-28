#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Chocolate {

	class CHOCOLATE_API Log
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
// Core Log macros

#define CH_CORE_TRACE(...)::Chocolate::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CH_CORE_INFO(...)::Chocolate::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CH_CORE_WARN(...)::Chocolate::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CH_CORE_ERROR(...)::Chocolate::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CH_CORE_FATAL(...)::Chocolate::Log::GetCoreLogger()->fatal(__VA_ARGS__)


// Client Log macros

#define CH_TRACE(...)::Chocolate::Log::GetClientLogger()->trace(__VA_ARGS__)
#define CH_INFO(...)::Chocolate::Log::GetClientLogger()->info(__VA_ARGS__)
#define CH_WARN(...)::Chocolate::Log::GetClientLogger()->warn(__VA_ARGS__)
#define CH_ERROR(...)::Chocolate::Log::GetClientLogger()->error(__VA_ARGS__)
#define CH_FATAL(...)::Chocolate::Log::GetClientLogger()->fatal(__VA_ARGS__)