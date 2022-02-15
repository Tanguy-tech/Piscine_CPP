/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:38:43 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/15 15:50:42 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define DEFAULT "\033[0m"

#define FOUND " found in container."
#define NOT_FOUND " couldn't be found in container."

template< typename T>

int easyfind(T container, int   to_find)
{
    typename T::const_iterator  it;
    typename T::const_iterator  ite = container.end();

    for (it = container.begin(); it != ite; it++)
    {
        if (*it == to_find)
        {
            std::cout << GREEN << "Occurence " << to_find << FOUND << DEFAULT << std::endl;
            return 0;
        }
    }
    std::cout << RED << "Occurence " << to_find << NOT_FOUND << DEFAULT << std::endl;
    return -1;
} 

#endif