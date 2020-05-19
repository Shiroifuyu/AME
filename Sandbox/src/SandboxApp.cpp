#include <Ame.h>

class Sandbox : public Ame::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Ame::Application* Ame::CreateApplication()
{
	return new Sandbox();
}