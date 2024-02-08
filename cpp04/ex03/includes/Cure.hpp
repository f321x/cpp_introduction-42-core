/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbock <fbock@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:01:21 by fbock             #+#    #+#             */
/*   Updated: 2024/02/08 16:59:04 by fbock            ###   ########.fr       */
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
