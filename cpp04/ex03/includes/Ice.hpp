/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbock <fbock@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:00:51 by fbock             #+#    #+#             */
/*   Updated: 2024/02/08 12:32:32 by fbock            ###   ########.fr       */
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
