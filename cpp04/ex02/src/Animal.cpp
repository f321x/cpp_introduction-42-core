/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:10:35 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/08 11:49:48 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal (void) {
	_type = "Undefined fur ball";
	std::cout << "Default Animal constructor called!" << std::endl;
}

Animal::~Animal () {
	std::cout << "Animal destructor called!" << std::endl;
}

Animal::Animal (const Animal& other) {
	_type = other._type;
	std::cout << "Animal copy constructor called!" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout << "Animal copy assignment operator called" << std::endl;
	return (*this);
}

// void	Animal::makeSound() const {
// 	std::cout << "Animal does not make any sound!" << std::endl;
// }

std::string	Animal::getType() const {
	return (_type);
}
