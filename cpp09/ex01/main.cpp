/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:31:32 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/11/06 15:20:30 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char const *argv[]) {
	try {
		if (argc == 2) {
			RPN rpn;
			
			rpn.start(argv[1]);
		} else {
			std::cout << "Invalid amount of arguments." << std::endl;
			return (1);
		}	
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}

