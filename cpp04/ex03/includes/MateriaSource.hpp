/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbock <fbock@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:51:47 by fbock             #+#    #+#             */
/*   Updated: 2024/02/08 16:57:54 by fbock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {

	public:
		MateriaSource();
		virtual ~MateriaSource();
		MateriaSource(const MateriaSource& other);
		MateriaSource& operator=(const MateriaSource& other);

		virtual void		learnMateria(AMateria*);
		virtual AMateria*	createMateria(std::string const & type);

	private:
		AMateria*	_source[4];
};
