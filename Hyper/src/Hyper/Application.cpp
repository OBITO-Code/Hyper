#include "Application.h"

#include "Events/ApplicationEvent.h"
#include "Log.h"

namespace Hyper
{

	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			HY_TRACE(e);
		}

		if (e.IsInCategory(EventCategoryInput))
		{
			HY_TRACE(e);
		}

		while (true);
	}
}