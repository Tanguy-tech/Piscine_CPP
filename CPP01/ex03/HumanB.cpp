/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:37:39 by tbillon           #+#    #+#             */
/*   Updated: 2022/01/25 14:46:26 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) :_name(name)
{}

HumanB::~HumanB()
{}

void    HumanB::attack()
{
    if (_weapon)
        std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
    else
        std::cout << _name << " can't attack with no fucking weapon.. dumbass..! " << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}