/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:00:31 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/23 11:19:49 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	if (grade < 1) {
		throw GradeTooHighException();
	} else if (grade > 150) {
		throw GradeTooLowException();
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name) {
	this->_grade = copy._grade;
}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &src) {
	this->_grade = src.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat() {
}

std::string	Bureaucrat::getName() const {
	return(this->_name);
}

int	Bureaucrat::getGrade() const {
	return(this->_grade);
}

void	Bureaucrat::incrementGrade() {
	if (this->_grade - 1 < 1) {
		throw GradeTooHighException();
	}
	this->_grade--;
}

void	Bureaucrat::decrementGrade() {
	if (this->_grade + 1 > 150) {		
		throw GradeTooLowException();
	}
	this->_grade++;
}

void	Bureaucrat::signForm(Form &form) {
	try {
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	} catch(const std::exception& e) {
		std::cout << this->_name << " couldn't sign " << form.getName() << " because " << e.what() << "." << std::endl;
	}
	
}

std::ostream &operator << (std::ostream &o, const Bureaucrat &src) {
	o << src.getName() << ", bureaucrat grade " << src.getGrade() << ".";
	return(o);
}
