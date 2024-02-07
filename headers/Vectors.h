#pragma once

class Vector2
{
public:
	float x, y;
	Vector2(float x, float y)
	{
		this->x = x; this->y = y;
	}
};

class Vector3
{
public:
	float x, y, z;
	Vector3(float x, float y, float z)
	{
		this->x = x; this->y = y; this->z = z;
	}
};

class Vector4
{
public:
	float x, y, z, w;
	Vector4(float x, float y, float z, float w)
	{
		this->x = x; this->y = y; this->z = z; this->w = w;
	}
};