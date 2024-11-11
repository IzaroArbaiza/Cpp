/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:51:46 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/27 17:50:24 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
	public:
		Intern();
		Intern(const Intern &copy);
		Intern &operator = (const Intern &src);
		~Intern();

		AForm	*makeForm(std::string name, std::string target);
};

#endif