#include <Chocolate.h>

class Sandbox : public Chocolate::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Chocolate::Application* Chocolate::CreateApplication()
{
	return new Sandbox();
}