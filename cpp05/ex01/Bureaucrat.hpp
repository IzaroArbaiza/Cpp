/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:00:28 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/23 10:06:06 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;
class  Bureaucrat {
	private:
		const std::string	_name;
		int					_grade;
		
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat &operator = (const Bureaucrat &src);
		~ Bureaucrat();

		std::string	getName() const;
		int		getGrade() const;
		void	incrementGrade();
		void	decrementGrade();

		void signForm(Form &form);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return("The grade is too High!");
				}
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return("The grade is to low...");
				}
		};
};

std::ostream &operator << (std::ostream &o, const Bureaucrat &src);

#endif