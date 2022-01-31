/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:40:04 by tbillon           #+#    #+#             */
/*   Updated: 2022/01/31 08:22:42 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
**--------------- CONSTRUCTORS -----------------
*/

Fixed::Fixed() : _fxd_value(0)
{}

Fixed::Fixed(const int n) : _fxd_value(n << _nb_bits)
{}

Fixed::Fixed(const float n) : _fxd_value(roundf(n * (1 << _nb_bits)))
{}

Fixed::Fixed(const Fixed &cpy)
{
    *this = cpy;
}

/*
**--------------- DESTRUCTORS -------------------
*/

Fixed::~Fixed()
{}

/*
**--------------- OVERLOAD OPERATOR --------------
*/

Fixed & Fixed::operator=(Fixed const &rhs)
{
    if (this != &rhs)
        this->_fxd_value = rhs.getRawBits();
    return *this;
}

bool    Fixed::operator>(Fixed const &rhs)
{
	if (this->_fxd_value > rhs._fxd_value)
		return (true);
	return (false);
}

bool    Fixed::operator>=(Fixed const &rhs)
{
	if (this->_fxd_value >= rhs._fxd_value)
		return (true);
	return (false);
}

bool    Fixed::operator<(Fixed const &rhs)
{
	if (this->_fxd_value < rhs._fxd_value)
		return (true);
	return (false);
}

bool    Fixed::operator<=(Fixed const &rhs)
{
	if (this->_fxd_value <= rhs._fxd_value)
		return (true);
	return (false);
}

bool    Fixed::operator==(Fixed const &rhs)
{
	if (this->_fxd_value == rhs._fxd_value)
		return (true);
	return (false);
}

bool    Fixed::operator!=(Fixed const &rhs)
{
	if (this->_fxd_value != rhs._fxd_value)
		return (true);
	return (false);
}

Fixed Fixed::operator+(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed & Fixed::operator++(void)
{
	Fixed	res;

	_fxd_value += 1;
	return (*this);
}

Fixed &  Fixed::operator--(void)
{
	Fixed	res;

	_fxd_value -= 1;
	return (*this);
}

Fixed   Fixed::operator++(int)
{
	Fixed	res;

	res = *this;
	this->operator++();
	return (res);
}

Fixed   Fixed::operator--(int)
{
	Fixed	res;

	res = *this;
	this->operator--();
	return (res);
}

std::ostream &operator<<(std::ostream &stream, Fixed const&rhs)
{
    stream << rhs.toFloat();
    return stream;
}

/*
**--------------- MEMBER FUNCTIONS ----------------
*/

Fixed &	Fixed::min(Fixed& n1, Fixed& n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}

Fixed &	Fixed::max(Fixed& n1, Fixed& n2)
{
	if (n1 > n2)
		return (n1);
	return (n2);
}

Fixed const &	Fixed::min(Fixed const &n1, Fixed const &n2)
{
	if (n1.toFloat() < n2.toFloat())
		return (n1);
	return (n2);
}

Fixed const &	Fixed::max(Fixed const &n1, Fixed const &n2)
{
	if (n1.toFloat() > n2.toFloat())
		return (n1);
	return (n2);
}

int Fixed::getRawBits(void) const
{
    return (_fxd_value);
}

void    Fixed::setRawBits(int const raw)
{
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