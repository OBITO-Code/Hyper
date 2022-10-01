#pragma once

#ifdef HY_PLATFORM_WINDOWS

extern Hyper::Application* Hyper::CreateApplication();

int main(int arcgc, char** argv) {
	
	Hyper::Log::Init();
	HY_CORE_WARN("Initialized logs");
	HY_INFO("Welcome from hyper!");

	auto app = Hyper::CreateApplication();
	app->Run();
	delete app;
}

#endif