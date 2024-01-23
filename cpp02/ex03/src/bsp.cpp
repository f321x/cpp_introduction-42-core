/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <***REMOVED***@student.***REMOVED***.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:29:10 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/01/23 14:03:15 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed	calc_area(Point const x, Point const y, Point const z)
{
	Fixed	XYx(y.get_x() - x.get_x());
	Fixed	XYy(y.get_y() - x.get_y());
	Fixed	XZx(z.get_x() - x.get_x());
	Fixed	XZy(z.get_y() - x.get_y());

	Fixed cross_product = XYx * XZy - XYy * XZx;

	if (cross_product < Fixed(0))
		cross_product = cross_product * Fixed(-1);

	Fixed area = cross_product / 2;
	return (area);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	a_abc(calc_area(a, b, c));
	Fixed	a_abp(calc_area(a, b, point));
	Fixed	a_acp(calc_area(a, c, point));
	Fixed	a_bcp(calc_area(b, c, point));

	Fixed	sum_point_areas(a_abp + a_acp + a_bcp);
	if (a_abp == 0 || a_acp == 0 || a_bcp == 0)
        return false;
	if (sum_point_areas == a_abc)
		return (true);
	return (false);
}
