#include "NameAllocator.h"
#include <limits>
#include <iostream>

int NameAllocator::getName()
{
    if (restoredNames.size() == 0)
    {
        if (firstUnusedName != maxCount)
        {
            allocatedNames.insert({ firstUnusedName , firstUnusedName });
            return firstUnusedName++;
        }
        else
        {
            std::cerr << "name not allocated : max count reached";
            return -1;
        }
    }
    else
    {
        auto it = restoredNames.begin();
        int returnValue = it->first;
        restoredNames.erase(returnValue);
        allocatedNames.insert({ returnValue, returnValue });
        return returnValue;
    }
}

void NameAllocator::returnName(int name)
{
    if (allocatedNames.find(name) != allocatedNames.end())
    {
        allocatedNames.erase(name);
        restoredNames.insert({ name, name });
    }
    else
        std::cerr << "name not returned : name not allocated";
}
