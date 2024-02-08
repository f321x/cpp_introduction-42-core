/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:00:51 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/08 12:32:32 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria {

	public:
		Ice(void);
		virtual ~Ice();
		Ice(const Ice& other);
		Ice& operator=(const Ice& other);

		virtual Ice* clone() const;
    	virtual void use(ICharacter& target);

	private:

};
