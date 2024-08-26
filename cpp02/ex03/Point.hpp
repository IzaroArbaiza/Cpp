/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 09:15:38 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/07/19 09:28:08 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class Point {
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point(void);
        Point(const float x, const float y);
        Point(const Point &copy);
        Point &operator = (const Point &src);
        ~Point(void);
        
        Fixed   getX(void) const;
        Fixed   getY(void) const;
};

std::ostream    &operator<<(std::ostream &o, const Point &src);
bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif