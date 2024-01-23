/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:28:50 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/01/23 11:14:29 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed {
	public:
		Fixed(void);
		Fixed(const int number);
		Fixed(const float number);
		~Fixed();
		Fixed(const Fixed& other);

		Fixed&	operator=(const Fixed& other);
		bool	operator>(const Fixed& right_side) const;
		bool	operator<(const Fixed& right_side) const;
		bool	operator>=(const Fixed& right_side) const;
		bool	operator<=(const Fixed& right_side) const;
		bool	operator==(const Fixed& right_side) const;
		bool	operator!=(const Fixed& right_side) const;
		Fixed	operator*(const Fixed& right_side) const;
		Fixed	operator/(const Fixed& right_side) const;
		Fixed	operator+(const Fixed& right_side) const;
		Fixed	operator-(const Fixed& right_side) const;
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed& min(Fixed& fixed1, Fixed& fixed2);
		static const Fixed& min(const Fixed& fixed1, const Fixed& fixed2);
		static Fixed& max(Fixed& fixed1, Fixed& fixed2);
		static const Fixed& max(const Fixed& fixed1, const Fixed& fixed2);
	private:
		static const int	_FRACTIONAL_BITS = 8;
		int					_fp_num_val;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);
