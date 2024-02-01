#include "EntityManager.h"
#include "Transform.h"

EntityId Engine::EntityManager::addEntity()
{
	VLUI64 entityType = Transform::typeId();
	int index = archetypes[entityType].addEntity(entityType);
	return std::make_pair(entityType, index);
}

std::map<VLUI64, Archetype> Engine::EntityManager::archetypes = std::map<VLUI64, Archetype>();