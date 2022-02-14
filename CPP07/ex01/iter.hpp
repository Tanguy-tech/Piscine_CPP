/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:56:03 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/14 15:05:18 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename IT>
void iter(IT *array, int len, void (*f)(IT const &))
{
    for (int i = 0; i < len; i++)
        (*f)(array[i]);
}

template< typename T >
void display(T const &x)
{
	std::cout << x << std::endl;
	return;
}

#endif