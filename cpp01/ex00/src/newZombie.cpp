/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:30:45 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2023/12/15 14:56:47 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "horde.hpp"

Zombie *newZombie(std::string name)
{
	Zombie* new_zombie = new Zombie(name);
	new_zombie->announce();
	return (new_zombie);
}
