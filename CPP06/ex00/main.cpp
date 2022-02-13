/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanguy <tanguy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 11:31:51 by tanguy            #+#    #+#             */
/*   Updated: 2022/02/13 11:58:41 by tanguy           ###   ########.fr       */
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
    retunr 0;
}