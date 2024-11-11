/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:53:48 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/09/10 19:24:57 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib> //for atof
#include <climits> //for INT_MAX & INT_MIN
#include <cstring> //for strcpy

class ScalarConverter {
	private:
		ScalarConverter(); //to prevent instantation
		~ScalarConverter();
		
	public:
		static void	convChar(const std::string &num);
		static void	convInt(int value);
		static void	convFloat(float value);
		static void	convDouble(double value);

		static void convert(const std::string &num);
};

#endif