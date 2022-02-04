/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:46:04 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/04 13:27:05 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog &cpy)
{
    std::cout << "Dog dcopy constructor called" << std::endl;
    type = cpy.type;
}

Dog & Dog::operator=(Dog const &rhs)
{
    if (this != &rhs)
    {
        std::cout << "Dog assignation operator constructor called" << std::endl;
        type = rhs.type;
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << type << " is barking!" << std::endl;
}

const std::string &Dog::getType() const
{
	return Animal::getType();
}