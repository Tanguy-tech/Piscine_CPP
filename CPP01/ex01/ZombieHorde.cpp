/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:45:10 by tbillon           #+#    #+#             */
/*   Updated: 2022/01/24 17:02:00 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N < 1)
        return NULL;
    Zombie* zomb = new Zombie[N];
    for (int i = 0; i < N; i++)
        zomb[i].setname(name); 
    return zomb;
}