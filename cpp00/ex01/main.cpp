/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 09:24:51 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/06/27 13:02:39 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	PhoneBook book;
	std::string str;

	book.welcome();
	while (std::cin)
	{
		//std::getline(std::cin, str); otra opción
		std::cout << "$ " << std::flush;
		std::cin >> str;
		if (std::cin.eof()) //if eof/ctrl+D terminate
		{
			std::cout << "Caution you push Ctrl+D = eof" << std::endl;
			break;
		}
		if (str == "ADD")
			book.addContact();
		else if (str == "SEARCH")
		{
			book.printContacts();
			book.searchContact();
		}
		else if (str == "EXIT")
			break;
		else
			std::cout << "Invalid command, choose another one" << std::endl;
	}
	std::cout << "Bye, see you!!" << std::endl;
	return 0;
}
