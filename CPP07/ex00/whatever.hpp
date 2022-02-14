/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:24:15 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/14 14:54:24 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template< typename T >
void    swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template< typename T >
T const &min(T const &a, T const &b)
{
    return (a<b ? a : b);
}

template< typename T >
T const &max(T const &a, T const &b)
{
    return (a>b ? a : b);
}

#endif