#pragma once

#include <map>
#include "VLUI64.h"

namespace Engine
{
	class EntityManager
	{
	public:
		static void addEntity();

	private:
		static std::map<VLUI64, Archetype> archetypes;
	};
}