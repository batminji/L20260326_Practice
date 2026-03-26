#include "stdafx.h"
#include "Player.h"
#include "Engine.h"

APlayer::APlayer(FVector2D InLocation, char InMesh)
{
	Location = InLocation;
	Mesh = InMesh;
}

APlayer::~APlayer()
{
}

void APlayer::Tick()
{
	if (UEngine::KeyCode == 'w' || UEngine::KeyCode == 'W')
	{
		AddActorLocalOffset({ 0, -1 });
	}
	if (UEngine::KeyCode == 's' || UEngine::KeyCode == 'S')
	{
		AddActorLocalOffset({ 0, 1 });
	}
	if (UEngine::KeyCode == 'a' || UEngine::KeyCode == 'A')
	{
		AddActorLocalOffset({ -1, 0 });
	}
	if (UEngine::KeyCode == 'd' || UEngine::KeyCode == 'D')
	{
		AddActorLocalOffset({ 1, 0 });
	}
}
