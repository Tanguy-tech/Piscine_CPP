/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:00:27 by Tanguy            #+#    #+#             */
/*   Updated: 2022/01/24 14:57:34 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		for (int i = 1; i < ac; i++)
			for (int j = 0; j < (int)strlen(av[i]); j++)
				std::cout << (char)toupper(av[i][j]);
			std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}