/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 10:02:00 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/07/11 17:47:01 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int argc, char *argv[]) {
	if (argc != 4) {
		std::cout << "Error: Invalid input!" << std::endl;
		return (1);
	} else {
		Sed	sed(argv[1]);
		sed.replace(argv[2], argv[3]);
	}
	return (0);
}