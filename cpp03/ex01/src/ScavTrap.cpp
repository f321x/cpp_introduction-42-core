/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <***REMOVED***@student.***REMOVED***.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:36:12 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/07 10:53:27 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap (void) {
	_name = "Frank";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "Default ScavTrap constructor called! Summoning Frank..." << std::endl;
}

ScavTrap::ScavTrap (std::string name) : ClapTrap(name) {
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "Very Special ScavTrap constructor called! Building " << _name << " ..." << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor called! Eliminating " << _name << std::endl;
}

ScavTrap::ScavTrap (const ScavTrap& other) : ClapTrap(other) {
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << "ScavTrap copy constructor called!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_attackDamage = other._attackDamage;
		_energyPoints = other._energyPoints;
	}
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
}

void	ScavTrap::attack (const std::string& target) {
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks "
		<< target << " , causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else if (_hitPoints > 0)
	{
		std::cout << "ScavTrap " << _name << " can't attack " << target
		<< " energy points are empty." << std::endl;
	}
	else if (_energyPoints > 0)
	{
		std::cout << "ScavTrap " << _name << " can't attack " << target
		<< " hit points are empty." << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << _name << " can't attack " << target
		<< " energy and hit points are empty." << std::endl;
	}
}
