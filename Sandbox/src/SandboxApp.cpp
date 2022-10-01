#include <Hyper.h>

class Sandbox : public Hyper::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Hyper::Application* Hyper::CreateApplication()
{
	return new Sandbox();
}