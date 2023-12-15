/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:42:27 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2023/12/15 15:05:11 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "horde.hpp"

int main(void)
{
	Zombie *heap_zombie;

	heap_zombie = newZombie("Heap Zombie");
	randomChump("Stack Zombie");
	delete heap_zombie;
	return (0);
}
