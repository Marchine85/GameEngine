workspace "Chocolate"
	architecture "x64"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}" 

project "Chocolate"
	location "Chocolate"
	kind "SharedLib"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
	{
		"%{prj.name}/src",
		"%{prj.name}/vendor/spdlog/include"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		defines
		{
			"CH_PLATFORM_WINDOWS",
			"CH_BUILD_DLL",
		}

		postbuildcommands
		{
			("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Sandbox")
		}

	filter "configurations:Debug"
		defines "CH_DEBUG"
		symbols "On"
		
	filter "configurations:Release"
		defines "CH_RELEASE"
		symbols "On"
		
	filter "configurations:Dist"
		defines "CH_DIST"
		symbols "On"


project "Sandbox"
	location "Sandbox"
	kind "ConsoleApp"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
 	{
		"Chocolate/vendor/spdlog/include",
		"Chocolate/src"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		defines
		{
			"CH_PLATFORM_WINDOWS",
		}

	links 
	{
		"Chocolate"
	}

	filter "configurations:Debug"
		defines "CH_DEBUG"
		symbols "On"
		
	filter "configurations:Release"
		defines "CH_RELEASE"
		symbols "On"
		
	filter "configurations:Dist"
		defines "CH_DIST"
		symbols "On"

