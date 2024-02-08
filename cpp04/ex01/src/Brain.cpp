/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <***REMOVED***@student.***REMOVED***.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 10:33:41 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/08 17:16:41 by codespace        ###   ########.fr       */
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

void	Brain::setBrain(int index, std::string idea) {
	_ideas[index] = idea;
}

void	Brain::getBrain(int index) {
	std::cout << _ideas[index] << std::endl;
}

