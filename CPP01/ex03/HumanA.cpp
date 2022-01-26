/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:30:37 by tbillon           #+#    #+#             */
/*   Updated: 2022/01/25 14:37:11 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :_name(name), _weapon(weapon)
{}

HumanA::~HumanA()
{}

void    HumanA::attack()
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}