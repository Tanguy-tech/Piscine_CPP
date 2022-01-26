/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:43:37 by tbillon           #+#    #+#             */
/*   Updated: 2022/01/24 17:04:02 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::Zombie(std::string name) : name(name)
{}

Zombie::~Zombie( void )
{
	std::cout << this->name << " has disappear" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << this->name << ": " << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie(std::string name)
{
    Zombie* Zomb = new Zombie(name);
    return (Zomb);
}

void    Zombie::setname(std::string name)
{
    this->name = name;
}
