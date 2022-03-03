/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:46:37 by tbillon           #+#    #+#             */
/*   Updated: 2022/03/01 14:02:09 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::cout << "---------- Int Vector ----------" << std::endl;

	std::vector<int> intVector;

	for (int i = 0; i <= 40; i++)
		intVector.push_back(i);

	easyfind(intVector, 25);
    easyfind(intVector, 63);
	easyfind(intVector, 40);
	easyfind(intVector, 50);

	std::cout << "---------- Int List ----------" << std::endl;

	std::list<int> intList;

	for (int i = 0; i <= 40; i++) {
		intList.push_back(i);
	}

	easyfind(intList, 25);
    easyfind(intList, 63);
	easyfind(intList, 40);
	easyfind(intList, 50);

	return 0;
}