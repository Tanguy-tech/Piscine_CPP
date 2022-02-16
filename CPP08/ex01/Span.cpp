/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 08:47:12 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/16 10:12:12 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _N(N) {}

Span::~Span() {}

void    Span::addNumber(int newNb)
{
    try {
        if(this->_lst.size() >= _N)
            throw FullSpanExcepetion();
        this->_lst.push_back(newNb);
    }
    catch (const Span::FullSpanExcepetion &e)
    {
        std::cout << RED << e.what() << DEFAULT << std::endl;
    }
}

int Span::longestSpan()
{
    try {
        if (this->_lst.size() <= 1)
            throw NoSpanException();
        int i = this->_lst.front();
        int j = this->_lst.back() - i;
        return (j);
    }
    catch (const Span::NoSpanException &e)
    {
        std::cout << RED << e.what() << DEFAULT << std::endl;
        return -1;
    }
}

int Span::shortestSpan()
{
    try {
        std::list<int>::const_iterator  it = this->_lst.begin();
        std::list<int>::const_iterator  ite = it++;

        if (this->_lst.size() <= 1)
            throw NoSpanException();
        this->_lst.sort();
        int i = this->_lst.front();
        int j = *ite - i - 1;
        return (j);
        
    }
    catch (const Span::NoSpanException &e)
    {
        std::cout << RED << e.what() << DEFAULT << std::endl;
        return -1;
    }
}