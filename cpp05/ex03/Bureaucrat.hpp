/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:43:58 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/26 15:54:17 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "AForm.hpp"

class AForm;
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
		void	signForm(AForm &form);

		void	executeForm(AForm const & form) const;


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