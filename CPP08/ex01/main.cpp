/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 09:35:40 by tbillon           #+#    #+#             */
/*   Updated: 2022/03/01 14:04:11 by tbillon          ###   ########.fr       */
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
    std::cout << "Shortest Span is : " << sp.shortestSpan() << std::endl;
    std::cout << "longest Span is : " << sp.longestSpan() << std::endl;
    std::cout << std::endl;

    Span sp2 = Span(10000);
    for (int i = 0; i < 10000; i++)
    {
        sp2.addNumber(rand());
    }
    std::cout << "Shortest Span is : " << sp2.shortestSpan() << std::endl;
    std::cout << "longest Span is : " << sp2.longestSpan() << std::endl;
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
    std::cout << "Shortest Span is : " << sp3.shortestSpan() << std::endl;
    std::cout << "longest Span is : " << sp3.longestSpan() << std::endl;
    std::cout << std::endl;

    Span sp4 = Span(6);
    sp4.addNumber(2);
    sp4.addNumber(3);
    sp4.addNumber(6);
    sp4.addNumber(4);
    sp4.addNumber(0);
    sp4.addNumber(-8);
    std::cout << "Shortest Span is : " << sp4.shortestSpan() << std::endl;
    std::cout << "longest Span is : " << sp4.longestSpan() << std::endl;
    std::cout << std::endl;

    Span sp6 = Span(12);
    sp6.addMultipleRand(16);
    std::cout << "Shortest Span is : " << sp6.shortestSpan() << std::endl;
    std::cout << "longest Span is : " << sp6.longestSpan() << std::endl;
    std::cout << std::endl;

    Span sp7 = Span(1);
    sp7.addNumber(3);
    std::cout << "Shortest Span is : " << sp7.shortestSpan() << std::endl;
    std::cout << "longest Span is : " << sp7.longestSpan() << std::endl;
    std::cout << std::endl;
    
    return 0;
}