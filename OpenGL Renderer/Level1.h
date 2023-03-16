#pragma once

#include "Shader.h"
#include "Texture.h"
#include "Cube.h"
#include "Camera.h"

class Level1
{
private:
	Texture* gridTex;
	Shader* unlitTex;

	Camera camera;

	Cube cube;

public:
	void Start();
	void Update();

	void ClearData();
};