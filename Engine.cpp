#include "Engine.h"
#include "World.h"

UEngine* UEngine::Instance = nullptr;

UEngine::UEngine()
{
	Init();
}

UEngine::~UEngine()
{
	Terminate();
}

void UEngine::Init()
{
	bIsRunning = true;
	World = new UWorld();
}

void UEngine::Terminate()
{
	delete World;
	World = nullptr;
}

void UEngine::Run()
{
	while (bIsRunning)
	{
		Input();
		Tick();
		Render();
	}
}

void UEngine::Input()
{
}

void UEngine::Tick()
{
	World->Tick();
}

void UEngine::Render()
{
	World->Render();
}
