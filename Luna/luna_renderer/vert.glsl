#version 430
layout (location = 0) in vec3 aPos; // the position variable has attribute position 0
uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

void main(void)
{
	gl_Position = view * model * vec4(aPos,1.0);
}