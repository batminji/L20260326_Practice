#pragma once
#include <vector>
#include <string>

class AActor;

class UWorld
{
public:
	UWorld();
	virtual ~UWorld();

	void Tick();
	void Render();

	void Load(std::string MapName);

	template <typename ClassName>
	AActor* SpawnActor()
	{
		AActor* NewActor = new ClassName();
		Actors.emplace_back(NewActor);
		return NewActor;
	}

	inline std::vector<AActor*>& GetAllActors()
	{
		return Actors;
	}

protected:
	std::vector<AActor*> Actors;
};

