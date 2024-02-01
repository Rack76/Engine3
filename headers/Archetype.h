#ifndef ARCHETYPE_H
#define ARCHETYPE_H

#include "VLUI64.h"
#include "Component.h"
#include "NameAllocator.h"
#include <unordered_map>
#include <map>

class Archetype
{
public:
	int addEntity(VLUI64 entityType);
	int transferEntity(int id, VLUI64 componentType, Archetype& destArchetype);
	int addEntity(std::map<VLUI64, Component*> entity)
	{
		int name = nameAllocator.getName();
		entities[name] = entity;
		return name;
	}
	Component* getComponent(int id, VLUI64 componentType)
	{
		return entities.at(id).at(componentType);
	}

private:
	void addComponent(int entityIndex, VLUI64 componentType);

	NameAllocator nameAllocator = NameAllocator(10);
	std::unordered_map<int, std::map<VLUI64, Component*>> entities;
};

#endif