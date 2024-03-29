#pragma once
#include <glad/glad.h>

class EBO
{
private:
	GLuint ID;

public:
	EBO();

	void AddBufferData(int sizeOfData, const void* data, GLenum usage);

	void BindEBO();
	void UnbindEBO();

	void DeleteEBO();
};