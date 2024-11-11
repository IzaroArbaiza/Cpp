/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:35:21 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/09/03 19:20:08 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;
class Form {
	private:
		const std::string	_name;
		bool				_sig;
		const int			_sigGrade;
		const int			_exeGrade;
		
	public:
		Form(const std::string &name, const int sigGrade, const int exeGrade);
		Form(const Form &src);
		Form &operator = (const Form &src);
		~Form();

		std::string	getName() const;
		bool		getSign() const;
		int			getSigGrade() const;
		int			getExeGrade() const;
		void		beSigned(const Bureaucrat &bur);
		

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
};

#endif