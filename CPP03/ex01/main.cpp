/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:05:50 by tbillon           #+#    #+#             */
/*   Updated: 2022/01/31 16:53:05 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int	main(void)
{
    ScavTrap *u1 = new ScavTrap("Heuss");
	ScavTrap *u2 = new ScavTrap("SCH");
	u1->attack("SCH");
	u2->takeDamage(20);
	std::cout << "Kill test : ";
	u2->takeDamage(1000);
	u2->beRepaired(1000);
	ScavTrap u3;
	u3 = *u2;
	u3.takeDamage(50);
	ScavTrap u4(u3);
	u4.beRepaired(1);
	u4.guardGate();
	delete (u1);
	delete (u2);
	return(0);
}