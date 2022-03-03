/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 08:47:12 by tbillon           #+#    #+#             */
/*   Updated: 2022/03/01 14:14:39 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _N(N) {}

Span::Span(const Span &cpy) : _N(cpy._N), _vect(std::vector<int>(cpy._vect)) {}

Span::~Span() {}

void    Span::addNumber(int newNb)
{
    try {
        if(_vect.size() >= _N)
            throw FullSpanExcepetion();
        _vect.push_back(newNb);
    }
    catch (const Span::FullSpanExcepetion &e)
    {
        std::cout << RED << e.what() << DEFAULT << std::endl;
    }
}

void    Span::addMultipleRand(int nb_of_nb)
{
     try {
        if(_vect.size() >= _N)
            throw FullSpanExcepetion();
        srand(time(NULL));
        for (int i = 0; i < nb_of_nb; i++)
        {
            if(_vect.size() >= _N)
                throw FullSpanExcepetion();
            _vect.push_back(rand() % INT64_MAX);
            std::cout << _vect.back() << std::endl;
        }
    }
    catch (const Span::FullSpanExcepetion &e)
    {
        std::cout << RED << e.what() << DEFAULT << std::endl;
    }
}

int Span::longestSpan()
{
    try {
        if (_vect.size() <= 1)
            throw NoSpanException();
        return (*std::max_element(_vect.begin(), _vect.end()) - *std::min_element(_vect.begin(), _vect.end()));
    }
    catch (const Span::NoSpanException &e)
    {
        std::cout << RED << e.what() << DEFAULT << std::endl;
        return -1;
    }
}

int Span::shortestSpan()
{
    std::vector<int>  vect (_vect.begin(), _vect.end());
    unsigned int dist;
    try {

        if (_vect.size() <= 1)
            throw NoSpanException();
        std::sort(vect.begin(), vect.end());
        unsigned int shortest = _vect[1] - _vect[0];
        for (unsigned int i = 1; i < vect.size(); i++)
        {
            dist = vect[i] - vect[i - 1];
            if (dist < shortest)
                shortest = dist;
        }
        return (shortest);
    }
    catch (const Span::NoSpanException &e)
    {
        std::cout << RED << e.what() << DEFAULT << std::endl;
        return -1;
    }
}