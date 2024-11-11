/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:31:38 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/10/28 16:34:06 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &copy) {
	*this = copy;
}

RPN &RPN::operator = (const RPN &src) {
	if (this != &src) {
		_stack = src._stack;
	}
	return (*this);
}

RPN::~RPN() {}

void RPN::start(const std::string &input) {
	for (size_t i = 0; i < input.length(); i++) {
		if (input[i] == ' ') {
			continue ;
		}
		char token = input[i];
		parse(token);
	}
	
	if (_stack.size() != 1) {
		std::cout << "Something went wrong." << std::endl;
		exit (1);
	}

	std::cout << _stack.top() << std::endl;
}

void RPN::parse(char input) {
	if (isdigit(input)) {
		_stack.push(input - '0');
	} else if (input == '+' || input == '-' || input == '*' || input == '/') {
		_stack.push(calc(input));
	} else {
		std::cout << "Error" << std::endl;
		exit (1);
	}
}

int RPN::calc(char input) {
	if (_stack.size() < 2) {
		std::cout << "Wrong amount of operators." << std::endl;
		exit (1);
	}
	int b = _stack.top();
	_stack.pop();

	int a = _stack.top();
	_stack.pop();

	if (input == '+') {
		return (add(a, b));
	} else if (input == '-') {
		return (sub(a, b));
	} else if (input == '*') {
		return (mult(a, b));
	} else if (input == '/') {
		return (div(a, b));
	}

	std::cout << "Error invalid operator" << std::endl;
	return (-1);
}

int RPN::add(int a, int b) {
	return (a + b);
}

int RPN::sub(int a, int b) {
	return (a - b);
}

int RPN::mult(int a, int b) {
	return (a * b);	
}

int RPN::div(int a, int b) {
	if (b == 0) {
		std::cout << "Not possible to divide by 0." << std::endl;
		exit (1);
	}
	return (a / b);
}
