/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 09:22:02 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/06/28 13:51:20 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

Contact::Contact() {
}

Contact::~Contact() {
}

std::string	Contact::_getInput(std::string str) const {
	bool valid;
	std::string	input = "";
	
	valid = false;
	while (!valid)
	{
		std::cout << str << std::flush;
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << "Caution you push Ctrl+D = eof" << std::endl;
			valid = false;
			break;
		}
		if (!input.empty() && std::cin.good())
			valid = true;
		else if (input.empty()){
			std::cin.clear();
			std::cout << "Invalid input" << std::endl;
		}
		else {
			std::cout << "Something went wrong" << std::endl;
			break;
		}
	}
	return (input);
}

void	Contact::init(void) {
	std::cin.ignore();
	this->_firstName = this->_getInput("Enter your first name: ");
	this->_lastName = this->_getInput("Enter your last name: ");
	this->_nickname = this->_getInput("Enter your nickname: ");
	this->_phoneNumber = this->_getInput("Enter your phone number: ");
	this->_darkestSecret = this->_getInput("Enter your darkest secret... ");
	std::cout << std::endl;
}

void	Contact::setIndex(int i) {
	this->_index = i;
}

std::string	Contact::_adjustLen(std::string str) const {
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	Contact::viewContacts(int index) const {
	if (this->_firstName.empty() || this->_lastName.empty() || this->_nickname.empty())
 		return ;
	std::cout << "|" << index << std::setw(9) << std::flush;
	std::cout << "|" << std::setw(10) << this->_adjustLen(this->_nickname) << std::flush;
	std::cout << "|" << std::setw(10) << this->_adjustLen(this->_firstName) << std::flush;
	std::cout << "|" << std::setw(10) << this->_adjustLen(this->_lastName) << std::flush;
	std::cout << "|" << std::endl;
}

void	Contact::showContact(int index) const {
	if (this->_firstName.empty() || this->_lastName.empty() || this->_nickname.empty())
		return ;
	std::cout << "-------------- Contact Nº #" << index << " ---------------" <<std::endl;
	std::cout << "First Name: \t\t" << this->_firstName << std::endl;
	std::cout << "Last Name: \t\t" << this->_lastName << std::endl;
	std::cout << "Nickname: \t\t" << this->_nickname << std::endl;
	std::cout << "Phone Number: \t\t" << this->_phoneNumber << std::endl;
	std::cout << "Darkest secret 😈: \t" << this->_darkestSecret << std::endl;
	std::cout << std::endl;
}
