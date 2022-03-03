/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:28:32 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/21 15:04:00 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("Unknown type")
{
    std::cout << "Animal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &cpy) : _type(cpy._type)
{
    std::cout << "Animal copy constructor called" << std::endl;
}


AAnimal & AAnimal::operator=(AAnimal const &rhs)
{
    if (this != &rhs)
    {
        std::cout << "AAnimal copy constructor called" << std::endl;
        _type = rhs._type;       
    }
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal desctrurcor called" << std::endl;
}

void AAnimal::makeSound() const
{
    std::cout << _type << " make a wierd sound..!" << std::endl;
}

const std::string & AAnimal::getType() const 
{
	return _type;
}