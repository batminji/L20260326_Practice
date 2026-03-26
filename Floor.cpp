#include "stdafx.h"
#include "Floor.h"

AFloor::AFloor(FVector2D InLocation, char InMesh)
{
	Location = InLocation;
	Mesh = InMesh;
}

AFloor::~AFloor()
{
}
