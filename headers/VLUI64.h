#ifndef VLUI64_H
#define VLUI64_H

#include <map>
#include <vector>

class VLUI64
{
public:
	VLUI64()
	{
		quadwords.insert({ 0, 1 });
	}

	void sl();

	void set(VLUI64 myInt)
	{
		quadwords = myInt.quadwords;
	}

	template <typename... Types >
	void set(Types ...args)
	{
		set_recursive(0, args...);
	}

	int getCount()
	{
		return quadwords.size();
	}

	unsigned long getQuadword(int index)
	{
		return quadwords.at(index);
	}

private:

	template <typename... Types >
	void set_recursive(int index, unsigned long long arg, Types ...args)
	{
		quadwords[index] = arg;
		index++;
		if constexpr (sizeof...(Types) != 0)
			set_recursive(index, args...);
		else
			return;
	}

	std::map<int, unsigned long long> quadwords;
};

#endif