/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 08:34:20 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/02 08:50:28 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap tang("Tang");
    DiamondTrap greg("Greg");
    
    std::cout << "Lets present our selfs!" << std::endl;
    tang.whoAmI();
    greg.whoAmI();
    std::cout << tang.getName() << " starts the game! " << std::endl;
    tang.setDamage(3);
    std::cout << "he is very very very strong (3 damage points)!" << std::endl;
    tang.attack(greg.getName());
    greg.takeDamage(tang.getDamage());
    tang.displayStatus();
    tang.highFivesGuys();
    greg.displayStatus();
    greg.highFivesGuys();

    greg.setDamage(4);
    std::cout << "he is very very very VERY strong (4 damage points)!" << std::endl;
    greg.attack(tang.getName());
    tang.takeDamage(greg.getDamage());
    tang.displayStatus();
    tang.highFivesGuys();
    greg.displayStatus();
    greg.highFivesGuys();

    tang.setDamage(2);
    std::cout << "he is quite strong (2 damage points)!" << std::endl;
    tang.attack(greg.getName());
    greg.takeDamage(tang.getDamage());
    tang.displayStatus();
    tang.highFivesGuys();
    tang.guardGate();
    greg.displayStatus();
    greg.highFivesGuys();

    greg.setDamage(5);
    std::cout << "he is very very very VERY VERRRY strong (5 damage points)!" << std::endl;
    greg.attack(tang.getName());
    tang.takeDamage(greg.getDamage());
    tang.displayStatus();
    tang.highFivesGuys();
    greg.displayStatus();
    greg.highFivesGuys();
    greg.guardGate();
	return 0;
}