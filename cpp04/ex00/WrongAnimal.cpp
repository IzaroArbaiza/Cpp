/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:31:37 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/19 14:41:43 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	this->_type = "WrongAnimal";
	std::cout << this->_type << " constructor created." << std::endl;
}

WrongAnimal::WrongAnimal(std::string const &type) {
	this->_type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
	*this = copy;
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &src) {
	this->_type = src._type;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << this->_type << " destroyed." << std::endl;
}

std::string WrongAnimal::getType(void) const {
	return (this->_type);
}

void WrongAnimal::makeSound(void) const {
	std::cout << "Wrong animal makes noise" << std::endl;
}
