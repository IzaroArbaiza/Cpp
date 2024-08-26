/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 09:22:16 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/06/28 14:52:23 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() {
}

PhoneBook::~PhoneBook() {
}

void	PhoneBook::welcome(void) const {
	std::cout << std::endl;
	std::cout << " Welcome to a crappy awesome PhoneBook \n" << std::endl;
	std::cout << std::endl;
	std::cout << "------------------ Usage ------------------" << std::endl;
	std::cout << "- ADD :\t\t Add a contact.           -" << std::endl;
	std::cout << "- SEARCH :\t Search for a contact.    -" << std::endl;
	std::cout << "- EXIT :\t Exit the PhoneBook.      -" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << std::endl;
}

void    PhoneBook::addContact(void) {
    static int  i;
    this->_contac[i % 8].init();
    this->_contac[i % 8].setIndex(i % 8);
    i++;
}

void	PhoneBook::printContacts(void) const {
	int	i;
	
	i = 0;
	std::cout <<"----------- PhoneBook Contacts -------------" << std::endl;
	while (i < 8) {
		this->_contac[i].viewContacts(i);
		i++;
	}
	std::cout <<"--------------------------------------------" << std::endl;
	std::cout << std::endl;
}

int	PhoneBook::_readInput() const{
	int		input;
	bool	valid;

	input = -1;
	valid = false;
	while (!valid) {
		std::cout << "Enter the index of a contact: " << std::flush;
		std::cin >> input;
		if (std::cin.eof())
		{
			std::cout << "Caution you push Ctrl+D = eof" << std::endl;
			valid = false;
			break;
		}
		if ((input >= 0 && input <= 8) && std::cin.good())
			valid = true;
		else if (!(input >= 0 && input <= 8)){
			std::cin.clear();
			std::cout << "Invalid index, please enter a number betwen 0 and 9" << std::endl;
		}
		else {
			std::cout << "Something went wrong" << std::endl;
			break;
		}
	}
	return (input);
}

void	PhoneBook::searchContact(void) const {
	int	i;

	i = this->_readInput();
	this->_contac[i].showContact(i);
}

