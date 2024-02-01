#ifndef COMPONENT_H
#define COMPONENT_H

#include "VLUI64.h"
#include <cmath>

class Counter
{
public:
	static VLUI64 count;
};

class Component
{

};

template <typename T>
class ComponentTemplate : public Component
{
public:
	static VLUI64 typeId()
	{
		static bool assigned = false;
		static VLUI64 TypeId;
		if (!assigned)
		{
			TypeId.set(Counter::count);
			Counter::count.sl();
		}
		assigned = true;
		return TypeId;
	}

	void reset()
	{
		*this = T();
	}
};

#endif