/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 10:16:38 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/10/02 13:57:47 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int main(void)
{
	Data data;

	data._id = 56;
	data._name = "John";
	data._surname = "Smith";
	
	uintptr_t serialData = Serializer::serialize(&data);
	Data *deserialData = Serializer::deserialize(serialData);

	if (deserialData == &data) {
		std::cout << "ID:\t " << deserialData->_id << std::endl;
		std::cout << "Name:\t " < deserialData->_name << std::endl;
		std::cout << "Surname: " << deserialData->_surname << std::endl;
	} else {
		std::cout << "Deserialized data does not match the original data." << std::endl;
	}

	return (0);
}
