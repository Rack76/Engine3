#ifndef SHADER_H
#define SHADER_H

#include "Component.h"

class Shader : public ComponentTemplate<Shader>
{
public:
	char text[];

	void Parse() {
		strcat(text, "\o");
	}
};

#endif