/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:42:02 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/21 14:40:58 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    _type = "Cat";
}

Cat::Cat(const Cat &cpy)
{
    std::cout << "Cat dcopy constructor called" << std::endl;
    _type = cpy._type;
}

Cat & Cat::operator=(Cat const &rhs)
{
    if (this != &rhs)
    {
        std::cout << "Cat assignation operator constructor called" << std::endl;
        _type = rhs._type;
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << _type << " say meow!" << std::endl;
}

const std::string &Cat::getType() const
{
    return Animal::getType();
}

WrongCat::WrongCat()
{
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Mewooo i'm a WROOONGCCCCCCCAAAATTT !" << std::endl;
}