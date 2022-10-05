#pragma once

#include "Core.h"
#include "Events/Event.h"


namespace Hyper
{
	class HYPER_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined by CLIENT
	Application* CreateApplication();

}