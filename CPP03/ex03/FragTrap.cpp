/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:33:31 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/21 10:03:42 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("default", frag_HP, frag_EP, frag_AD)
{
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, frag_HP, frag_EP, frag_AD)
{
    std::cout << "FragTrap constructor with name parameter called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &cpy) : ClapTrap()
{
    std::cout <<  "FragTrap copy constructor called" << std::endl;
    *this = cpy;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap " << this->_name << " destructor called" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &rhs)
{
    std::cout << "Assignation operator FragTrap constructor called for " << rhs._name << std::endl;
	if (this != &rhs)
	{
		this->_HitPoints = rhs._HitPoints;
		this->_EnergyPoints = rhs._EnergyPoints;
		this->_AttackDamage = rhs._AttackDamage;
		this->_name = rhs._name;
	}
	return *this;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << this->_name << " is now requesting a high five!" << std::endl;
}