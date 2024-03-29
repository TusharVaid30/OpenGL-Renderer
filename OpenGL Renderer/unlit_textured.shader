#version 330 core

in vec2 texCoord;
in vec4 color;

out vec4 fragColor;

uniform sampler2D tex1;

uniform vec3 defaultColor;

void main()
{
	fragColor = texture(tex1, texCoord) * vec4(defaultColor, 1.0);
}