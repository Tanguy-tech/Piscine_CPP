/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:52:04 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/04 09:39:12 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, unsigned int HP, unsigned int EP, unsigned int AD) : _name(name), _HitPoints(HP), _EnergyPoints(EP), _AttackDamage(AD)
{
	std::cout << "ClapTrap default constructor with parameters called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &cpy)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = cpy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " Destructor called" << std::endl;
}

void	ClapTrap::displayStatus(void)
{
	std::cout << std::endl;
	std::cout << "Status of " << this->_name << " is now:" << std::endl;
	std::cout << "Name : " << this->_name << std::endl;
	std::cout << "HP : " << this->_HitPoints << std::endl;
	std::cout << "EP : " << this->_EnergyPoints << std::endl;
	std::cout << "AD : " << this->_AttackDamage << std::endl;
}

std::string	ClapTrap::getName(void) const
{
	return this->_name;
}

void	ClapTrap::attack(const std::string &target)
{
	if (_HitPoints <= 0 || _EnergyPoints <= 0)
		std::cout << "Does not have enough Hit points or Energy points to commit the attack." << std::endl;
	else
	{
		if (_AttackDamage <= 0)
			std::cout << _name << " attacks " << target << " but has no power... No damage is done. " << _name << " also lost 1 point of energy." << std::endl;
		else
			std::cout << _name << " attacks " << target << " causing " << _AttackDamage << " points of damage.. OU??E..!" << _name << " also lost 1 point of energy." << std::endl;
		_EnergyPoints -= 1;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_HitPoints <= 0 || _EnergyPoints <= 0)
		std::cout << "Does not have enough Hit points or Energy points to be repaired." << std::endl;
	else
	{
		std::cout << _name << " has now regain " << amount << " hit points back, and lost 1 point of energy." << std::endl;
		_HitPoints += amount;
		_EnergyPoints -= 1;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << _name << " took " << amount << " points of damage!" << std::endl;
	_HitPoints -= amount;
	if (_HitPoints <= 0)
	{
		_HitPoints = 0;
		std::cout << _name << " just died..!" << std::endl;
	}
}

ClapTrap & ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "Assignation operator constructor called for " << rhs._name << std::endl;
	if (this != &rhs)
	{
		this->_HitPoints = rhs._HitPoints;
		this->_EnergyPoints = rhs._EnergyPoints;
		this->_AttackDamage = rhs._AttackDamage;
		this->_name = rhs._name;
	}
	return *this;
}