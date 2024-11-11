/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:31:52 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/11/06 17:47:06 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(const std::vector<int> &nums) {
	this->_timeDeq = 0;
	this->_timeVec = 0;

	_vec = std::vector<int>(nums.begin(), nums.end());
	_deq = std::deque<int>(nums.begin(), nums.end());
}

PmergeMe::PmergeMe(const PmergeMe &copy) {
	*this = copy;
}

PmergeMe &PmergeMe::operator = (const PmergeMe &src) {
	if (this != &src) {
		_vec = src._vec;
		_deq = src._deq;
	}
	return (*this);
}

PmergeMe::~PmergeMe() {}

void PmergeMe::before() const {
	std::cout << "Before: " << std::flush;
	for (size_t i = 0; i < _vec.size(); i++) {
		std::cout << _vec[i] << std::flush;
		if (i < _vec.size() - 1) {
			std::cout << " " << std::flush;	
		}
	}
	std::cout << std::endl;
}

void PmergeMe::after() const {
	std::cout << "After: " << std::flush;
	for (size_t i = 0; i < _vec.size(); i++) {
		std::cout << _vec[i] << std::flush;
		if (i < _vec.size() - 1) {
			std::cout << " " << std::flush;	
		}
	}
	std::cout << std::endl;
}

void PmergeMe::sortVector() {
	clock_t start = clock();
	sorting(_vec);
	clock_t end = clock();
	
	_timeVec = static_cast<double>(end - start) / CLOCKS_PER_SEC;
}

void PmergeMe::sortDeque() {
	clock_t start = clock();
	sorting(_deq);
	clock_t end = clock();
	
	_timeDeq = static_cast<double>(end - start) / CLOCKS_PER_SEC;
}

void PmergeMe::sorting(std::vector<int> &vec) {
    std::vector<int> large;
    std::vector<int> small;
    std::vector<int> tmp;

    if (vec.size() <= 1) {
        return;
    }

    for (size_t i = 0; i + 1 < vec.size(); i += 2) {
        if (vec[i] > vec[i + 1]) {
            large.push_back(vec[i]);
            small.push_back(vec[i + 1]);
        } else {
            large.push_back(vec[i + 1]);
            small.push_back(vec[i]);
        }
    }

    if (vec.size() % 2 != 0) {
        small.push_back(vec.back());
    }

    sorting(large);
    sorting(small);

    for (size_t i = 0; i < large.size(); i++) {
        tmp.push_back(large[i]);
    }

    for (size_t i = 0; i < small.size(); i++) {
        std::vector<int>::iterator it = tmp.begin();
        
        while (it != tmp.end() && *it < small[i]) {
            it++;
        }
        tmp.insert(it, small[i]);
    }
    vec = tmp;
}

void PmergeMe::sorting(std::deque<int> &dec) {
    std::deque<int> large;
    std::deque<int> small;
    std::deque<int> tmp;

    if (dec.size() <= 1) {
        return;
    }

    for (size_t i = 0; i + 1 < dec.size(); i += 2) {
        if (dec[i] > dec[i + 1]) {
            large.push_back(dec[i]);
            small.push_back(dec[i + 1]);
        } else {
            large.push_back(dec[i + 1]);
            small.push_back(dec[i]);
        }
    }

    if (dec.size() % 2 != 0) {
        small.push_back(dec.back());
    }

    sorting(large);
    sorting(small);

    for (size_t i = 0; i < large.size(); i++) {
        tmp.push_back(large[i]);
    }

    for (size_t i = 0; i < small.size(); i++) {
        std::deque<int>::iterator it = tmp.begin();
        
        while (it != tmp.end() && *it < small[i]) {
            it++;
        }
        tmp.insert(it, small[i]);
    }
    dec = tmp;
}

double PmergeMe::getVectorTime() const {
	return (this->_timeVec);
}

double PmergeMe::getDequeTime() const {
	return (this->_timeDeq);
}
