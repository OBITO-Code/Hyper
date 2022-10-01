#pragma once

#ifdef HY_PLATFORM_WINDOWS

extern Hyper::Application* Hyper::CreateApplication();

int main(int arcgc, char** argv) {
	
	printf("Hyper Engine\n");
	auto app = Hyper::CreateApplication();
	app->Run();
	delete app;
}

#endif