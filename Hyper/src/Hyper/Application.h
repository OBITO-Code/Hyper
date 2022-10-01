#pragma once

#include "Core.h"


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