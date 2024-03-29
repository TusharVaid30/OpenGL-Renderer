#include "SceneRenderer.h"

extern int currentLevelIndex;

void SceneRenderer::Start()
{
	if (currentLevelIndex == 0)
		mainMenu.Start();
	if (currentLevelIndex == 1)
		level1.Start();
}

void SceneRenderer::Update(float deltaTime)
{
	if (currentLevelIndex == 0)
		mainMenu.Update();
	if (currentLevelIndex == 1)
		level1.Update(deltaTime);
}

void SceneRenderer::ClearData()
{
	if (currentLevelIndex == 0)
		mainMenu.ClearData();
	if (currentLevelIndex == 1)
		level1.ClearData();
}