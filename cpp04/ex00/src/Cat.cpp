/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:44:13 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/07 20:01:40 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat (void) {
	_type = "Cat";
	std::cout << "Default Cat constructor called! Opening tuna can..." << std::endl;
}

Cat::~Cat () {
	std::cout << "Cat destructor called!" << std::endl;
}

Cat::Cat (const Cat& other) {
	_type = other._type;
	std::cout << "Cat copy constructor called!" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout << "Cat copy assignment operator called" << std::endl;
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "Meow give ME food! Meow" << std::endl;
}
