/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:56:07 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/08 17:24:15 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {
	std::cout << "AMateria type constructor called." << std::endl;
}

AMateria::AMateria(void) {
	std::cout << "AMateria constructor called." << std::endl;
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor called." << std::endl;
}

AMateria::AMateria(const AMateria& other) : _type(other._type) {
	std::cout << "AMateria copy constructor called." << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other) {
    if (this != &other)
    {
        _type = other._type;
    }
	std::cout << "AMateria copy assignement overload called." << std::endl;
	return *this;
}

void	AMateria::use(ICharacter& target) {
	std::cout << "Undefined materia used on " << target.getName() << std::endl;
	return ;
}

std::string const &	AMateria::getType() const {
	return (_type);
}
