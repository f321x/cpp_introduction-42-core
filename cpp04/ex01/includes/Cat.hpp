/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbock <fbock@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:05:47 by fbock             #+#    #+#             */
/*   Updated: 2024/02/08 10:41:24 by fbock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

	public:
		Cat(void);
		~Cat();
		Cat(const Cat& other);
		Cat&	operator=(const Cat& other);

		void	makeSound() const;
	private:
		Brain*	_brain;
};
