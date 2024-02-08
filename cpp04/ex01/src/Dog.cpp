/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:06:25 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/08 10:46:51 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog (void) {
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Default Dog constructor called! Throwing stick..." << std::endl;
}

Dog::~Dog () {
	delete _brain;
	std::cout << "Dog destructor called!" << std::endl;
}

Dog::Dog (const Dog& other) {
	_type = other._type;
	_brain = new Brain(*other._brain);
	std::cout << "Dog copy constructor called!" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other)
	{
		delete _brain;
		_brain = new Brain(*other._brain);
		_type = other._type;
	}
	std::cout << "Dog copy assignment operator called" << std::endl;
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "bark Bark BARK BARK BARK BARK BARK!!!!!!" << std::endl;
}
