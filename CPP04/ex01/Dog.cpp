/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:46:04 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/04 13:25:48 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : _brain(new Brain)
{
    std::cout << "Dog default constructor called" << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog &cpy)
{
    std::cout << "Dog dcopy constructor called" << std::endl;
    type = cpy.type;
    _brain = new Brain(*cpy._brain);
}

Dog & Dog::operator=(Dog const &rhs)
{
    if (this != &rhs)
    {
        std::cout << "Dog assignation operator constructor called" << std::endl;
        type = rhs.type;
        _brain = new Brain(*rhs._brain);
    }
    return *this;
}

Dog::~Dog()
{
    delete _brain;
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