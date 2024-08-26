/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:37:44 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/19 14:55:26 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	this->_type = "Animal";
	std::cout << this->_type << " created." << std::endl;
}

Animal::Animal(std::string const &type) {
	this->_type = type;
}

Animal::Animal(const Animal &copy) {
	*this = copy;
}

Animal	&Animal::operator = (const Animal &src) {
	this->_type = src._type;
	return (*this);
}

Animal::~Animal() {
	std::cout <<"Animal destroyed." << std::endl;
}

std::string	Animal::getType(void) const {
	return (this->_type);
}

void	Animal::makeSound(void) const {
	std::cout << "An animal makes sound" << std::endl;
}
