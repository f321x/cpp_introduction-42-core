#pragma once

template <typename T>
void swap(T &first, T &second)
{
	T temp = first;
	first = second;
	second = temp;
}

template <typename T>
T max(const T &first, const T &second)
{
	if (first > second)
		return first;
	else
		return second;
}

template <typename T>
T min(const T &first, const T &second)
{
	if (first < second)
		return first;
	else
		return second;
}
