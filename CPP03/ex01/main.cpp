/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:05:50 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/02 08:48:54 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int	main(void)
{
    ScavTrap tang("Tang");
    ScavTrap greg("Greg");
    
    std::cout << tang.getName() << " and " << greg.getName() << " are present for this battle!" << std::endl;
    std::cout << tang.getName() << " starts the game! " << std::endl;
    tang.setDamage(3);
    std::cout << "he is very very very strong (3 damage points)!" << std::endl;
    tang.attack(greg.getName());
    greg.takeDamage(tang.getDamage());
    tang.displayStatus();
    greg.displayStatus();

    greg.setDamage(4);
    std::cout << "he is very very very VERY strong (4 damage points)!" << std::endl;
    greg.attack(tang.getName());
    tang.takeDamage(greg.getDamage());
    tang.displayStatus();
    greg.displayStatus();

    tang.setDamage(2);
    std::cout << "he is quite strong (2 damage points)!" << std::endl;
    tang.attack(greg.getName());
    greg.takeDamage(tang.getDamage());
    tang.displayStatus();
    greg.displayStatus();
    tang.guardGate();

    greg.setDamage(5);
    std::cout << "he is very very very VERY VERRRY strong (5 damage points)!" << std::endl;
    greg.attack(tang.getName());
    tang.takeDamage(greg.getDamage());
    tang.displayStatus();
    greg.displayStatus();
    greg.guardGate();
	return 0;
}