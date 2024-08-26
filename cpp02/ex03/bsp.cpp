/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 09:15:10 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/07/29 13:03:09 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

static Fixed	area(Point const a, Point const b, Point const c) {
	float area = ((a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat())) +
                (b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat())) +
                (c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())))
				/ 2.0f;

	if (area < 0)
		area = -area;
	return Fixed(area);
}

// cross = (p.y−a.y)×(b.x−a.x) − (p.x−a.x)×(b.y−a.y)
static bool	inseg(Point const a, Point const b, Point const p) {
	//Checks if 'p' is on the same line as 'a' and 'b'. If cross is 0, then p is in the same line.
    Fixed cross = ((p.getY() - a.getY()) * (b.getX() - a.getX())) - 
                    ((p.getX() - a.getX()) * (b.getY() - a.getY()));
	
    if (cross != 0)
        return (false);
    return (true);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed area1 = area(point, b, c).abs();
	Fixed area2 = area(a, point, c).abs();
	Fixed area3 = area(a, b, point).abs();
	Fixed total = area(a, b, c).abs();

	if (inseg(a, b, point) || inseg(b, c, point) || inseg(c, a, point))
		return (false);
	if ((total == (area1 + area2 + area3)))
		return (true);
	return (false);
}
