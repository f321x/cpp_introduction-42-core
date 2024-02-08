/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <***REMOVED***@student.***REMOVED***.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:06:25 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/08 16:41:07 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog (void) {
	_type = "Dog";
	std::cout << "Default Dog constructor called! Throwing stick..." << std::endl;
}

Dog::~Dog () {
	std::cout << "Dog destructor called!" << std::endl;
}

Dog::Dog (const Dog& other) : Animal(other) {
	_type = other._type;
	std::cout << "Dog copy constructor called!" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout << "Dog copy assignment operator called" << std::endl;
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "bark Bark BARK BARK BARK BARK BARK!!!!!!" << std::endl;
}
