#pragma once

#ifdef CH_PLATFORM_WINDOWS
	#ifdef CH_BUILD_DLL
		#define CHOCOLATE_API __declspec(dllexport)
	#else
		#define CHOCOLATE_API __declspec(dllimport)
	#endif
#else
	#error Chocolate onyl supports Windows
#endif