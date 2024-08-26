/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 09:14:15 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/07/29 16:45:44 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPointValue = 0;
}

Fixed::Fixed(const int num)	//Default int constructor
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = num << this->_bits;	//convierte el entero a formato de punto fijo desplazando el valor num 8 bits a la izquierda
}

Fixed::Fixed(const float num)	//Default float constructor
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = (int)roundf(num * (1 << this->_bits));	//convierte el flotante a formato de punto fijo multiplicando num por 2^8 (es decir, 256) y redondeando el resultado a entero
}

Fixed::Fixed(const Fixed &copy)	//Copy of default constructor
{
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(copy.getRawBits());
}

Fixed &Fixed::operator = (const Fixed &src)	//Copy assignment operator overload
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(src.getRawBits());
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const { 
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(int const raw) {
	this->_fixedPointValue = raw;
}

float	Fixed::toFloat(void) const {
	return (this->_fixedPointValue / (float)(1 << this->_bits));	//_value converted (rounded from int) to float - 1 << _bits = 1^8
}

int	Fixed::toInt(void) const {
	return (this->_fixedPointValue >> this->_bits);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &src) {
	o << src.toFloat();
	return (o);
}
