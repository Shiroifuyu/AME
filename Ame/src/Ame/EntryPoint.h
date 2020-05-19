#pragma once

#ifdef AME_PLATFORM_WINDOWS

extern Ame::Application* Ame::CreateApplication();

int main(int argc, char** argv)
{
	Ame::Log::Init();
	AME_CORE_WARN("Initialized Log!");
	int a = 5;
	AME_INFO("Hello! Var={0}", a);

	auto app = Ame::CreateApplication();
	app->Run();
	delete app;
}
#endif