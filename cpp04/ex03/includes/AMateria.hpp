/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:55:14 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/08 16:57:44 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

class AMateria
{
	public:
		AMateria(void);
		virtual ~AMateria();
		AMateria(const AMateria& other);
		AMateria& operator=(const AMateria& other);
		AMateria(std::string const & type);

		std::string const & getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
	protected:
		std::string	_type;
};
