#pragma once

#ifdef CH_PLATFORM_WINDOWS
	#ifdef CH_BUILD_DLL
		#define CHOCOLATE_API __declspec(dllexport)
	#else
		#define CHOCOLATE_API __declspec(dllimport)
	#endif
#else
	#error Chocolate only supports Windows
#endif

#define BIT(x) (1 << x)