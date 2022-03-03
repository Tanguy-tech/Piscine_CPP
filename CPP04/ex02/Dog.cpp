/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:46:04 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/21 15:09:35 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : _brain(new Brain)
{
    std::cout << "Dog default constructor called" << std::endl;
    _type = "Dog";
}

Dog::Dog(const Dog &cpy)
{
    std::cout << "Dog dcopy constructor called" << std::endl;
    _type = cpy._type;
    _brain = new Brain(*cpy._brain);
}

Dog & Dog::operator=(Dog const &rhs)
{
    if (this != &rhs)
    {
        std::cout << "Dog assignation operator constructor called" << std::endl;
        _type = rhs._type;
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
    std::cout << _type << " is barking!" << std::endl;
}

const std::string &Dog::getType() const
{
	return AAnimal::getType();
}