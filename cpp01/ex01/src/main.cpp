/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:35:03 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2023/12/15 16:10:37 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "horde.hpp"

int	main(void)
{
	int	amount = 10;

	Zombie* horde = zombieHorde(amount, "Horde");

	for (int i = 0; i < amount; i++)
	{
		horde[i].announce();
	}

	delete[] horde;
	return (0);
}
