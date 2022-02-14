/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 11:28:41 by tanguy            #+#    #+#             */
/*   Updated: 2022/02/14 10:34:26 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(std::string to_conv) : _to_conv(to_conv){}

Convert::~Convert(){}

bool    Convert::isConvertible()
{
    /* if this is convertible */
    if (this->isChar() || this->isInt() || this->isFloat() || this->isDouble())
        return true;
    /* otherwise  */
    return false;
}

bool    Convert::isChar()
{
    if (this->_to_conv.length() == 1)
    {
        if (isprint(this->_to_conv.c_str()[0]))
            return true;
        std::cout << YELLOW << BAD_CHAR << DEFAULT << std::endl;
        return false;
    }
    return false;
}

bool    Convert::isInt()
{
    size_t i = 0;
    if (this->_to_conv.c_str()[i] == '+' || this->_to_conv.c_str()[i] == '-')
        i++;
    while (i < this->_to_conv.length())
    {
        if (!isdigit(this->_to_conv.c_str()[i]))
            return false;
        i++;
    }
    return true;
}

bool    Convert::isFloat()
{
    if (this->_to_conv == "-inff" || this->_to_conv == "+inff" || this->_to_conv == "nanf")
        return true;
    size_t i = 0;
    bool dot = false;
    if (this->_to_conv.c_str()[i] == '+' || this->_to_conv.c_str()[i] == '-')
            i++;
    while (this->_to_conv.c_str()[i])
    {
        if (!isdigit(this->_to_conv.c_str()[i]) && this->_to_conv.c_str()[i] != '.' && this->_to_conv.c_str()[i] != 'f')
            return false;
        if (this->_to_conv.c_str()[i] == '.' && dot == true)
            return false;
        if (this->_to_conv.c_str()[i] == '.')
            dot = true;
        i++;
    }
    if (this->_to_conv.c_str()[i - 1] == 'f' && dot == true)
        return true;
    return false;
}

bool    Convert::isDouble()
{
    if (this->_to_conv == "-inf" || this->_to_conv == "+inf" || this->_to_conv == "nan")
		return true;
    size_t i = 0;
    bool dot = false;
    if (this->_to_conv.c_str()[i] == '+' || this->_to_conv.c_str()[i] == '-')
            i++;
    while (this->_to_conv.c_str()[i])
    {
        if (!isdigit(this->_to_conv.c_str()[i]) && this->_to_conv.c_str()[i] != '.')
            return false;
        if (this->_to_conv.c_str()[i] == '.' && dot == true)
            return false;
        if (this->_to_conv.c_str()[i] == '.')
            dot = true;
        i++;
    }
    return true;
}

bool    Convert::isPseudoLitteral()
{
    if (this->_to_conv == "nan" || this->_to_conv == "nanf" || this->_to_conv == "+inf" || this->_to_conv == "-inf" || this->_to_conv == "-inff" || this->_to_conv == "+inff")
        return true;
    return false;
}

void    Convert::runConv()
{
    const char *arg = _to_conv.c_str();
    if (this->isPseudoLitteral())
        convPseudoLitteral();
    else if (this->isInt())
        convFromInt(arg);
    else if (this->isFloat() || this->isDouble())
        convFromFloatDouble(arg);
    else if (this->isChar())
        convFromChar(arg);
}

void    Convert::convPseudoLitteral()
{
    if (this->_to_conv == "nan" || this->_to_conv == "nanf")
        std::cout << _NAN << std::endl;
    else if (this->_to_conv == "+inf" || this->_to_conv == "+inff")
        std::cout << MAX_INF << std::endl;
    else if (this->_to_conv == "-inf" || this->_to_conv == "-inff")
        std::cout << MIN_INF << std::endl;
}

void    Convert::convFromChar(const char *to_conv)
{
    long double tmp = *to_conv;
    display(tmp);
}

void    Convert::convFromInt(const char *to_conv)
{
    long double tmp = strtol(to_conv, NULL, 10);
    display(tmp);
}

void    Convert::convFromFloatDouble(const char *to_conv)
{
    long double tmp = strtod(to_conv, NULL);
    display(tmp);
}

void    Convert::displayChar(long double ld)
{
    std::cout << "char : ";
    if (ld >= 32 && ld <= 126)
		std::cout << "'" << static_cast<char>(ld) << "'" << std::endl;
	else
		std::cout << NON_DISPL << std::endl;
}

void    Convert::displayInt(long double ld)
{
    std::cout << "int : ";
    if (ld >= INT64_MIN && ld <= INT64_MAX)
        std::cout << static_cast<int>(ld) << std::endl;
    else
        std::cout << IMPOSSIBLE << std::endl;
}

void    Convert::displayFloat(double long ld)
{
    std::cout << "float: ";
    float f = static_cast<float>(ld);
	if (f != static_cast<float>(LONG_MAX) + 1)
		std::cout << f << "f" << std::endl;
	else
		std::cout << IMPOSSIBLE << std::endl;
}

void    Convert::displayDouble(long double ld)
{
    std::cout << "double: ";
	double d = static_cast<double>(ld);
	if (d != static_cast<double>(LONG_MAX) + 1)
		std::cout << d << std::endl;
	else
		std::cout << IMPOSSIBLE << std::endl;
}

void	Convert::display(long double ld)
{
	displayChar(ld);
	displayInt(ld);
	std::cout << std::fixed << std::cout.precision(1);
	displayFloat(ld);
	displayDouble(ld);
}