/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:35:18 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/09/03 19:20:11 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string &name, int sigGrade, int exeGrade) : _name(name), _sigGrade(sigGrade), _exeGrade(exeGrade) {
	if (this->_sigGrade < 1 || this->_exeGrade < 1) {
		throw GradeTooHighException();
	} else if (this->_sigGrade > 150 || this->_exeGrade > 150) {
		throw GradeTooLowException();
	}
}

Form::Form(const Form &copy) : _name(copy.getName()), _sigGrade(copy.getSigGrade()), _exeGrade(copy.getExeGrade()) {
}

Form &Form::operator = (const Form &src) {
	this->_sig = src.getSign();
	return (*this);
}

Form::~Form() {
}

std::string	Form::getName() const {
	return(this->_name);
}

bool	Form::getSign() const {
	return(this->_sig);
}

int	Form::getSigGrade() const {
	return(this->_sigGrade);
}

int	Form::getExeGrade() const {
	return(this->_exeGrade);
}

void	Form::beSigned(const Bureaucrat &bur) {
	if (bur.getGrade() > this->_sigGrade) {
		throw GradeTooHighException();
	} else if (bur.getGrade() < this->_sigGrade) {
		throw GradeTooLowException();
	}
	this->_sig = true;
}
