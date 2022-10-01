#pragma once

#ifdef HY_PLATFORM_WINDOWS
	#ifdef HY_BUILD_DLL
		#define HYPER_API __declspec(dllexport)
	#else
		#define HYPER_API __declspec(dllimport)
	#endif
#else
	#error Hyper Only Supports Windows!
#endif