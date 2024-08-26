/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 10:01:45 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/07/05 18:11:09 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {
	std::string	input;
	Harl	harl;

	while (std::cin) {
		std::cout << "Enter one level: " << std::flush;
		std::cin >> input;
		if (std::cin.eof())
		{
			std::cout << "Caution you push Ctrl+D = eof" << std::endl;
			break ;
		}
		if (input != "EXIT") {
			harl.complain(input);
		} else {
			break;
		}
	}
	return (0);
}

/*int main(void) {
    Harl	harl;

    std::cout << "--- DEBUG LEVEL ---" << std::endl;
    harl.complain("DEBUG");
    std::cout << "--- INFO LEVEL ---" << std::endl;
    harl.complain("INFO");
    std::cout << "--- WARNING LEVEL ---" << std::endl;
    harl.complain("WARNING");
    std::cout << "--- ERROR LEVEL ---" << std::endl;
    harl.complain("ERROR");
    std::cout << "--- UNDEFINED ---" << std::endl;
    harl.complain("KAREN");
    return (0);
}*/