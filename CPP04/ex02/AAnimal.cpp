/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:28:32 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/04 13:42:48 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal & AAnimal::operator=(AAnimal const &rhs)
{
    if (this != &rhs)
    {
        std::cout << "AAnimal copy constructor called" << std::endl;
        type = rhs.type;       
    }
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal desctrurcor called" << std::endl;
}

void AAnimal::makeSound() const
{
    std::cout << type << " make a wierd sound..!" << std::endl;
}

const std::string & AAnimal::getType() const 
{
	return type;
}