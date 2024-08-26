/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 09:14:44 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/07/17 14:51:34 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int _fpv;
        static const int _bits = 8;
    public:
        Fixed();
        Fixed(const int num);
		Fixed(const float num);
        Fixed(const Fixed &copy);
        Fixed &operator = (const Fixed &src);
        
        bool operator > (const Fixed &src) const;
        bool operator < (const Fixed &src) const;
        bool operator >= (const Fixed &src) const;
        bool operator <= (const Fixed &src) const;
        bool operator == (const Fixed &src) const;
        bool operator != (const Fixed &src) const;

        Fixed   operator + (const Fixed &src) const;
        Fixed   operator - (const Fixed &src) const;
        Fixed   operator * (const Fixed &src) const;
        Fixed   operator / (const Fixed &src) const;
        
        Fixed	operator ++ (void);
        Fixed	operator ++ (int);
        Fixed	operator -- (void);
        Fixed	operator -- (int);

        static Fixed	&max(Fixed &src1, Fixed &src2);
        static const Fixed  &max(const Fixed &src1, const Fixed &src2);
        static Fixed	&min(Fixed &src1, Fixed &src2);
        static const Fixed  &min(const Fixed &src1, const Fixed &src2);
        
        ~Fixed();

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream    &operator<<(std::ostream &o, const Fixed &src);

#endif