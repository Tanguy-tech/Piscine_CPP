/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:42:02 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/04 13:27:00 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    type = "Cat";
}

Cat::Cat(const Cat &cpy)
{
    std::cout << "Cat dcopy constructor called" << std::endl;
    type = cpy.type;
}

Cat & Cat::operator=(Cat const &rhs)
{
    if (this != &rhs)
    {
        std::cout << "Cat assignation operator constructor called" << std::endl;
        type = rhs.type;
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << type << " say meow!" << std::endl;
}

const std::string &Cat::getType() const
{
    return Animal::getType();
}