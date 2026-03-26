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
}
