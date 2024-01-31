/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:06:12 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/01/31 17:34:40 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap (std::string name) : _name(name) {
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "Constructor called!" << std::endl;
}

ClapTrap::~ClapTrap () {
	std::cout << "Destructor called!" << std::endl;
}

ClapTrap::ClapTrap (const ClapTrap& other) {
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << "Copy constructor called!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	if (this != &other)
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

void	ClapTrap::attack (const std::string& target) {
	std::cout << "ClapTrap " << _name << " attacks "
	<< target << " , causing " << _attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage (unsigned int amount) {
	std::cout << "ClapTrap " << _name << " is taking "
	<<  amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired (unsigned int amount) {
	std::cout << "ClapTrap " << _name << " is being repaired, "
	<< amount << " points habe been restored!" << std::endl;
}
