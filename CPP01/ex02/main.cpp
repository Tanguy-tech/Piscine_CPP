/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:07:28 by tbillon           #+#    #+#             */
/*   Updated: 2022/01/27 16:43:55 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string	str = "HI THIS IS BRAIN";

	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "The memory address of the string variable = " << &str << std::endl;
	std::cout << "The memory address held by stringPTR = " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF = " << &stringREF << std::endl;
	std::cout << "----------------------------------------------------------" << std::endl;
	std::cout << "The value of the string variable = " << str << std::endl;
	std::cout << "The value of the string stringPTR = " << *stringPTR << std::endl;
	std::cout << "The value of the string stringREF = " << stringREF << std::endl;
}