#pragma once
#include "Actor.h"

class APlayer : public AActor
{
public:
	APlayer(FVector2D InLocation = {0, 0}, char InMesh = 'P');
	virtual ~APlayer();

	virtual void Tick() override;
};

