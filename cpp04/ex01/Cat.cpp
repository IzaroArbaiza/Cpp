/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:38:30 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/23 15:50:40 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	this->_brain = new Brain();
	std::cout << this->_type << " created." << std::endl;
}

Cat::Cat(const Cat &copy) : Animal("Cat") {
	this->_brain = new Brain();
	*this = copy;
}

Cat	&Cat::operator = (const Cat &src) {
	this->_type = src._type;
	return (*this);
}

Cat::~Cat() {
	delete this->_brain;
	std::cout << this->_type << " destroyed." << std::endl;
}

void Cat::makeSound(void) const {
	std::cout << "¡¡Cat says Meow!!" << std::endl;
}
