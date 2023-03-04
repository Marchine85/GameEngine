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

#ifdef CH_ENABLE_ASSERTS
	#define CH_ASSERT(x, ...) { if(!(x)) {CH_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }} }
	#define CH_CORE_ASSERT(x, ...) { if(!(x)) {CH_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }} }
#else 
	#define CH_ASSERT(x, ...)
	#define CH_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)