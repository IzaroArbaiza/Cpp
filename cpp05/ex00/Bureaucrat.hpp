/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:00:28 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/09/27 10:50:16 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept> 

class  Bureaucrat {
	private:
		const std::string	_name;
		int					_grade;
		
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat &operator = (const Bureaucrat &src);
		~Bureaucrat();

		std::string	getName() const;
		int		getGrade() const;
		void	incrementGrade();
		void	decrementGrade();


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