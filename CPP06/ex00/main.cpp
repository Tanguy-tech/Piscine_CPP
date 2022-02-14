/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 11:31:51 by tanguy            #+#    #+#             */
/*   Updated: 2022/02/14 08:53:59 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int ac, char **av)
{
    /* check error function HERE */
    if (ac != 2)
    {
        std::cout << RED << ARGS << DEFAULT << std::endl;
        return -1;
    }
    else
    {
        Convert convert(av[1]);
        if (convert.isConvertible())
        {
            /* launch convert function HERE */
            convert.runConv();
        }
        else
        {
            std::cout << RED << NON_COMP_TYPE << DEFAULT << std::endl;
            return -1;
        }
    }
    return 0;
}