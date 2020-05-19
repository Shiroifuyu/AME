#pragma once

#ifdef AME_PLATFORM_WINDOWS
	#ifdef AME_BUILD_DLL
		#define AME_API __declspec(dllexport)
	#else
		#define AME_API __declspec(dllimport)
	#endif
#else
	#error Ame only supports Windows!
#endif

#ifdef AME_ENABLE_ASSERTS
	#define AME_ASSERT(x, ...) { if(!(x)) {AME_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define AME_CORE_ASSERT(x, ...) { if(!(x)) {AME_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define AME_ASSERT(x, ...)
	#define AME_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)