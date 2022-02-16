/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 09:35:40 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/16 10:14:36 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    std::cout << std::endl;

    Span sp2 = Span(10000);
    for (int i = 0; i < 10000; i++)
    {
        sp2.addNumber(rand());
    }
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;
    std::cout << std::endl;

    Span sp3 = Span(10);
    sp3.addNumber(2);
    sp3.addNumber(78);
    sp3.addNumber(23);
    sp3.addNumber(52);
    sp3.addNumber(42);
    sp3.addNumber(1);
    sp3.addNumber(890);
    sp3.addNumber(34);
    sp3.addNumber(12);
    sp3.addNumber(4);
    std::cout << sp3.shortestSpan() << std::endl;
    std::cout << sp3.longestSpan() << std::endl;
    
    return 0;
}