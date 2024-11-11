/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:58:30 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/09/27 11:05:19 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
	try {
		Bureaucrat bob("Bob", 2);
		bob.incrementGrade();
		bob.incrementGrade();
		//Form form("form", 2, 1);
		//bob.signForm(form);
	} catch(const std::exception& e) {
		std::cout << "Bob-> " << std::flush;
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	try {
		Bureaucrat pepe("Pepe", 25);
		Form form("form", 25, 2);
		
		pepe.signForm(form);
		pepe.signForm(form);

	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	
	try {
		Bureaucrat henry("Henry", 5);
		Form form("form", 4, 2);
		
		henry.signForm(form);
		henry.incrementGrade();
		std::cout << henry << std::endl;
		henry.signForm(form);

	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	try {
		Bureaucrat albert("Albert", 2);
		Form form("form", 150, 2);
		
		albert.signForm(form);

	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	
	return (0);
}
