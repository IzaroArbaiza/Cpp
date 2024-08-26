/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 08:59:39 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/07/08 13:34:10 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
    private:
        int _fixedPointValue;
        static const int _bits = 8;
    public:
        Fixed();    //Default constructor
        Fixed(const Fixed &copy);   //Copy of default constructor
        Fixed &operator = (const Fixed &src);    //Assigment operator constructor
        ~Fixed();   //Destructor

        int getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif