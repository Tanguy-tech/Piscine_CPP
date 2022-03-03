/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 09:02:59 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/24 16:01:38 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	std::cout << "------ construction without parameters => empty ------" << std::endl;
    Array<int> a = Array<int>();
	for (unsigned int i = 0; i < a.size(); i++) {
		std::cout << a[i] << std::endl;
	}
    std::cout << std::endl;

	std::cout << "------ construction with parameters and size 3 ------" << std::endl;
	Array<char> b = Array<char>(3);
	b[0] = 'a';
	b[1] = 'b';
	b[2] = 'c';
	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << std::endl;
    std::cout << std::endl;

	std::cout << "------ construction by copy ------" << std::endl;
	Array<char> c = Array<char>(b);
	for (unsigned int i = 0; i < c.size(); i++)
		std::cout << c[i] << std::endl;
    std::cout << std::endl;

	std::cout << "------ construction by assignation ------" << std::endl;
	Array<std::string> str1 = Array<std::string>();
	Array<std::string> str2 = Array<std::string>(4);
	str2[0] = "Hello";
	str2[1] = "i'm";
	str2[2] = "tbillon";
	str2[3] = "!";

	str1 = str2;
	for (int i = 0; i < 4; i++)
		std::cout << str1[i] << " ";
	std::cout << std::endl << "Size = " << str1.size() << std::endl;
    std::cout << std::endl;

	std::cout << "------ test tentative d'acces a un element qui nexiste pas ------" << std::endl;
	try{
		a[80];
		b[80];
		c[80];
	}
	catch (std::exception & exception){
		std::cout << PINK << exception.what() << DEFAULT << std::endl;
		return 0;
	}

	return 0;
}