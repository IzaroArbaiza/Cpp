/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 09:15:15 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/07/18 16:52:57 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	this->_fpv = 0;
}

Fixed::Fixed(const int num)	{
	this->_fpv = num << this->_bits;
}

Fixed::Fixed(const float num) {
	this->_fpv = (int)roundf(num * (1 << this->_bits));
}

Fixed::Fixed(const Fixed &copy) {
	this->setRawBits(copy.getRawBits());
}

Fixed &Fixed::operator = (const Fixed &src) {
	this->setRawBits(src.getRawBits());
	return (*this);
}

bool Fixed::operator > (const Fixed &src) const {
	if (this->_fpv > src._fpv)
		return (true);
	return (false);
}

bool Fixed::operator < (const Fixed &src) const {
	if (this->_fpv < src._fpv)
		return (true);
	return (false);
}

bool Fixed::operator >= (const Fixed &src) const {
	if (this->_fpv >= src._fpv)
		return (true);
	return (false);
}

bool Fixed::operator <= (const Fixed &src) const {
	if (this->_fpv <= src._fpv)
		return (true);
	return (false);
}

bool Fixed::operator == (const Fixed &src) const {
	if (this->_fpv == src._fpv)
		return (true);
	return (false);
}

bool Fixed::operator != (const Fixed &src) const {
	if (this->_fpv != src._fpv)
		return (true);
	return (false);
}

Fixed	Fixed::operator + (const Fixed &src) const {
	Fixed	sum;

	sum.setRawBits(this->getRawBits() + src.getRawBits());
	return (sum);
}

Fixed	Fixed::operator - (const Fixed &src) const {
	Fixed	sub;

	sub.setRawBits(this->_fpv - src._fpv);
	return (sub);
}

Fixed	Fixed::operator * (const Fixed &src) const {
	Fixed	multi;

	multi.setRawBits(this->_fpv * (src._fpv / (1 << this->_bits)));
	return (multi);
}

Fixed	Fixed::operator / (const Fixed &src) const {
	Fixed	div;
	
	if (src._fpv == 0) {
		std::cout << "A number can not be divided by 0" << std::endl;
		exit(1);
	}
	else
		div.setRawBits(this->_fpv / (src._fpv * (1 << this->_bits)));
	return (div);
}

Fixed	Fixed::operator ++ (void) {
	this->_fpv++;
	return (*this);
}

Fixed	Fixed::operator ++ (int) {
	Fixed tmp(*this);

	this->_fpv++;
	return (tmp);
}

Fixed	Fixed::operator -- (void) {
	this->_fpv--;
	return (*this);
}

Fixed	Fixed::operator -- (int) {
	Fixed tmp(*this);

	this->_fpv--;
	return (tmp);
}

Fixed	&Fixed::max(Fixed &src1, Fixed &src2) {
	if (src1 > src2)
		return (src1);
	return (src2);
}

const Fixed	&Fixed::max(const Fixed &src1, const Fixed &src2) {
	if (src1 > src2)
		return (src1);
	return (src2);
}

Fixed	&Fixed::min(Fixed &src1, Fixed &src2) {
	if (src1 < src2)
		return (src1);
	return (src2);
}

const Fixed	&Fixed::min(const Fixed &src1, const Fixed &src2) {
	if (src1 < src2)
		return (src1);
	return (src2);
}

Fixed::~Fixed() {
}

int	Fixed::getRawBits(void) const { 
	return (this->_fpv);
}

void	Fixed::setRawBits(int const raw) {
	this->_fpv = raw;
}

float	Fixed::toFloat(void) const {
	return (this->_fpv / (float)(1 << _bits));
}

int	Fixed::toInt(void) const {
	return (this->_fpv >> this->_bits);
}

Fixed Fixed::abs(void) const {
    Fixed result;
    if (this->_fpv < 0) {
        result.setRawBits(-this->_fpv);
    } else {
        result.setRawBits(this->_fpv);
    }
    return result;
}

std::ostream	&operator<<(std::ostream &o, Fixed const &src) {
	o << src.toFloat();
	return (o);
}
