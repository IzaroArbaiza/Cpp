/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 10:47:59 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/11/05 10:56:22 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0) {}

Span::Span(unsigned int N) : _N(N) {}

Span::Span(const Span &copy) {
	*this = copy;
}

Span &Span::operator = (const Span &src) {
	if (this != &src) {
		_span = src._span;
		_N = src._N;
	}
	return (*this);
}

Span::~Span() {}

void Span::addNumber(int num) {
	if (_span.size() >= _N) {
		throw Span::SpanFullException();
	}
	_span.push_back(num);
}

int Span::shortestSpan() const {
	if (_span.size() < 2) {
		throw SpanFullException();
	}

	std::vector<int> sortedSpan = _span;
	sort(sortedSpan.begin(), sortedSpan.end());
	
    int min = std::numeric_limits<int>::max();
	for (size_t i = 1; i < sortedSpan.size(); i++) {
		int current = sortedSpan[i] - sortedSpan[i - 1];
        min = std::min(min, current);
    }
	
	return (min);
}

int Span::longestSpan() const {
	if (_span.size() < 2) {
		throw SpanFullException();
	}

	std::vector<int> sortedSpan = _span;
    std::sort(sortedSpan.begin(), sortedSpan.end());
	
	return (sortedSpan.back() - sortedSpan.front());
}
