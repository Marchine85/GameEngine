#include "chpch.h"
#include "Application.h"
#include "Chocolate/Events/MouseEvent.h"

#include "Chocolate/Log.h"

#include <GLFW/glfw3.h>


namespace Chocolate {

#define BIND_EVENT_FN(x) std::bind(&Application::x, this, std::placeholders::_1)

	Application::Application()
	{
		m_Window = std::unique_ptr<Window>(Window::Create());
		m_Window->SetEventCallback(BIND_EVENT_FN(OnEvent));
	}

	Application::~Application()
	{
	}


	void Application::OnEvent(Event& e)
	{
		EventDispatcher dispatcher(e);
		dispatcher.Dispatch<WindowCloseEvent>(BIND_EVENT_FN(OnWindowClose));

		CH_CORE_TRACE("{0}", e);
	}

	void Application::Run()
	{
		WindowResizeEvent e(1600, 900);
		if (e.IsInCategory(EventCategoryApplication))
		{
			CH_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			CH_TRACE(e);
		}

		while (m_Running)
		{
			glClearColor(0.1f, 0.8f, 0.1f, 1);
			glClear(GL_COLOR_BUFFER_BIT);
			m_Window->OnUpdate();
		}

	}

	bool Application::OnWindowClose(WindowCloseEvent& e)
	{
		m_Running = false;
		return true;
	}

}