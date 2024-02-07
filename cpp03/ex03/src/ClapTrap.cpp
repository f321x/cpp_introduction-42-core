/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <***REMOVED***@student.***REMOVED***.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:06:12 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/07 11:23:13 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap (void) {
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	_name = "";
	std::cout << "Default ClapTrap constructor called!" << std::endl;
}

ClapTrap::ClapTrap (std::string name) : _name(name) {
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "Constructor called!" << std::endl;
}

ClapTrap::~ClapTrap () {
	std::cout << "ClapTrap Destructor called!" << std::endl;
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
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

void	ClapTrap::attack (const std::string& target) {
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks "
		<< target << " , causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else if (_hitPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " can't attack " << target
		<< " energy points are empty." << std::endl;
	}
	else if (_energyPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " can't attack " << target
		<< " hit points are empty." << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " can't attack " << target
		<< " energy and hit points are empty." << std::endl;
	}
}

void	ClapTrap::takeDamage (unsigned int amount) {
	std::cout << _name << " is taking "
	<<  amount << " points of damage!" << std::endl;
	_hitPoints -= amount;
	if (_hitPoints < 0)
	{
		_hitPoints = 0;
		std::cout << _name << " is dead, hit points are empty!" << std::endl;
	}
}

void	ClapTrap::beRepaired (unsigned int amount) {
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << _name << " is being repaired, "
		<< amount << " hit points have been restored!" << std::endl;
		_energyPoints--;
	}
	else if (_hitPoints > 0)
	{
		std::cout << _name << " cannot be repaired, "
		<< "energy points are empty!" << std::endl;
	}
	else if (_energyPoints > 0)
	{
		std::cout << _name << " cannot be repaired, "
		<< "hit points are empty!" << std::endl;
	}
	else
	{
		std::cout << _name << " cannot be repaired, "
		<< "hit and energy points are empty!" << std::endl;
	}
}
