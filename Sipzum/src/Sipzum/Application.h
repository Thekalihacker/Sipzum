#pragma once

#include "Core.h"

namespace Sipzum {
	class SIPZUM_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// TODO: Define in client
	Application* CreateApplication();
}

