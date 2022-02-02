/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:37:49 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/02 08:50:15 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap tang("Tang");
    FragTrap greg("Greg");
    
    std::cout << tang.getName() << " and " << greg.getName() << " are present for this battle!" << std::endl;
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
	return 0;
}