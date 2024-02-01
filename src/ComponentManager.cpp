#include "ComponentManager.h"
#include <iostream>

Component* ComponentManager::getComponent(VLUI64 componentType)
{
	if(poolAllocators.find(componentType) == poolAllocators.end())			
		std::cerr << "ComponentManager::getComponent() : component type not found! : you must register this component type first";
	return poolAllocators.at(componentType).getInstance();
}

std::map<VLUI64, PoolAllocator<Component>> ComponentManager::poolAllocators = std::map<VLUI64, PoolAllocator<Component>>();