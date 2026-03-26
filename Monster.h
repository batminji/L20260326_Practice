#pragma once
#include "Actor.h"
class AMonster : public AActor
{
public:
	AMonster(FVector2D InLocation = { 0, 0 }, char InMesh = 'M');
	virtual ~AMonster();
};

