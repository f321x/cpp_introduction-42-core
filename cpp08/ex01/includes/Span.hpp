#pragma once
#include <iterator>	 // begin/end
#include <limits>	 // numeric_limits
#include <exception> // error
#include <set>

class Span
{
public:
	Span(unsigned int n);
	~Span();
	Span(const Span &other);
	Span &operator=(const Span &other);

	void addNumber(int n);
	int shortestSpan();
	int longestSpan();

	template <typename Iterator>
	void addRange(Iterator begin, Iterator end)
	{
		unsigned int remaining_space = _n - _set.size();
		unsigned int amount_to_add = std::distance(begin, end);

		if (amount_to_add > remaining_space)
			throw std::exception();

		_set.insert(begin, end);
	}

private:
	unsigned int _n;
	std::multiset<int> _set;
};
