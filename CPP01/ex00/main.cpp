/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:31:16 by tbillon           #+#    #+#             */
/*   Updated: 2022/01/27 16:40:06 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie zomb = Zombie("Génépi");
    zomb.announce();

    Zombie* zomb2 = newZombie("Chartreuse");
    zomb2->announce();

    randomChump("Verveine");

    delete zomb2;
    return 0;
}