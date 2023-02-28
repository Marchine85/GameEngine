#pragma once

#ifdef CH_PLATFORM_WINDOWS

	extern Chocolate::Application* Chocolate::CreateApplication();

	int main(int argc, char** argv)
	{
		Chocolate::Log::Init();
		CH_CORE_WARN("Initialized Log!");
		int a = 5;
		CH_INFO("Hello! Var{0}", a);

		auto app = Chocolate::CreateApplication();

		app->Run();
		delete app;

	}

#endif