/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:44:01 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/09/27 11:10:17 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
	
	try {
		Bureaucrat bob("bob", 2);
        ShrubberyCreationForm Shrubbery("Shrubbery");
        RobotomyRequestForm Robot("Robot");
        PresidentialPardonForm President("President");

        std::cout << " * " << std::flush;
        bob.signForm(Shrubbery);
        bob.executeForm(Shrubbery);
        
        std::cout << " * " << std::flush;
        bob.signForm(Robot);
        bob.executeForm(Robot);
        bob.executeForm(Robot);

        std::cout << " * " << std::flush;
        bob.signForm(President);
        bob.executeForm(President);
		
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
    std::cout << std::endl;
    try {
		Bureaucrat bob("bob", 145);
        ShrubberyCreationForm Shrubbery("Shrubbery");
        RobotomyRequestForm Robot("Robot");
        PresidentialPardonForm President("President");

        std::cout << " * " << std::flush;
        bob.signForm(Shrubbery);
        bob.executeForm(Shrubbery);
        
        std::cout << " * " << std::flush;
        bob.signForm(Robot);
        bob.executeForm(Robot);

        std::cout << " * " << std::flush;
        bob.signForm(President);
        bob.executeForm(President);
		
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
