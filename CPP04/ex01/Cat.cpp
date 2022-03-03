/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:42:02 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/21 15:04:37 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : _brain(new Brain)
{
    std::cout << "Cat default constructor called" << std::endl;
    _type = "Cat";
}

Cat::Cat(const Cat &cpy)
{
    std::cout << "Cat dcopy constructor called" << std::endl;
    _type = cpy._type;
    _brain = new Brain(*cpy._brain);
}

Cat & Cat::operator=(Cat const &rhs)
{
    if (this != &rhs)
    {
        std::cout << "Cat assignation operator constructor called" << std::endl;
        _type = rhs._type;
        _brain = new Brain(*rhs._brain);
    }
    return *this;
}

Cat::~Cat()
{
    delete this->_brain;
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