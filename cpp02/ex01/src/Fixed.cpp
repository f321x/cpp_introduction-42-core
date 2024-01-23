/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <***REMOVED***@student.***REMOVED***.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:28:33 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/01/23 14:12:48 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed (void) : _fp_num_val(0) {
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed (const int number) {
	_fp_num_val = number << _FRACTIONAL_BITS;
	std::cout << "Integer constructor called" << std::endl;
}

Fixed::Fixed (const float number) {
	_fp_num_val = roundf(number * (1 << _FRACTIONAL_BITS));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed (void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed (const Fixed& other) : _fp_num_val(other.getRawBits()) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		_fp_num_val = other.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_fp_num_val);
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_fp_num_val = raw;
}

float	Fixed::toFloat (void) const {
	return ((float)_fp_num_val / (float)(1 << _FRACTIONAL_BITS));
}

int	Fixed::toInt (void) const {
	return (roundf((float)_fp_num_val / (float)(1 << _FRACTIONAL_BITS)));
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
    os << obj.toFloat();
    return os;
}
