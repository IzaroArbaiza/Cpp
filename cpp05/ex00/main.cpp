/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:58:30 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/09/27 10:58:07 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	std::cout << "Bob" << std::endl;
	try {
		Bureaucrat bob("Bob", 2);
		std::cout << bob << std::endl;
		bob.incrementGrade();
		std::cout << bob << std::endl;
		bob.incrementGrade();
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "\nAlex" << std::endl;
	try {
		Bureaucrat alex("Alex", 152);
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "\nRalf" << std::endl;
	try {
		Bureaucrat ralf("Ralf", 72);
		std::cout << ralf << std::endl;
		ralf.incrementGrade();
		std::cout << ralf << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "\nSebastian" << std::endl;
	try {
		Bureaucrat sebastian("Sebastian", 148);
		sebastian.decrementGrade();
		std::cout << sebastian << std::endl;
		sebastian.decrementGrade();
		std::cout << sebastian << std::endl;
		sebastian.decrementGrade();
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
