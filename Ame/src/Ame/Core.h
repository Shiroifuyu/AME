#pragma once

#ifdef AME_PLATFORM_WINDOWS
	#ifdef AME_BUILD_DLL
		#define AME_API __declspec(dllexport)
	#else
		#define AME_API __declspec(dllimport)
	#endif // AME_BUILD_DLL
#else
	#error Ame only supports Windows!
#endif // AME_PLATFORM_WINDOWS
