/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:38:35 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/12 09:44:50 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << this->_type << " constructor created." << std::endl;
}

Dog::~Dog() {
	std::cout << this->_type << " destroyed." << std::endl;
}

void Dog::makeSound(void) const {
	std::cout << "Dog says Bark!" << std::endl;
}
