/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 09:14:21 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/07/10 09:33:48 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int _fixedPointValue;
        static const int _bits = 8;
    public:
        Fixed();    //Default constructor
        Fixed(const int num);
		Fixed(const float num);
        Fixed(const Fixed &copy);   //Copy of default constructor
        Fixed &operator = (const Fixed &src);    //Assigment operator constructor
        ~Fixed();   //Destructor

        int getRawBits(void) const;
        void    setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream    &operator<<(std::ostream &o, const Fixed &src);

#endif