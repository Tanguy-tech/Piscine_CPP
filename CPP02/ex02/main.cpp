/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:39:15 by tbillon           #+#    #+#             */
/*   Updated: 2022/01/31 08:42:06 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	{
		std::cout << "----------- TEST min --------------------" << std::endl;
		Fixed a(42);
		Fixed b(21);
		Fixed const c(42);
		Fixed const d(21);
		std::cout << "For this test, a = 42, b = 21, const c = 42 and const d = 21." << std::endl;
		std::cout << "min(a, b) : " << Fixed::min(a, b) << std::endl;
		std::cout << "min(c, d) : " << Fixed::min(c, d) << std::endl;
	}
	{
		std::cout << "----------- TEST max --------------------" << std::endl;	
		Fixed a(42);
		Fixed b(21);
		Fixed const c(42);
		Fixed const d(21);
		std::cout << "For this test, a = 42, b = 21, const c = 42 and const d = 21." << std::endl;
		std::cout << "max(a, b) : " << Fixed::max(a, b) << std::endl;
		std::cout << "max(c, d) : " << Fixed::max(c, d) << std::endl;
	}
	{
		std::cout << "----------- TEST bool -------------------" << std::endl;
		Fixed a(26);
		Fixed b(13);
		std::cout << "For this test, a = 26 and b = 13." << std::endl;
		std::cout << "a > b : " << (a > b) << std::endl;
		std::cout << "a < b : " << (a < b) << std::endl;
		std::cout << "a <= b : " << (a <= b) << std::endl;
		std::cout << "a >= b : " << (a >= b) << std::endl;
		std::cout << "a == b : " << (a == b) << std::endl;
		std::cout << "a != b : " << (a != b) << std::endl;
	}
	{
		std::cout << "----------- TEST operator overloads -----" << std::endl;
		Fixed a(26);
		Fixed b(13);
		std::cout << "For this test, a = 26 and b = 13." << std::endl;
		std::cout << "a to float : " << std::endl;
		printf("%f\n", a.toFloat());
		std::cout << "b to float : " << std::endl;
		printf("%f\n", b.toFloat());
		std::cout << "addition : " << a + b << std::endl;
		std::cout << "substraction : " << a - b << std::endl;
		std::cout << "multipication : " << a * b << std::endl;
		std::cout << "division : " << a / b << std::endl;
	}
	{
		Fixed a;
		Fixed const b( Fixed(5.05f) * Fixed( 2 ));
		std::cout << "----------- TEST Subject -----------------" << std::endl;
		std::cout << "For this test, const b = ( Fixed(5.05f) * Fixed( 2 ))." << std::endl;
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max(a, b) << std::endl;
	}
	return 0;
}