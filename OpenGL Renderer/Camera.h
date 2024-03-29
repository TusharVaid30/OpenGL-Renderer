#pragma once

#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "Shader.h"

class Camera
{
private:
	glm::vec3 cameraPos = glm::vec3(0.0f, 0.0f, 1.0f);
	glm::vec3 cameraRot = glm::vec3(0.0f, 0.0f, 0.0f);
	glm::vec3 cameraFront = glm::vec3(0.0f, 0.0f, -1.0f);
	glm::vec3 cameraUp = glm::vec3(0.0f, 1.0f, 0.0f);

	float r = 0.0f, g = 0.0f, b = 0.0f;

public:
	void setCamera();
	void SetPosition(glm::vec3 newPosition);
	glm::vec3 GetPosition();
	void SetRotation(glm::vec3 newRotation);
	void SetBackgroundColor(float r, float g, float b);
	void AttachShader(float FOV, float WIDTH, float HEIGHT, float near, float far, Shader shader);

	glm::vec3 GetForward();
};