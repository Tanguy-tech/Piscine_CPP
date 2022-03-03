/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 08:34:55 by tbillon           #+#    #+#             */
/*   Updated: 2022/03/01 14:10:27 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>
#include <iterator>

#define NO_SPAN "ERROR! No span can be found with one or less number only in the span."
#define FULL_SPAN "ERROR! Span already full. Cannot add any more number."

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define DEFAULT "\033[0m"


class Span
{
    public:
        Span(unsigned int   N);
        Span(const Span &cpy);
        Span &operator=(const Span &rhs);
        ~Span();

        void    addNumber(int newNb);
        void    addMultipleRand(int nb_of_nb);
        int     shortestSpan();
        int     longestSpan();

        class NoSpanException : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return NO_SPAN;
                }
        };

        class FullSpanExcepetion : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return FULL_SPAN;
                }
        };

    private:
        Span();
        unsigned int     _N;
        std::vector<int> _vect;
};

#endif