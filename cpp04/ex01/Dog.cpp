/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:38:35 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/23 15:51:09 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	this->_brain = new Brain();
	std::cout << this->_type << " created." << std::endl;
}

Dog::Dog(const Dog &copy) : Animal("Dog") {
	this->_brain = new Brain();
	*this = copy;
}

Dog	&Dog::operator = (const Dog &src) {
	this->_type = src._type;
	return (*this);
}

Dog::~Dog() {
	delete this->_brain;
	std::cout << this->_type << " destroyed." << std::endl;
}

void Dog::makeSound(void) const {
	std::cout << "¡¡Dog says Bark!!" << std::endl;
}
