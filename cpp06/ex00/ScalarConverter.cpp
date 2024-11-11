/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:53:45 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/10/02 11:09:59 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

void	ScalarConverter::convChar(const std::string &num) {
	double value = atof(num.c_str());

	if (num == "nan" || num == "inf" || num == "+inf" || num == "-inf"
		|| num == "nanf" || num == "inff" || num == "+inff" || num == "-inff") {
		std::cout << "char: impossible" << std::endl;
	} else if (!std::isdigit(static_cast<unsigned char>(num[0]))) {
		std::cout << "char: '" << num << "'" << std::endl;
		value = static_cast<double>(num[0]);
	}

	if (static_cast<int>(value) == value) {
		std::cout << "int: " << static_cast<int>(value) << std::endl;
		std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
		std::cout << "double: " << value << ".0" << std::endl;
	} else {
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
		std::cout << "double: " << value << std::endl;
	}
}

void	ScalarConverter::convInt(int value) {
	if (isprint(static_cast<char>(value))) {
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl; 
	} else {
		std::cout << "char: Non displayable" << std::endl;
	}

	std::cout << "int: " << value << std::endl;
	std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;
}

void	ScalarConverter::convFloat(float value) {
	if (isprint(static_cast<char>(value))) {
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl; 
	} else {
		std::cout << "char: Non displayable" << std::endl;
	}
	
	if (static_cast<int>(value) > INT_MIN && static_cast<int>(value) < INT_MAX) {
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	} else {
		std::cout << "int: impossible" << std::endl;
	}
	
	if (static_cast<int>(value) == value) {
		std::cout << "float: " << value << ".0f" << std::endl;
	} else {
		std::cout << "float: " << value << "f" << std::endl;
	}
	
	if (static_cast<int>(value) == value) {
		std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;
	} else {
		std::cout << "double: " << static_cast<double>(value) << std::endl;
	}
}

void	ScalarConverter::convDouble(double value) {
	if (isprint(static_cast<char>(value))) {
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl; 
	} else {
		std::cout << "char: Non displayable" << std::endl;
	}
	
	if (static_cast<int>(value) > INT_MIN && static_cast<int>(value) < INT_MAX) {
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	} else {
		std::cout << "int: impossible" << std::endl;
	}

	if (static_cast<int>(value) == value) {
		std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
	} else {
		std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
	}
	
	if (static_cast<int>(value) == value) {
		std::cout << "double: " << value << ".0" << std::endl;
	} else {
		std::cout << "double: " << value << std::endl;
	}
}

void	ScalarConverter::convert(const std::string &num) {
	//std::cout << "Input:\t" << num << std::endl;std::cout << std::endl;
	bool	isInteger = false;
    bool	hasDecimal = false;
    bool	endsWithF = false;
    
	if (!num[0]) {
		std::cout << "Not a valid argument" << std::endl;
		return ;
	}
	for (int i = 0; isdigit(num[i]); i++) {
		isInteger = true;
	}
    for (size_t i = 0; i < num.length(); ++i) {
        if (num[i] == '.') {
            hasDecimal = true;
        } else if (num[i] == 'f' && i == num.length() - 1) {
            endsWithF = true;
        } else if (!isdigit(num[i])) {
            isInteger = false;
            break;
        }
    }

	//Check for non valid character ()
	if (num.length() > 1 &&(!isdigit(static_cast<int>(num[0])) && (num[0] > 32 && num[0] < 127 ))
		&& num != "nan" && num != "inf" && num != "+inf" && num != "-inf"
		&& num != "nanf" && num != "inff" && num != "+inff" && num != "-inff") {
		std::cout << "Non valid characters." << std::endl;
		return ;
	} else {
		//Check for leter (character between a and z, and, A and Z)
		if (!isdigit(static_cast<int>(num[0])) && (num[0] > 32 && num[0] < 127 )) {
			convChar(num);
			return ;
		} 
		//Check for integer (only digits, no decimal, no 'f')
		else if (isInteger && !hasDecimal && !endsWithF) {
			int valInt = atoi(num.c_str());
			if (static_cast<int>(valInt) > INT_MIN && static_cast<int>(valInt) < INT_MAX) {
				convInt(valInt);
			}
			return ;
		}
		//Check for float (only digits and ends with 'f')
		else if (isInteger && endsWithF) {
			float valFloat = atof(num.c_str());
			convFloat(valFloat);
			return ;
		}
		//Check for double (only digits, a decimal but does not end with 'f')
		else if (isInteger && hasDecimal && !endsWithF) {
			double valDouble = atof(num.c_str());
			convDouble(valDouble);
			return ;
		} else {
			std::cout << "Non valid characters." << std::endl;
			return ;
		}
	}
}
