#pragma once

#include <map>
#include "VLUI64.h"
#include "ComponentManager.h"
#include "Archetype.h"

using EntityId = std::pair<VLUI64, int>;

namespace Engine
{
	class EntityManager
	{
	public:
		static EntityId addEntity();

		template <typename T>
		static void addComponent(EntityId& id)
		{
			VLUI64 newArchetypeSignature = T::typeId() | id.first;
			VLUI64 oldArchetypeSignature = id.first;
			id.second = archetypes[oldArchetypeSignature].transferEntity(id.second, T::typeId(), archetypes[newArchetypeSignature]);
			id.first = newArchetypeSignature;
		}

		template <typename T>
		static T* getComponent(EntityId id)
		{
			return (T*)archetypes[id.first].getComponent(id.second, T::typeId());
		}
	private:
		static std::map<VLUI64, Archetype> archetypes;
	};
}