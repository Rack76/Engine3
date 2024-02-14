#pragma once

#include <map>
#include "VLUI64.h"
#include "ComponentManager.h"
#include "Archetype.h"
#include "Transform.h"

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
			if (archetypes.find(T::typeId()) == archetypes.end())
				archetypes[T::typeId()].superArchetypes.insert({ id.first,  &archetypes[newArchetypeSignature] });
			if (archetypes.find(newArchetypeSignature) == archetypes.end())
				archetypes[oldArchetypeSignature].superArchetypes.insert({T::typeId(),  &archetypes[newArchetypeSignature]});
			id.second = archetypes[oldArchetypeSignature].transferEntity(id.second, T::typeId(), archetypes[newArchetypeSignature]);
			id.first = newArchetypeSignature;
		}

		template <typename T>
		static T* getComponent(EntityId id)
		{
			return (T*)archetypes[id.first].getComponent(id.second, T::typeId());
		}

		static std::vector<Archetype> getArchetypesWith(VLUI64 included, VLUI64 excluded = VLUI64(0))
		{
			included = included | Transform::typeId();
			std::vector<Archetype> returnValue;
			archetypes[included].addSuperArchetypes(returnValue, excluded);
			return returnValue;
		}

		template <typename T, typename ...Types>
		EntityManager filterArchetypes()
		{

		}

	private:
		template <typename T, typename ...Types>
		VLUI64 myOr()
		{
			if constexpr (sizeof...(Types) == 0)
				return T::typeId();
			else
				return T::typeId() | myOr<Types...>();
		}

		static std::map<VLUI64, Archetype> archetypes;
	};
}