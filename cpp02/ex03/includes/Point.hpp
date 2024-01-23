/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:28:50 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/01/23 14:12:02 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Fixed.hpp"

class	Point {
	public:
		Point(void);
		Point(const float x, const float y);
		~Point();
		Point(const Point& other);
		Point& operator=(const Point& other);

		const	Fixed&	get_x(void);
		const	Fixed&	get_y(void);

	private:
		const Fixed _x;
		const Fixed	_y;
};
