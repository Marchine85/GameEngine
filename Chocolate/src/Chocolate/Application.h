#pragma once
#include "core.h"

namespace Chocolate {
	
	class CHOCOLATE_API Application 
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}


