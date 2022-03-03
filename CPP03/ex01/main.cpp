/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:05:50 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/21 09:43:54 by tbillon          ###   ########.fr       */
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
    tang.attack(greg.getName());
    greg.takeDamage(20);
    tang.displayStatus();
    tang.guardGate();
    greg.displayStatus();

    greg.beRepaired(25);
    greg.attack(tang.getName());
    tang.takeDamage(20);
    tang.displayStatus();
    greg.displayStatus();
    greg.guardGate();

    tang.beRepaired(17);
    tang.attack(greg.getName());
    greg.takeDamage(20);
    tang.displayStatus();
    greg.displayStatus();
    
    greg.attack(tang.getName());
    tang.takeDamage(20);
    tang.displayStatus();
    greg.displayStatus();

    std::cout << "Lets end this batlle before we get anyone or anyone else killed..!" << std::endl;
    std::cout << std::endl;
	return 0;
}