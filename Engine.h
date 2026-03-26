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

	static int KeyCode;

protected:
	void Input();
	void Tick();
	void Render();

	int bIsRunning;

	UWorld* World;

};

#define GEngine		UEngine::GetInstance()