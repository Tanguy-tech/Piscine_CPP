/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:10:57 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/03 17:13:05 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap tang("Tang");
    ClapTrap greg("Greg");
    
    std::cout << tang.getName() << " and " << greg.getName() << " are present for this battle!" << std::endl;
    std::cout << tang.getName() << " starts the game! " << std::endl;
    tang.attack(greg.getName());
    greg.takeDamage(tang.default_AD);
    tang.displayStatus();
    greg.displayStatus();

    greg.beRepaired(25);
    greg.attack(tang.getName());
    tang.takeDamage(greg.default_AD);
    tang.displayStatus();
    greg.displayStatus();

    tang.beRepaired(17);
    tang.attack(greg.getName());
    greg.takeDamage(tang.default_AD);
    tang.displayStatus();
    greg.displayStatus();
    
    greg.attack(tang.getName());
    tang.takeDamage(greg.default_AD);
    tang.displayStatus();
    greg.displayStatus();

    std::cout << "Lets end this batlle before we get anyone or anyone else killed..!" << std::endl;
    std::cout << std::endl;
	return 0;
}