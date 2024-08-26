/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:03:03 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/19 15:45:21 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "* Cure constructor created." << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria("cure") {
	*this = copy;
}

Cure	&Cure::operator = (const Cure &src) {
	this->_type = src._type;
	return (*this);
}

Cure::~Cure() {
	std::cout << "* Cure destructor destoyed." << std::endl;
}

AMateria *Cure::clone() const {
	return(new Cure(*this));
}

void	Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
