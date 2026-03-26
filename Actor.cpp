#include "stdafx.h"
#include "Actor.h"

AActor::AActor(FVector2D InLocation, char InMesh)
	: Location(InLocation), Mesh(InMesh)
{
	BeginPlay();
}

AActor::~AActor()
{
}

void AActor::BeginPlay()
{
}

void AActor::Tick()
{
}

void AActor::Render()
{
	COORD Coordinate{ Location.X * 2, Location.Y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coordinate);

	std::cout << Mesh << " ";
}

void AActor::SetActorLocation(FVector2D NewLocation)
{
	Location = NewLocation;
}
