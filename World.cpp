#include "stdafx.h"
#include "World.h"
#include "Actor.h"

UWorld::UWorld()
{

}

UWorld::~UWorld()
{

}

void UWorld::Tick()
{
	for (auto Actor : Actors)
	{
		Actor->Tick();
	}
}

void UWorld::Render()
{
	for (auto Actor : Actors)
	{
		Actor->Render();
	}
}

void UWorld::Load(std::string MapName)
{
	std::ifstream MapStream(MapName);
	if (!MapStream.is_open())
	{
		return;
	}

	int Y = 0;
	while (!MapStream.eof())
	{
		std::string Line;
		std::getline(MapStream, Line);
		for (int X = 0; X < Line.length(); ++X)
		{
			char Tile = Line[X];
		}
		Y++;
	}
}
