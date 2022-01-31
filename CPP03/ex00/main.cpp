/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:10:57 by tbillon           #+#    #+#             */
/*   Updated: 2022/01/31 12:08:07 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap tang("Tang");
    ClapTrap greg("Greg");
    
    std::cout << tang.getName() << " and " << greg.getName() << " are present for this battle!" << std::endl;
    std::cout << tang.getName() << " starts the game! " << std::endl;
    tang.setDamage(3);
    std::cout << "he is very very very strong (3 damage points)!" << std::endl;
    tang.attack(greg.getName());
    greg.takeDamage(tang.getDamage());
    displayStatus(tang);
    displayStatus(greg);

    greg.setDamage(4);
    std::cout << "he is very very very VERY strong (4 damage points)!" << std::endl;
    greg.attack(tang.getName());
    tang.takeDamage(greg.getDamage());
    displayStatus(tang);
    displayStatus(greg);

    tang.setDamage(2);
    std::cout << "he is quite strong (2 damage points)!" << std::endl;
    tang.attack(greg.getName());
    greg.takeDamage(tang.getDamage());
    displayStatus(tang);
    displayStatus(greg);

    greg.setDamage(5);
    std::cout << "he is very very very VERY VERRRY strong (5 damage points)!" << std::endl;
    greg.attack(tang.getName());
    tang.takeDamage(greg.getDamage());
    displayStatus(tang);
    displayStatus(greg);
	return 0;
}