#include <iostream>
#include "VLUI64.h"
#include "Component.h"
#include "ComponentManager.h"
#include "EntityManager.h"
#include "Transform.h"
#include "Mesh.h"
#include "Shader.h"
#include <cassert>

void testAddEntity()
{
	ComponentManager::registerComponent<Transform>();
	EntityId entity1 = Engine::EntityManager::addEntity();
	EntityId entity2 = Engine::EntityManager::addEntity();
	assert(entity1.first == Transform::typeId() && entity1.second == 0);
	assert(entity2.first == Transform::typeId() && entity2.second == 1);
}

void testVLUI64Or()
{
	ComponentManager::registerComponent<Transform>();
	ComponentManager::registerComponent<Mesh>();
	assert((Transform::typeId() | Mesh::typeId()).getQuadword(0) == 3);
}

void testAddComponent()
{
	ComponentManager::registerComponent<Transform>();
	ComponentManager::registerComponent<Mesh>();
	EntityId entity1 = Engine::EntityManager::addEntity();
	assert(entity1.first == Transform::typeId() && entity1.second == 0);
	Engine::EntityManager::addComponent<Mesh>(entity1);
	assert(entity1.first == (Transform::typeId() | Mesh::typeId()) && entity1.second == 0);
}

void testGetComponent()
{
	ComponentManager::registerComponent<Transform>();
	ComponentManager::registerComponent<Mesh>();
	EntityId entity1 = Engine::EntityManager::addEntity();
	assert(entity1.first == Transform::typeId() && entity1.second == 0);
	Engine::EntityManager::addComponent<Mesh>(entity1);
	auto meshComponent = Engine::EntityManager::getComponent<Mesh>(entity1);
	assert(meshComponent->value == 0);
	meshComponent->value = 5;
	assert(meshComponent->value == 5);
}

void testGetArchetypes()
{
	ComponentManager::registerComponent<Transform>();
	ComponentManager::registerComponent<Mesh>();
	ComponentManager::registerComponent<Shader>();
	EntityId entity1 = Engine::EntityManager::addEntity();
	Engine::EntityManager::addComponent<Mesh>(entity1);
	Engine::EntityManager::addComponent<Shader>(entity1);
	VLUI64 include;
	auto archetypes = Engine::EntityManager::getArchetypesWith(Mesh::typeId() | Shader::typeId());
	auto archetype = archetypes[0];
	for (auto entity : archetype.getEntities())
	{
		Shader* shader = (Shader*)entity.second.at(Shader::typeId());
		std::cout << shader->value << std::endl;
	}
}

int main()
{
	testGetArchetypes();
}