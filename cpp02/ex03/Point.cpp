/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 09:15:34 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/07/19 09:28:13 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0) {
}

Point::Point(const float x, const float y): x(x), y(y) {
}

Point::Point(const Point &copy): x(copy.x), y(copy.y) {
}

Point &Point::operator = (const Point &src) {
	if (this == &src)
		return (*this);
	return (*this);
}
 
Point::~Point() {
}

Fixed	Point::getX(void) const {
	return (this->x);
}

Fixed	Point::getY(void) const {
	return (this->y);
}

std::ostream	&operator<<(std::ostream &o, Point const &src) {
	// o << src.getX() << std::endl;
	// o << src.getY() << std::endl;
	o << "Point(" << src.getX() << ", " << src.getY() << ")";
	return (o);
}
