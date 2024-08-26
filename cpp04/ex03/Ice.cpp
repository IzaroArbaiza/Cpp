/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:59:17 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/19 15:45:28 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "* Ice constructor created." << std::endl;
}

Ice::Ice(const Ice &copy) : AMateria("ice") {
	*this = copy;
}

Ice	&Ice::operator = (const Ice &src) {
	this->_type = src._type;
	return (*this);
}

Ice::~Ice() {
	std::cout << "* Ice destructor destoyed." << std::endl;
}

AMateria *Ice::clone() const {
	return(new Ice(*this));
}

void	Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
