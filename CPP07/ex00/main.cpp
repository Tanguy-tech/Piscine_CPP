/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:45:27 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/14 14:54:00 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
    float a = 42.03f;
    float b = 42.05f;

    std::cout << "float a = 42.03f\nfloat b = 42.05f" << std::endl;
    std::cout << "Max value using max template function => "<< ::max(a, b) << std::endl;
    std::cout << "Min value using min template function => "<< ::min(a, b) << std::endl;
    std::cout << "float a = 42.03f\nfloat b = 42.05f" << std::endl;
    std::cout << "Using swap template function on a and b.." << std::endl;
    ::swap(a, b);
    std::cout << "a = " << a << "\nb = " << b << std::endl;
}