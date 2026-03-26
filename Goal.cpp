#include "stdafx.h"
#include "Goal.h"

AGoal::AGoal(FVector2D InLocation, char InMesh)
{
	Location = InLocation;
	Mesh = InMesh;
}

AGoal::~AGoal()
{
}
