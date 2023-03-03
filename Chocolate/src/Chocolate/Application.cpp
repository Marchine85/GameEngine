#include "Application.h"

#include "Chocolate/Events/ApplicationEvent.h"
#include "Chocolate/Log.h"

namespace Chocolate {

	Application::Application()
	{
	}


	Application::~Application()
	{
	}

	void Application::Run()
	{
		WindowResizeEvent e(1200, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			CH_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			CH_TRACE(e);
		}


		while (true);
	}

}