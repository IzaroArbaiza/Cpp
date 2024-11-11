/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:44:01 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/28 10:57:32 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void) {
	{
		Intern	someRandomIntern;
		AForm*	rrf;
		
		rrf = someRandomIntern.makeForm("Presidential", "Bob");
        rrf = someRandomIntern.makeForm("Robotomy", "Bob");
		rrf = someRandomIntern.makeForm("Shrubbery", "Bob");
		rrf = someRandomIntern.makeForm("Schizophrenic", "Bob");
		delete rrf;
	}
	
	return (0);
}
