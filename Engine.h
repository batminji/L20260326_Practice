#pragma once

class UWorld;

class UEngine
{
protected:
	UEngine();

	static UEngine* Instance;
public:
	~UEngine();
	static UEngine* GetInstance()
	{
		if (Instance == nullptr)
		{
			Instance = new UEngine();
		}
		return Instance;
	}

	void Init();
	void Terminate();
	void Run();

	inline UWorld* GetWorld()
	{
		return World;
	}

protected:
	void Input();
	void Tick();
	void Render();

	int bIsRunning;

	UWorld* World;

	static int KeyCode;
};

#define GEngine		UEngine::GetInstance()