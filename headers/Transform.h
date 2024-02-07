#ifndef TRANSFORM_H
#define TRANSFORM_H

#include "Component.h"
#include "Vectors.h"

class Transform : public ComponentTemplate<Transform>
{
public:
	Vector3 position;
	Vector4 rotation;
};

#endif