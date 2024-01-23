/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:28:50 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/01/22 13:50:01 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed {
	public:
		Fixed(void);
		~Fixed();
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		static const int	_FRACTIONAL_BITS = 8;
		int					_fp_num_val;
};
