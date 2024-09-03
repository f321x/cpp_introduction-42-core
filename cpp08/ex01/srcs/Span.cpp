#include "Span.hpp"

Span::Span(unsigned int n) : _n(n) {}

Span::~Span() {}

Span::Span(const Span &other) : _n(other._n), _set(other._set) {}

Span &Span::operator=(const Span &other)
{
	if (this == &other)
		return *this;
	_n = other._n;
	_set = other._set;
	return *this;
}

void Span::addNumber(int n)
{
	if (_set.size() == _n)
		throw std::exception();
	_set.insert(n);
}

int Span::shortestSpan()
{
	if (_set.size() < 2)
		throw std::exception();

	std::multiset<int>::iterator it = _set.begin();

	int min_span = std::numeric_limits<int>::max();
	int previous = *it++;
	while (it != _set.end())
	{
		int span = *it - previous;
		if (span < min_span)
			min_span = span;
		previous = *it;
		it++;
	}
	return min_span;
}

int Span::longestSpan()
{
	if (_set.size() < 2)
		throw std::exception();

	std::multiset<int>::iterator it = _set.begin();
	int min = *it;
	int max = *(_set.rbegin());
	return (max - min);
}
