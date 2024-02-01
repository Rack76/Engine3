#ifndef VLUI64_H
#define VLUI64_H

#include <unordered_map>
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

	void setQuadword(int index, unsigned long long value)
	{
		quadwords[index] = value;
	}

	int getSize()
	{
		return quadwords.size();
	}

	unsigned long long getQuadword(int index)
	{
		return quadwords.at(index);
	}

	VLUI64 operator|(const VLUI64& r)
	{
		VLUI64 returnValue;
		VLUI64 rCopy = r;
		VLUI64 thisCopy = *this;
		int max = std::max(quadwords.size(), r.quadwords.size());
		for (int i = 0; i < max; i++)
		{
			returnValue.setQuadword(i, thisCopy.quadwords[i] | rCopy.quadwords[i]);
		}
		return returnValue;
	}

	bool operator<(const VLUI64& r) const
	{
		if (quadwords.size() == r.quadwords.size())
			return quadwords.at(quadwords.size() - 1) < r.quadwords.at(quadwords.size() - 1);
		else if (quadwords.size() < r.quadwords.size())
			return true;
		else if (quadwords.size() > r.quadwords.size())
			return false;
	}

	bool operator==(const VLUI64& r) const
	{
		return quadwords == r.quadwords;
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

	std::unordered_map<int, unsigned long long> quadwords;
};

#endif