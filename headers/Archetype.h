#ifndef ARCHETYPE_H
#define ARCHETYPE_H

#include "VLUI64.h"
#include "Component.h"
#include <map>

class Archetype
{
public:
	void addEntity(VLUI64 entityType);
	void addComponent(int entityIndex, VLUI64 componentType);

private:
	std::map<int, std::map<VLUI64, Component*>> entities;
};

#endif