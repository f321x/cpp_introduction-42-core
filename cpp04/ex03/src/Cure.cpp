/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:01:41 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/08 17:25:38 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure (void) : AMateria("cure") {
	std::cout << "Cure default constructor called." << std::endl;
}

Cure::~Cure() {
	std::cout << "Cure destructor called." << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other) {
	std::cout << "Cure copy constructor called." << std::endl;
}

Cure& Cure::operator=(const Cure& other) {
	if (this != &other)
	{
		AMateria::operator=(other);
	}
	std::cout << "Cure copy assignement overload called." << std::endl;
	return *this;
}

void	Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure*	Cure::clone() const {
	return (new Cure(*this));
}
