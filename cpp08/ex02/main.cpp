/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:58:29 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/10/22 12:41:27 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main() {
    MutantStack<int> mstack;

    mstack.push(5);		//[5]
    mstack.push(17);	//[5, 17]

    std::cout << mstack.top() << std::endl;

    mstack.pop();

    std::cout << mstack.size() << std::endl;

    mstack.push(3);		//[5, 3]
    mstack.push(5);		//[5, 3, 5]
    mstack.push(737);	//[5, 3, 5, 737]
    mstack.push(0);		//[5, 3, 5, 737, 0]

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
    
    //std::stack<int> s(mstack); ??

    return (0);
}

/**
 * Order of the stack according to the main:
 * 
 * 1- [5]
 * 2- [5, 17]
 * print 17
 * erase 17
 * print stack.size()
 * 3- [5, 3]
 * 4- [5, 3, 5]
 * 5- [5, 3, 5, 737]
 * 6- [5, 3, 5, 737, 0]
 * print the rest [5, 3, 5, 737, 0]
 * 
 * Final print:
 * 17
 * 1
 * 5
 * 3
 * 5
 * 737
 * 0
 * 
 */