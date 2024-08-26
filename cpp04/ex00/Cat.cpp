/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:38:30 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/12 09:44:47 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << this->_type << " constructor created." << std::endl;
}

Cat::~Cat() {
	std::cout << this->_type << " destroyed." << std::endl;
}

void Cat::makeSound(void) const {
	std::cout << "Cat says Meow!" << std::endl;
}
