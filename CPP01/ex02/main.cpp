/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:07:28 by tbillon           #+#    #+#             */
/*   Updated: 2022/01/25 14:13:55 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string	str = "HI THIS IS BRAIN";

	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "Memory address of str = " << &str << std::endl;
	std::cout << "Memory address held by stringPTR = " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF = " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Memory address of str = " << str << std::endl;
	std::cout << "Memory address held by stringPTR = " << *stringPTR << std::endl;
	std::cout << "Memory address held by stringREF = " << stringREF << std::endl;
}