/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:33:31 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/04 10:10:35 by tbillon          ###   ########.fr       */
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

void    FragTrap::highFivesGuys(void)
{
    std::cout << this->_name << " is now requesting a high five!" << std::endl;
}