/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:37:49 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/03 17:20:39 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap tang("Tang");
    FragTrap greg("Greg");
    
    std::cout << tang.getName() << " and " << greg.getName() << " are present for this battle!" << std::endl;
    std::cout << tang.getName() << " starts the game! " << std::endl;
    tang.attack(greg.getName());
    greg.takeDamage(12);
    tang.displayStatus();
    tang.highFivesGuys();
    greg.displayStatus();
    greg.highFivesGuys();

    greg.beRepaired(25);
    greg.attack(tang.getName());
    tang.takeDamage(13);
    tang.displayStatus();
    tang.highFivesGuys();
    greg.displayStatus();
    greg.highFivesGuys();

    tang.beRepaired(17);
    tang.attack(greg.getName());
    greg.takeDamage(9);
    tang.displayStatus();
    tang.highFivesGuys();
    greg.displayStatus();
    greg.highFivesGuys();
    
    greg.attack(tang.getName());
    tang.takeDamage(32);
    tang.displayStatus();
    tang.highFivesGuys();
    greg.displayStatus();
    greg.highFivesGuys();

    std::cout << "Lets end this batlle before we get anyone or anyone else killed..!" << std::endl;
    std::cout << std::endl;
	return 0;
}