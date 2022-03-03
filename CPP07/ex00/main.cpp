/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:45:27 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/24 15:45:47 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
    float a = 42.03f;
    float b = 42.05f;

    int c = 42;
    int d = 43;

    char e = 'e';
    char f = 'f';

    /* ERRO CASE if the tow types are not the same */
    // double g = 42.04;
    // int h = 44;

    std::cout << "float a = 42.03f\nfloat b = 42.05f" << std::endl;
    std::cout << "Max value using max template function => "<< ::max(a, b) << std::endl;
    std::cout << "Min value using min template function => "<< ::min(a, b) << std::endl;
    std::cout << std::endl;
    std::cout << "float a = 42.03f\nfloat b = 42.05f" << std::endl;
    std::cout << "Using swap template function on a and b.." << std::endl;
    ::swap(a, b);
    std::cout << "float a = " << a << "\nfloat b = " << b << std::endl;

    std::cout << std::endl;
    std::cout << "int c = 42\nint d = 43" << std::endl;
    std::cout << "Max value using max template function => "<< ::max(c, d) << std::endl;
    std::cout << "Min value using min template function => "<< ::min(c, d) << std::endl;
    std::cout << std::endl;
    std::cout << "int c = 42\nint d = 43" << std::endl;
    std::cout << "Using swap template function on a and b.." << std::endl;
    ::swap(c, d);
    std::cout << "int c = " << c << "\nint d = " << d << std::endl;

    std::cout << std::endl;
    std::cout << "char e = e\nchar f = f" << std::endl;
    std::cout << "Max value using max template function => "<< ::max(e, f) << std::endl;
    std::cout << "Min value using min template function => "<< ::min(e, f) << std::endl;
    std::cout << std::endl;
    std::cout << "char e = e\nchar f = f" << std::endl;
    std::cout << "Using swap template function on a and b.." << std::endl;
    ::swap(e, f);
    std::cout << "char e = " << e << "\nchar f = " << f << std::endl;

    // std::cout << std::endl;
    // std::cout << "double g = 42.04\nint h = 44" << std::endl;
    // std::cout << "Max value using max template function => "<< ::max(g, h) << std::endl;
    // std::cout << "Min value using min template function => "<< ::min(g, h) << std::endl;
    // std::cout << std::endl;
    // std::cout << "double g = 42.04\nint h = 44" << std::endl;
    // std::cout << "Using swap template function on a and b.." << std::endl;
    // ::swap(g, h);
    // std::cout << "double g = " << g << "\nint h = " << h << std::endl;
}