#pragma once
#include <stack>
#include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack
	: public std::stack<T, Container>
{
public:
	// Making the protected container var of stack available
	using std::stack<T, Container>::c;

	// Exposing the underlaying deques iterators
	typedef typename Container::iterator iterator;

	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }

};
