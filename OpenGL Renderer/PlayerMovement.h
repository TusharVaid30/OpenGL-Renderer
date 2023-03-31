#pragma once

#include "Cube.h"
#include "InputManager.h"
#include "Time.h"

#include "CollisionDetector.h"
#include "PlatformSpawner.h"

class PlayerMovement
{
private:
	float zPos = 0.0f;
	float movementSpeed = -2.0f;

	InputManager inputManager;

	glm::vec3 position;

	int currentPhase = 0;

	CollisionDetector col; glm::vec3 phase1[3] = { glm::vec3(1.0f, 0.3f, 0.6f),
		glm::vec3(0.6f, 1.0f, 0.3f),
		glm::vec3(0.3f, 0.6f, 1.0f) };

	glm::vec3 phase2[5] = { glm::vec3(1.0f, 0.3f, 0.6f),
		glm::vec3(0.6f, 1.0f, 0.3f),
		glm::vec3(0.3f, 0.6f, 1.0f),
		glm::vec3(0.3f, 1.0f, 1.0f),
		glm::vec3(1.0f, 0.6f, 1.0f) };

	glm::vec3 phase3[7] = { glm::vec3(1.0f, 0.3f, 0.6f),
		glm::vec3(0.6f, 1.0f, 0.3f),
		glm::vec3(0.3f, 0.6f, 1.0f),
		glm::vec3(0.3f, 1.0f, 1.0f),
		glm::vec3(1.0f, 0.6f, 1.0f),
		glm::vec3(0.0f, 0.6f, 1.0f),
		glm::vec3(1.0f, 0.0f, 1.0f) };

	float clamp(float n, float lower, float upper);

public:
	void Move(Cube& cube, Time time);
};