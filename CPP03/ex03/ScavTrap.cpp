/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:56:10 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/04 10:14:30 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("default", scav_HP, scav_EP, scav_AD)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, scav_HP, scav_EP, scav_AD)
{
    std::cout << "ScavTrap constructor with name parameter called" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &rhs)
{
    std::cout << "Assignation operator ScavTrap constructor called for " << rhs._name << std::endl;
	if (this != &rhs)
	{
		this->_HitPoints = rhs._HitPoints;
		this->_EnergyPoints = rhs._EnergyPoints;
		this->_AttackDamage = rhs._AttackDamage;
		this->_name = rhs._name;
	}
	return *this;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap " << this->_name << " destructor called" << std::endl;
}

void	ScavTrap::guardGate(void) const
{
	std::cout << _name << " is now in Gate keeper mode"<< std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_HitPoints <= 0 || this->_EnergyPoints <= 0)
		std::cout << "Does not have enough Hit points or Energy points to commit the attack." << std::endl;
	else
	{
		if (this->_AttackDamage <= 0)
			std::cout << "ScavTrap " << _name << " attacks " << target << " but has no power... No damage is done" << std::endl;
		else
			std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << this->_AttackDamage << " points of damage.. OUÏE..!" << std::endl;
		this->_EnergyPoints -=1;
	}
}