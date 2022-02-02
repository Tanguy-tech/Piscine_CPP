/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:33:31 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/01 15:36:46 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor with name parameter called" << std::endl;
	setHitPoints(100);
	setEnergyPoints(100);
	setDamage(30);
}

FragTrap::FragTrap(const FragTrap &cpy) : ClapTrap(getName())
{
    std::cout <<  "FragTrap copy constructor called" << std::endl;
    *this = cpy;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &rhs)
{
    std::cout << "Assignation operator FragTrap constructor called for " << rhs.getName() << std::endl;
	if (this != &rhs)
	{
		this->setHitPoints(rhs.getHitPoints());
		this->setEnergyPoints(rhs.getEnergyPoints());
		this->setDamage(rhs.getDamage());
		this->setName(rhs.getName());
	}
	return *this;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << this->getName() << " is now requesting a high five!" << std::endl;
}