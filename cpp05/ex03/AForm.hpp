/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:43:53 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/09/03 19:20:46 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;
class AForm {
	private:
		const std::string	_name;
		bool				_sig;
		const int			_sigGrade;
		const int			_exeGrade;
		
	public:
		AForm(const std::string &name, const int sigGrade, const int exeGrade);
		AForm(const AForm &src);
		AForm &operator = (const AForm &src);
		virtual ~AForm();

		std::string	getName() const;
		bool		getSign() const;
		int			getSigGrade() const;
		int			getExeGrade() const;
		void		beSigned(const Bureaucrat &bur);

		virtual void execute(Bureaucrat const & executor) const = 0;


		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return("the grade is too high");
				}
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return("the grade is to low");
				}
		};

		class FormNotSignedException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return("The form has not been signed.");
				}
		};
};

#endif