/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:28:32 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/04 13:25:59 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Unknown type")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &cpy) : type(cpy.type)
{
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal & Animal::operator=(Animal const &rhs)
{
    if (this != &rhs)
    {
        std::cout << "Animal copy constructor called" << std::endl;
        type = rhs.type;       
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal desctrurcor called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << type << " make a wierd sound..!" << std::endl;
}

const std::string & Animal::getType() const 
{
	return type;
}