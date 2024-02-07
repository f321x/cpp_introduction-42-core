/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 20:11:35 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/07 20:19:27 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat (void) {
	_type = "WrongCat";
	std::cout << "Default WrongCat constructor called! Opening tuna can..." << std::endl;
}

WrongCat::~WrongCat () {
	std::cout << "WrongCat destructor called!" << std::endl;
}

WrongCat::WrongCat (const WrongCat& other) {
	_type = other._type;
	std::cout << "WrongCat copy constructor called!" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	return (*this);
}

void	WrongCat::makeSound() const {
	std::cout << "Meow give ME food! Meow" << std::endl;
}
