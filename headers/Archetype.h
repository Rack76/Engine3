#ifndef ARCHETYPE_H
#define ARCHETYPE_H

#include "VLUI64.h"
#include "Component.h"
#include "NameAllocator.h"
#include <unordered_map>
#include <vector>
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

	void addSuperArchetypes(std::vector<Archetype>& archetypes, VLUI64 excluded)
	{
		VLUI64 null;
		if (entities.size() != 0)
			archetypes.push_back(*this);
		for (auto _archetype : superArchetypes)
		{
			VLUI64 and;
			and.set(_archetype.first & excluded);
			null.set(and);
			for (int i = 0; i < null.getSize(); i++)
			{
				null.setQuadword(i, 0);
			}
			if (and == null)
				_archetype.second->addSuperArchetypes(archetypes, excluded);
		}
	}

	std::unordered_map<int, std::map<VLUI64, Component*>> getEntities()
	{
		return entities;
	}

	std::map<VLUI64, Archetype*> superArchetypes;

private:
	void addComponent(int entityIndex, VLUI64 componentType);

	NameAllocator nameAllocator = NameAllocator(10);
	std::unordered_map<int, std::map<VLUI64, Component*>> entities;
};

#endif