/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:01:21 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/08 16:59:04 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure(void);
		virtual ~Cure();
		Cure(const Cure& other);
		Cure& operator=(const Cure& other);

		virtual Cure* clone() const;
    	virtual void use(ICharacter& target);
};
