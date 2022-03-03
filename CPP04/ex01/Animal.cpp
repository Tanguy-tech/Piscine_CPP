/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:28:32 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/21 15:04:23 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Unknown type")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &cpy) : _type(cpy._type)
{
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal & Animal::operator=(Animal const &rhs)
{
    if (this != &rhs)
    {
        std::cout << "Animal copy constructor called" << std::endl;
        _type = rhs._type;       
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal desctrurcor called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << _type << " make a wierd sound..!" << std::endl;
}

const std::string & Animal::getType() const 
{
	return _type;
}