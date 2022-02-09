/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:01:43 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/09 10:18:00 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type)
{
    std::cout << "AMateria constructor with parameter called" << std::endl;
}

AMateria::AMateria(const AMateria &cpy) : _type(cpy._type)
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

void AMateria::use(ICharacter& target)
{
    std::cout << "AMateria use on " << target.getName() << std::endl;
}
