/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:48:40 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/12 09:56:45 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << this->_type << " constructor created." << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << this->_type << " destroyed." << std::endl;
}

void WrongCat::makeSound(void) const {
	std::cout << "Wrong cat says meow" << std::endl;
}
