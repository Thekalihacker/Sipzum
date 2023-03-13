#pragma once


#ifdef SZ_PLATFORM_WINDOWS
	#ifdef SZ_BUILD_DLL
		#define SIPZUM_API __declspec(dllexport)

	#else
		#define SIPZUM_API __declspec(dllimport)

	#endif // SZ_BUILD_DLL
#else
	#error Sipzum only supports Windows!
#endif // SZ_PLATFORM_WINDOWS
