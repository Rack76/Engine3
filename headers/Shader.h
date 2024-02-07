#ifndef SHADER_H
#define SHADER_H

#include "Component.h"

class Shader : public ComponentTemplate<Shader>
{
public:
	float value = 1;
};

#endif