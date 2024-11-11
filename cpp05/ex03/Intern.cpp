/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:51:43 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/09/27 11:27:55 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &copy) {
	*this = copy;
}

Intern &Intern::operator = (const Intern &src) {
	(void)src;
	return (*this);
}

Intern::~Intern() {
}

AForm	*Intern::makeForm(std::string name, std::string target) {
	std::string nameForm[3] = {
		"Presidential",
		"Robotomy",
		"Shrubbery"
	};

	AForm* forms[3] = {
		new PresidentialPardonForm(target),
		new RobotomyRequestForm(target),
		new ShrubberyCreationForm(target)
	};
	
	for (int i = 0; i < 3; i++) {
		if (name == nameForm[i]) {
			std::cout << "Intern creates " << name << std::endl;
			return (forms[i]);
		}
	}
	std::cout << "Error! Intern failed creating " << name << std::endl;
	return (NULL);
}
