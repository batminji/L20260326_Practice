#pragma once
#include "Actor.h"
class AGoal : public AActor
{
public:
	AGoal(FVector2D InLocation = { 0, 0 }, char InMesh = 'G');
	virtual ~AGoal();
};

