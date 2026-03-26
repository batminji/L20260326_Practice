#pragma once
#include "Actor.h"
class AFloor : public AActor
{
public:
	AFloor(FVector2D InLocation = { 0, 0 }, char InMesh = ' ');
	virtual ~AFloor();
};

