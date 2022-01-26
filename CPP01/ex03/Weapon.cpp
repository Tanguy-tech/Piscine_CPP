/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:20:38 by tbillon           #+#    #+#             */
/*   Updated: 2022/01/25 14:56:56 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) :_type(type)
{}

Weapon::~Weapon()
{}

std::string&    Weapon::getType()
{
    return _type;
}

void Weapon::setType(std::string type)
{
    _type = type;
}