/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 20:15:13 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/07 20:18:48 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal (void) {
	_type = "Undefined wrong fur ball";
	std::cout << "Default WrongAnimal constructor called!" << std::endl;
}

WrongAnimal::~WrongAnimal () {
	std::cout << "WrongAnimal destructor called!" << std::endl;
}

WrongAnimal::WrongAnimal (const WrongAnimal& other) {
	_type = other._type;
	std::cout << "WrongAnimal copy constructor called!" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	return (*this);
}

void	WrongAnimal::makeSound() const {
	std::cout << "This is the WrongAnimal default sound. THIS IS NOT WHAT A CAT SOUNDS LIKE!" << std::endl;
}

std::string	WrongAnimal::getType() const {
	return (_type);
}
