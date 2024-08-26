/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:17:32 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/20 16:55:20 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
    int i = 1;
    int j = 0;
    std::string str;

    while (i < argc)
    {
        //j = 0;
        while (argv[i][j])
        {
            if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
                str += std::toupper(argv[i][j]);
            else
                str += argv[i][j];
            j++;
        }
        //pone espacios cuando los argumentos no tienen comillas
        // if (i < argc - 1)
        //     str += " ";
        i++;
    }

    if (argc > 1)
        std::cout << str << std::endl;
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return 0;
}
