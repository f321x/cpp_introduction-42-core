#pragma once
#include <iterator>	 // begin/end
#include <exception> // error
#include <algorithm> // find
#include <vector>

template <typename T>
int easyfind(T container, int int_to_find)
{
	typename T::iterator occurence = std::find(container.begin(), container.end(), int_to_find);
	if (occurence == container.end())
	{
		throw std::exception();
	}
	return std::distance(container.begin(), occurence);
}
