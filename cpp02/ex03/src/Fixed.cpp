/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <***REMOVED***@student.***REMOVED***.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:28:33 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/01/23 13:47:13 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed (void) : _fp_num_val(0) {
	// std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed (const int number) {
	_fp_num_val = number << _FRACTIONAL_BITS;
	// std::cout << "Integer constructor called" << std::endl;
}

Fixed::Fixed (const float number) {
	_fp_num_val = roundf(number * (1 << _FRACTIONAL_BITS));
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed (void) {
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed (const Fixed& other) : _fp_num_val(other.getRawBits()) {
	// std::cout << "Copy constructor called" << std::endl;
}

int	Fixed::getRawBits(void) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return (_fp_num_val);
}

void	Fixed::setRawBits(int const raw) {
	// std::cout << "setRawBits member function called" << std::endl;
	_fp_num_val = raw;
}

float	Fixed::toFloat (void) const {
	return ((float)_fp_num_val / (float)(1 << _FRACTIONAL_BITS));
}

int	Fixed::toInt (void) const {
	return (roundf((float)_fp_num_val / (float)(1 << _FRACTIONAL_BITS)));
}

// operator overloads

Fixed& Fixed::operator=(const Fixed& other) {
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		_fp_num_val = other.getRawBits();
	return (*this);
}

bool	Fixed::operator>(const Fixed& right_side) const {
	return (_fp_num_val > right_side._fp_num_val);
}

bool	Fixed::operator<(const Fixed& right_side) const {
	return (_fp_num_val < right_side._fp_num_val);
}

bool	Fixed::operator>=(const Fixed& right_side) const {
	return (_fp_num_val >= right_side._fp_num_val);
}

bool	Fixed::operator<=(const Fixed& right_side) const {
	return (_fp_num_val <= right_side._fp_num_val);
}

bool	Fixed::operator==(const Fixed& right_side) const {
	return (_fp_num_val == right_side._fp_num_val);
}

bool	Fixed::operator!=(const Fixed& right_side) const {
	return (_fp_num_val != right_side._fp_num_val);
}

Fixed	Fixed::operator*(const Fixed& right_side) const {
	Fixed result;

    result._fp_num_val = (_fp_num_val * right_side._fp_num_val) / (1 << _FRACTIONAL_BITS);
    return (result);
}

Fixed	Fixed::operator/(const Fixed& right_side) const {
	Fixed result;

	if (right_side._fp_num_val == 0)
		throw std::invalid_argument("No dividing by 0!");
    result._fp_num_val = (_fp_num_val * (1 << _FRACTIONAL_BITS)) / right_side._fp_num_val;
    return (result);
}

Fixed	Fixed::operator+(const Fixed& right_side) const {
	Fixed result;

    result._fp_num_val = _fp_num_val + right_side._fp_num_val;
    return (result);
}

Fixed	Fixed::operator-(const Fixed& right_side) const {
	Fixed result;

    result._fp_num_val = _fp_num_val - right_side._fp_num_val;
    return (result);
}

Fixed& Fixed::operator++() {
    _fp_num_val += 1;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    _fp_num_val += 1;
    return temp;
}

Fixed& Fixed::operator--() {
    _fp_num_val -= 1;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    _fp_num_val -= 1;
    return temp;
}

Fixed& Fixed::min(Fixed& fixed1, Fixed& fixed2)
{
	return (fixed1 <= fixed2) ? fixed1 : fixed2;
}

const Fixed& Fixed::min(const Fixed& fixed1, const Fixed& fixed2)
{
	return (fixed1 <= fixed2) ? fixed1 : fixed2;
}

Fixed& Fixed::max(Fixed& fixed1, Fixed& fixed2)
{
	return (fixed1 >= fixed2) ? fixed1 : fixed2;
}

const Fixed& Fixed::max(const Fixed& fixed1, const Fixed& fixed2)
{
	return (fixed1 >= fixed2) ? fixed1 : fixed2;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
    os << obj.toFloat();
    return (os);
}
