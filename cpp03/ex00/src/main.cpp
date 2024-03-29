/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbock <fbock@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:05:57 by fbock             #+#    #+#             */
/*   Updated: 2024/02/01 16:07:00 by fbock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
	ClapTrap	bob("Bob");
	ClapTrap	alice("Alice");

	bob.attack("Alice");
	alice.takeDamage(0);
	alice.beRepaired(0);

	alice.attack("Bob");
	bob.takeDamage(10);

	return (0);
}
