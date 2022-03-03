/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 08:34:20 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/21 09:59:49 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap tang("Tang");
    DiamondTrap greg("Greg");
    
    tang.whoAmI();
    greg.whoAmI();
    std::cout << tang.getName() << " starts the game! " << std::endl;
    tang.attack(greg.getName());
    greg.takeDamage(30);
    tang.displayStatus();
    tang.highFivesGuys();
    greg.displayStatus();
    greg.highFivesGuys();

    greg.beRepaired(25);
    greg.attack(tang.getName());
    tang.takeDamage(30);
    tang.displayStatus();
    tang.highFivesGuys();
    greg.displayStatus();
    greg.highFivesGuys();

    tang.beRepaired(17);
    tang.attack(greg.getName());
    greg.takeDamage(30);
    tang.displayStatus();
    tang.highFivesGuys();
    greg.displayStatus();
    greg.highFivesGuys();
    
    greg.attack(tang.getName());
    tang.takeDamage(30);
    tang.displayStatus();
    tang.highFivesGuys();
    greg.displayStatus();
    greg.highFivesGuys();

    std::cout << "Lets end this batlle before we get anyone or anyone else killed..!" << std::endl;
    std::cout << std::endl;
	return 0;
}