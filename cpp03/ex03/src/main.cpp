/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <***REMOVED***@student.***REMOVED***.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:05:57 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/07 11:19:43 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main(void) {
	// ClapTrap	bob("Bob");
	// ClapTrap	alice("Alice");

	// bob.attack("Alice");
	// alice.takeDamage(0);
	// alice.beRepaired(0);

	// alice.attack("Bob");
	// bob.takeDamage(10);

	std::cout << "Diamond Tests\n\n" << std::endl;
	DiamondTrap ShinyRock("Shiny Rock");

	ShinyRock.whoAmI();
	ShinyRock.attack("innocent civilian");


	return (0);
}


