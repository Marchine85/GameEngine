#pragma once
#include "stdio.h"

#ifdef CH_PLATFORM_WINDOWS

extern Chocolate::Application* Chocolate::CreateApplication();

int main(int argc, char** argv)
{
	printf("Chocolate Engine!");
	auto app = Chocolate::CreateApplication();

	app->Run();
	delete app;

}

#endif