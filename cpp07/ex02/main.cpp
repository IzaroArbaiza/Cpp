/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:49:06 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/10/03 11:09:40 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void) {
	Array<int> empty;
    std::cout << "Empty array size: " << empty.size() << std::endl;


    Array<int> tmp(5);
    std::cout << "Int array size: " << tmp.size() << std::endl;
    for (unsigned int i = 0; i < tmp.size(); i++) {
        tmp[i] = i * 2;
		std::cout << "tmp[" << i << "] = " << tmp[i] << std::endl;
    }
	std::cout << std::endl;

    Array<int> copied(tmp);
    copied[0] = 999;
    std::cout << "Original array tmp[0]: " << tmp[0] << std::endl;
    std::cout << "Copied array copied[0]: " << copied[0] << std::endl;

    return (0);
}





// #include <iostream>
// #include <ctime>
// #include <cstdlib>
// #include "Array.hpp"

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }
