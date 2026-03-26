#include "stdafx.h"
#include "Engine.h"
#include "World.h"

int main()
{
	GEngine->GetInstance();

	GEngine->GetWorld()->Load("NewLevel.txt");

	GEngine->Run();

	return 0;
}