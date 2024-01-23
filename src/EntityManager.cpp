#include "EntityManager.h"
#include "Transform.h"

void Engine::EntityManager::addEntity()
{
	VLUI64 entityType = Transform::typeId();
	archetypes[entityType].addEntity(entityType);
}
