/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:44:04 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/04 09:54:22 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default", 10, 10, 0), FragTrap(), ScavTrap()
{
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name", frag_HP, scav_EP, frag_AD), FragTrap(), ScavTrap(), _name(name)
{
    std::cout << "DiamondTrap constructor with name parameter called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &cpy)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = cpy;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << _name << " destructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &rhs)
{
    std::cout << "Assignation operator DiamondTrap constructor called for " << rhs.ScavTrap::getName() << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_HitPoints = rhs._HitPoints;
		this->_EnergyPoints = rhs._EnergyPoints;
		this->_AttackDamage = rhs._AttackDamage;
	}
	return *this;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << _name << " and my clapName is " << ClapTrap::_name << "!" << std::endl;
}
