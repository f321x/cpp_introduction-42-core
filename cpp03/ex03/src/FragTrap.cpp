/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <***REMOVED***@student.***REMOVED***.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:36:12 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/07 10:59:40 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap (void) {
	_name = "Frank";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "Default ScavTrap constructor called! Summoning Frank..." << std::endl;
}

FragTrap::FragTrap (std::string name) : ClapTrap(name) {
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "Not so special FragTrap constructor called! Building " << _name << " ..." << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor called! Pouring one out for " << _name << std::endl;
}

FragTrap::FragTrap (const FragTrap& other) : ClapTrap(other) {
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << "FragTrap copy constructor called!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_attackDamage = other._attackDamage;
		_energyPoints = other._energyPoints;
	}
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "High five accepted. Raising hand. High five!" << std::endl;
}

void	FragTrap::attack (const std::string& target) {
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "FragTrap " << _name << " attacks "
		<< target << " , causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else if (_hitPoints > 0)
	{
		std::cout << "FragTrap " << _name << " can't attack " << target
		<< " energy points are empty." << std::endl;
	}
	else if (_energyPoints > 0)
	{
		std::cout << "FragTrap " << _name << " can't attack " << target
		<< " hit points are empty." << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << _name << " can't attack " << target
		<< " energy and hit points are empty." << std::endl;
	}
}
