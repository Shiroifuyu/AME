#pragma once

#ifdef AME_PLATFORM_WINDOWS

extern Ame::Application* Ame::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Ame::CreateApplication();
	app->Run();
	delete app;
}
#endif