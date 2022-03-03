/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:00:58 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/24 15:50:39 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int arr[5] = {1, 2, 3,4, 5};
    char carr[2] = {'h', 'i'};
    double arrdouble[5] = {42.01, 42.02, 42.03, 42.04, 42.05};

    std::cout << "Let's run the iter template function with an interger array of five indexes from 1 to 5:" << std::endl;
    iter(arr, 5, display);
    std::cout << std::endl;
    std::cout << "Now let's run the iter template function with an character array of tow chars:" << std::endl;
    iter(carr, 2, display);
    std::cout << std::endl;
    std::cout << "Finally let's run the iter template function with a double array of five double:" << std::endl;
    iter(arrdouble, 5, display);

    return (0);
}