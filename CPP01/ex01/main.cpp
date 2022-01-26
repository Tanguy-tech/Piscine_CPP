/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:57:56 by tbillon           #+#    #+#             */
/*   Updated: 2022/01/24 17:00:31 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int N;
    Zombie* Horde;

    N = 10;
    Horde = zombieHorde(N, "vin_chaud");
    for (int i = 0; i < N; i++)
        Horde[i].announce();
    delete []Horde;
    return 0;
}