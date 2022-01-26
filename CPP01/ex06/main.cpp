/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 09:57:11 by tbillon           #+#    #+#             */
/*   Updated: 2022/01/26 10:05:16 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av)
{
    Karen   theBitch;

    if (ac != 2)
    {
        std::cout << ARGS_ERR << std::endl;
        return 1;
    }
    std::string lvlcode[] = {std::string("DEBUG"),
                                std::string("INFO"),
                                std::string("WARNING"),
                                std::string("ERROR")};
    for (int i = 0; i < 4; i++)
    {
        if (av[1] == lvlcode[i])
        {
            while (i < 4)
            {
                theBitch.complain(lvlcode[i]);
                i++;
            }
            return 0;
        }
    }
    std::cout << WRONG_CODE << std::endl;
    return 1;
}