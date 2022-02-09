/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:01:43 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/07 11:16:44 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type)
{
    std::cout << "AMateria constructor with parameter called" << std::endl;
}

AMateria::AMateria(const AMateria &cpy)
{
    std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}

const std::string & AMateria::getType() const
{
    return this->_type;
}

AMateria & AMateria::operator=(AMateria const &rhs)
{
    if (this != &rhs)
        std::cout << "AMateria copy constructor called" << std::endl;     
    return *this;
}
