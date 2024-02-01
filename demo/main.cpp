#include <iostream>
#include "VLUI64.h"
#include "Component.h"
#include "ComponentManager.h"
#include "EntityManager.h"
#include "Transform.h"
#include "Mesh.h"
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

int main()
{
	testGetComponent();
}