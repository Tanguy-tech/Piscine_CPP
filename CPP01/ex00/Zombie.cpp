/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:04:19 by tbillon           #+#    #+#             */
/*   Updated: 2022/01/24 16:41:10 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{ 
}

Zombie::~Zombie( void )
{
	std::cout << this->name << " has disappear" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << this->name << ": " << " BraiiiiiiinnnzzzZ..." << std::endl;
}