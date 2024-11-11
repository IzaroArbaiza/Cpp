/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:31:42 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/10/28 12:11:22 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <cstdlib>

class RPN {
	private:
		std::stack<int> _stack;
		
	public:
		RPN();
		RPN(const RPN &copy);
		RPN &operator = (const RPN &src);
		~RPN();

		void start(const std::string &input);
		void parse(char input);
		int calc(char input);

		int add(int a, int b);
		int sub(int a, int b);
		int mult(int a, int b);
		int div(int a, int b);
};

#endif