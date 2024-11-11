/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:31:55 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/11/06 17:19:18 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>

class PmergeMe {
	private:
		std::vector<int> _vec;
		std::deque<int>	_deq;
		double	_timeVec;
		double	_timeDeq;
		
	public:
		PmergeMe(const std::vector<int> &nums);
		PmergeMe(const PmergeMe &copy);
		PmergeMe &operator = (const PmergeMe &src);
		~PmergeMe();

		void before() const;
		void after() const;
		void sortVector();
		void sortDeque();
		void sorting(std::vector<int> &vec);
		void sorting(std::deque<int> &deq);
		double getVectorTime() const;
		double getDequeTime() const;
};

#endif
