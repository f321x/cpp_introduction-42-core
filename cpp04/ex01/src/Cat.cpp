/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <***REMOVED***@student.***REMOVED***.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:44:13 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/08 16:45:50 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat (void) {
	_brain = new Brain();
	_type = "Cat";
	std::cout << "Default Cat constructor called! Opening tuna can..." << std::endl;
}

Cat::~Cat () {
	delete _brain;
	std::cout << "Cat destructor called!" << std::endl;
}

Cat::Cat (const Cat& other) : Animal(other) {
	_type = other._type;
	_brain = new Brain(*other._brain);
	std::cout << "Cat copy constructor called!" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other)
	{
		delete _brain;
		_brain = new Brain(*other._brain);
		_type = other._type;
	}
	std::cout << "Cat copy assignment operator called" << std::endl;
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "Meow give ME food! Meow" << std::endl;
}
