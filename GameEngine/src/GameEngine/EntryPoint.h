#pragma once

#ifdef EN_PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();
	
int main(int argc, char** argv) {

	Engine::Log::Init();
	EN_CORE_WARN("Initialized Log!");
	EN_FATAL("Initialized Log!");
	auto app = Engine::CreateApplication();
	app->Run();
	delete app;

}

#endif
