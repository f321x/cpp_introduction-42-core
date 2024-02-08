/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 10:33:41 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/08 10:42:38 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain (void) {
	std::cout << "Default Brain constructor called!" << std::endl;
}

Brain::~Brain () {
	std::cout << "Brain destructor called!" << std::endl;
}

Brain::Brain (const Brain& other) {
	for (int i = 0; i < 100; i++)
	{
		_ideas[i] = other._ideas[i];
	}
	std::cout << "Brain copy constructor called!" << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
		{
			_ideas[i] = other._ideas[i];
		}
	}
	std::cout << "Brain copy assignment operator called" << std::endl;
	return (*this);
}
