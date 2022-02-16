/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 08:34:55 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/16 10:05:47 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <list>

#define NO_SPAN "ERROR! No span can be found with one or less number only."
#define FULL_SPAN "ERROR! Span already full. Cannot add any more number."

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define DEFAULT "\033[0m"


class Span
{
    public:
        Span(unsigned int   N);
        ~Span();

        void    addNumber(int newNb);
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
        std::list<int> _lst;
};

#endif