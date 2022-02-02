/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:56:10 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/01 15:34:51 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap constructor with name parameter called" << std::endl;
	setHitPoints(100);
	setEnergyPoints(50);
	setDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap &cpy) : ClapTrap(getName())
{
    std::cout <<  "ScavTrap copy constructor called" << std::endl;
    *this = cpy;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &rhs)
{
    std::cout << "Assignation operator ScavTrap constructor called for " << rhs.getName() << std::endl;
	if (this != &rhs)
	{
		this->setHitPoints(rhs.getHitPoints());
		this->setEnergyPoints(rhs.getEnergyPoints());
		this->setDamage(rhs.getDamage());
		this->setName(rhs.getName());
	}
	return *this;
}

void	ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode"<< std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (getHitPoints() <= 0 || getEnergyPoints() <= 0)
		std::cout << "Does not have enough Hit points or Energy points to commit the attack." << std::endl;
	else
	{
		if (getDamage() <= 0)
			std::cout << "ScavTrap " << getName() << " attacks " << target << " but has no power... No damage is done" << std::endl;
		else
			std::cout << "ScavTrap " << getName() << " attacks " << target << " causing " << getDamage() << " points of damage.. OUÏE..!" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
	}
}