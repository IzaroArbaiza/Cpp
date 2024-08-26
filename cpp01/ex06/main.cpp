/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 10:01:29 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/07/11 10:53:51 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[]) {
	std::string	input;
	Harl	harl;
	
	if (argc != 2) {
		std::cout << "Wrong amount of arguments!" << std::endl;
		return (1);
	} else {
		harl.complain(argv[1]);
	}
	return (0);
}
