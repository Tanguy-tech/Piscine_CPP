/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:30:36 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/01 15:30:37 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "ClapTrap Default constructor with name parameter called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void	ClapTrap::displayStatus(void)
{
	std::cout << std::endl;
	std::cout << "Status of " << this->getName() << " is now:" << std::endl;
	std::cout << "Name : " << this->getName() << std::endl;
	std::cout << "HP : " << this->getHitPoints() << std::endl;
	std::cout << "EP : " << this->getEnergyPoints() << std::endl;
	std::cout << "AD : " << this->getDamage() << std::endl;
}

void	ClapTrap::setDamage(unsigned int amount)
{
	std::cout << this->getName() << " drinks a potion!" << std::endl;
	this->_AttackDamage = amount;
}

int	ClapTrap::getDamage(void) const
{
	return this->_AttackDamage;
}

void ClapTrap::setEnergyPoints(unsigned int amount)
{
	this->_EnergyPoints = amount;
}

int	ClapTrap::getEnergyPoints(void) const
{
	return this->_EnergyPoints;
}

void	ClapTrap::setHitPoints(unsigned int amount)
{
	this->_HitPoints = amount;
}

int	ClapTrap::getHitPoints(void) const
{
	return this->_HitPoints;
}

void ClapTrap::setName(std::string name)
{
	this->_name = name;
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
			std::cout << "ClapTrap " << _name << " attacks " << target << " but has no power... No damage is done" << std::endl;
		else
			std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _AttackDamage << " points of damage.. OUÏE..!" << std::endl;
		_EnergyPoints -= 1;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_HitPoints <= 0 || _EnergyPoints <= 0)
		std::cout << "Does not have enough Hit points or Energy points to be repaired." << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " has now regain " << amount << "hit points back " << std::endl;
		_HitPoints += amount;
		_EnergyPoints -= 1;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " took " << amount << " points of damage!" << std::endl;
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
		this->_HitPoints = rhs.getHitPoints();
		this->_EnergyPoints = rhs.getEnergyPoints();
		this->_AttackDamage = rhs.getDamage();
		this->_name = rhs.getName();
	}
	return *this;
}