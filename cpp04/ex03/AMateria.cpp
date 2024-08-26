/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 10:22:29 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/20 17:44:06 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	this->_type = "";
	std::cout << "AMateria constructor created." << std::endl;
}

AMateria::AMateria(std::string const &type) {
	this->_type = type;
}

AMateria::AMateria(const AMateria &copy) {
	*this = copy;
}

AMateria::~AMateria() {
	std::cout << "AMateria " << this->_type << " destructor destoyed." << std::endl;
}

std::string const &AMateria::getType() const {
	return (this->_type);
}
		
AMateria *AMateria::clone() const {
	return(AMateria*)this;
}

void	AMateria::use(ICharacter &target) {
	std::cout << "AMateria " << this->_type << "used in" << target.getName() << "." << std::endl;
}
