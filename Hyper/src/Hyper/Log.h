#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace Hyper
{

	class HYPER_API Log
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
#define HY_CORE_ERROR(...)	::Hyper::Log::GetCoreLogger()->error(__VA_ARGS__)
#define HY_CORE_WARN(...)	::Hyper::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define HY_CORE_INFO(...)	::Hyper::Log::GetCoreLogger()->info(__VA_ARGS__)
#define HY_CORE_TRACE(...)	::Hyper::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define HY_CORE_FATAL(...)	::Hyper::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define HY_ERROR(...)	::Hyper::Log::GetClientLogger()->error(__VA_ARGS__)
#define HY_WARN(...)	::Hyper::Log::GetClientLogger()->warn(__VA_ARGS__)
#define HY_INFO(...)	::Hyper::Log::GetClientLogger()->info(__VA_ARGS__)
#define HY_TRACE(...)	::Hyper::Log::GetClientLogger()->trace(__VA_ARGS__)
#define HY_FATAL(...)	::Hyper::Log::GetClientLogger()->fatal(__VA_ARGS__)