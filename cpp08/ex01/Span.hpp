/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 10:48:02 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/10/22 09:10:23 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <limits>
#include <algorithm>

class Span {
	private:
		unsigned int _N;
		std::vector<int> _span;
		
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &copy);
		Span &operator = (const Span &src);
		~Span();

		void addNumber(int num);
		int shortestSpan() const;
		int longestSpan() const;

		template <typename T>
		void addMoreNumber(T start, T end) {
			for (T i = start; i != end; ++i) {
				if (_span.size() >= _N) {
					throw Span::SpanFullException();
				}
				_span.push_back(*i);
			}
		}

		class SpanFullException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("The span is full, couldn't add more.");
				}
		};
};

#endif