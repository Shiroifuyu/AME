#pragma once

#include "Core.h"

namespace Ame
{
	class AME_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	Application* CreateApplication();
}