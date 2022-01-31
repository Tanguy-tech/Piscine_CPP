/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:06:18 by tbillon           #+#    #+#             */
/*   Updated: 2022/01/28 16:29:41 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
**--------------- CONSTRUCTORS -----------------
*/

Fixed::Fixed() : _fxd_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) : _fxd_value(n << _nb_bits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) : _fxd_value(roundf(n * (1 << _nb_bits)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

/*
**--------------- DESTRUCTORS -------------------
*/

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

/*
**--------------- OVERLOAD OPERATOR --------------
*/

Fixed & Fixed::operator=(Fixed const &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
        this->_fxd_value = rhs.getRawBits();
    return *this;
}

std::ostream &operator<<(std::ostream &stream, Fixed const &rhs)
{
    stream << rhs.toFloat();
    return stream;
}

/*
**--------------- MEMBER FUNCTIONS ----------------
*/

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_fxd_value);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    _fxd_value = raw;
}

float	Fixed::toFloat(void) const
{
	return (((float)(_fxd_value / (float)(1 << _nb_bits))));
}

int		Fixed::toInt(void) const
{
	return (_fxd_value >> _nb_bits);
}