/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:00:58 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/14 15:07:03 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int arr[5] = {1, 2, 3,4, 5};
    char carr[2] = {'h', 'i'};

    std::cout << "Let's run the iter template function with an interger array of five indexes from 1 to 5:" << std::endl;
    iter(arr, 5, display);
    std::cout << std::endl;
    std::cout << "Now let's run the iter template function with an character array of tow chars:" << std::endl;
    iter(carr, 2, display);

    return (0);
}