/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:45:58 by tbillon           #+#    #+#             */
/*   Updated: 2022/01/25 16:49:22 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(void)
{
    Karen theBitch;

    theBitch.complain(std::string("debug"));
	std::cout << std::endl;

	theBitch.complain(std::string("info"));
	std::cout << std::endl;

    theBitch.complain(std::string("warning"));
	std::cout << std::endl;

	theBitch.complain(std::string("error"));
	std::cout << std::endl;
	return 0;
}