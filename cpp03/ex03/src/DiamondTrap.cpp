/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <***REMOVED***@student.***REMOVED***.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 19:57:39 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/07 11:26:36 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap (void) : ScavTrap(), FragTrap() {
	_name = "shiny cubic carbon";
	ClapTrap::_name = _name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "Diamond Trap " << _name << " constructed." << std::endl;
}

DiamondTrap::DiamondTrap (std::string name) : ScavTrap(name), FragTrap(name) {
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "Diamond Trap " << _name << " constructed." << std::endl;
}

DiamondTrap::~DiamondTrap () {
	std::cout << "Diamond Trap " << _name << " destroyed" << std::endl;
}

DiamondTrap::DiamondTrap (const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other) {
	_name = other._name;
	ClapTrap::_name = _name + "_clap_name";
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << "DiamondTrap copy constructor called!" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
	if (this != &other)
	{
		_name = other._name;
		ClapTrap::operator=(other);
		_hitPoints = other._hitPoints;
		_attackDamage = other._attackDamage;
		_energyPoints = other._energyPoints;
	}
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	return (*this);
}

void	DiamondTrap::attack (const std::string& target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI ()
{
	std::cout << "My name is " << _name
	<< ", the name of ClapTrap is " << ClapTrap::_name << std::endl;
}
