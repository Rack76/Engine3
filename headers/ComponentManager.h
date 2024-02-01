#ifndef COMPONENT_MANAGER_H
#define COMPONENT_MANAGER_H

#include "VLUI64.h"
#include "Component.h"
#include <map>
#include <functional>
#include <memory>
#include "PoolAllocator.h"

class ComponentManager
{
public:
	template <typename T>
	static void registerComponent()
	{
		poolAllocators[T::typeId()].registerComponentFactory<T>();
		poolAllocators[T::typeId()].allocate();
	}

	static Component* getComponent(VLUI64 componentType);

private:
	static std::map<VLUI64, PoolAllocator<Component>> poolAllocators;
};

#endif 