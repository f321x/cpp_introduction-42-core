/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:05:57 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/06 19:57:26 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	ClapTrap	bob("Bob");
	ClapTrap	alice("Alice");

	bob.attack("Alice");
	alice.takeDamage(0);
	alice.beRepaired(0);

	alice.attack("Bob");
	bob.takeDamage(10);

	// std::cout << "Frag Tests\n\n" << std::endl;
	// FragTrap BigF("Big F");

	// BigF.highFivesGuys();
	// BigF.takeDamage(1000);


	return (0);
}
