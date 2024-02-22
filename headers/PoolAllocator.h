#ifndef POOL_ALLOCATOR_H
#define POOL_ALLOCATOR_H

#include "NameAllocator.h"
#include "Component.h"
#include "Log.h"
#include <memory>
#include <unordered_map>

template <typename T>
class PoolAllocator
{
public:
	template <typename N>
	void registerComponentFactory()
	{
		componentFactory = []() {
			return std::make_unique<N>();
		};
	}

	void allocate()
	{
		for (int i = 0; i < maxCount; i++)
		{
			pool.insert({ i, componentFactory() });
		}
	}

	Component* getInstance()
	{
		int name = nameAllocator.getName();
		auto instance = pool[name].get();
		object_nameMapping.insert({ instance, name });
		return instance;
	}

	void returnInstance(T* instance)
	{
		instance->reset();
		if (object_nameMapping.find(instance) == object_nameMapping.end())
		{
			Log::error("instance not returned : instance not allocated");
			return;
		}
		nameAllocator.returnName(object_nameMapping.at(instance));
		object_nameMapping.erase(instance);
	}

private:
	const int maxCount = 5;
	NameAllocator nameAllocator = NameAllocator(maxCount);
	std::unordered_map<int, std::unique_ptr<Component>> pool;
	std::unordered_map<Component*, int, std::hash<Component*>> object_nameMapping;
	std::function<std::unique_ptr<Component>()> componentFactory;
};

#endif 