#ifndef MESH_H
#define MESH_H

#include "Component.h"

class Mesh : public ComponentTemplate<Mesh>
{
public:
	float value = 0;
};

#endif