/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:53:41 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/09/30 15:47:45 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 2) {
		std::cout << "Error, there must be 2 arguments." << std::endl;
		return (1);
	}
	ScalarConverter::convert(argv[1]);
	return (0);
}
