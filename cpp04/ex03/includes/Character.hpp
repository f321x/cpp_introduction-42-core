/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:46:58 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/08 16:57:49 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "AMateria.hpp"

class Character : public ICharacter {
	public:
		Character(std::string const & name);
		virtual ~Character();
		Character(const Character& other);
		Character& operator=(const Character& other);

		virtual std::string const & getName() const;
    	virtual void equip(AMateria* m);
    	virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

	private:
		std::string _name;
		AMateria* _inventory[4];

};
