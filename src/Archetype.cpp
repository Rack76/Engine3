#include "Archetype.h"
#include "ComponentManager.h"

int Archetype::addEntity(VLUI64 entityType)
{
	int name = nameAllocator.getName();
	for (int i = 0; i < entityType.getSize(); i++)
	{
		while (entityType.getQuadword(i) != 0)
		{
			int bitPosition = floor(log2(entityType.getQuadword(i)));
			int bitValue = pow(2, bitPosition);
			VLUI64 componentType;
			componentType.setQuadword(i, bitValue);
			addComponent(name, componentType);
			entityType.setQuadword(i, entityType.getQuadword(i) - bitValue);
		}
	}
	return name;
}

int Archetype::transferEntity(int id, VLUI64 componentType, Archetype& destArchetype)
{
	auto map = entities.at(id);
	int newId = destArchetype.addEntity(map);
	destArchetype.addComponent(newId, componentType);
	entities.erase(id);
	return newId;
}

void Archetype::addComponent(int entityIndex, VLUI64 componentType)
{
	entities[entityIndex].insert({ componentType, ComponentManager::getComponent(componentType) });
}
