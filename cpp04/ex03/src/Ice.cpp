/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:01:09 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/08 17:25:34 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice (void) : AMateria("ice") {
	std::cout << "Ice default constructor called." << std::endl;
}

Ice::~Ice() {
	std::cout << "Ice destructor called." << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other) {
	std::cout << "Ice copy constructor called." << std::endl;
}

Ice& Ice::operator=(const Ice& other) {
	if (this != &other)
	{
		AMateria::operator=(other);
	}
	std::cout << "Ice copy assignement overload called." << std::endl;
	return *this;
}

void	Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice*	Ice::clone() const {
	return (new Ice(*this));
}
