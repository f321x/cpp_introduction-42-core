/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:05:57 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/06 18:50:58 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	ClapTrap	bob("Bob");
	ClapTrap	alice("Alice");

	bob.attack("Alice");
	alice.takeDamage(0);
	alice.beRepaired(0);

	alice.attack("Bob");
	bob.takeDamage(10);

	std::cout << "ScavTrap Tests\n\n" << std::endl;
	ScavTrap misterScav("Mister Scav");

	misterScav.guardGate();
	misterScav.attack("Alice");
	misterScav.takeDamage(50);

	return (0);
}
