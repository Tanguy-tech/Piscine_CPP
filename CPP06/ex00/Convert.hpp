/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 11:21:31 by tanguy            #+#    #+#             */
/*   Updated: 2022/02/14 10:34:02 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>

#define ARGS "ERROR! Wrong number of args. Please use the following patern: " << BLUE << "./Convert <scala type to convert> \n" << YELLOW << "Scala types available are: 'char' 'int' 'float' 'double'"
#define NON_COMP_TYPE "ERROR! trying to convert non-compatible type.\n" << YELLOW << "Scala Types available are: 'char' 'int' 'float' 'double'"
#define BAD_CHAR "WARNING! Do not attempt to convert non printable characters.\n" << YELLOW << "Scala Types available are: 'char' 'int' 'float' 'double'"

#define _NAN "char: impossible\nint: impossible\nfloat: +nanf\ndouble: +nan"
#define MAX_INF "char: impossible\nint: impossible\nfloat: +inff\ndouble: +inf"
#define MIN_INF "char: impossible\nint: impossible\nfloat: -inff\ndouble: -inf"

#define IMPOSSIBLE "impossible"
#define NON_DISPL "Non displayable"
#define RED     "\033[31m" /* Error */
#define GREEN   "\033[32m" /* Success */
#define BLUE    "\033[34m" /* Infos */
#define YELLOW  "\033[33m" /* Warning */
#define DEFAULT "\033[0m" /* Default */

class Convert
{
    public:
        Convert(std::string to_conv);
        ~Convert();

        void    runConv(); /* Main convert function that calls every other individual conversions functions */

        /* define type */
        bool    isConvertible(); /* check if input is of type char, int, float, or double and nothing else */
        bool    isChar();
        bool    isInt();
        bool    isFloat();
        bool    isDouble();
        bool    isPseudoLitteral();

        /* convert type */
        void    convFromChar(const char *to_conv);
        void    convFromInt(const char *to_conv);
        void    convFromFloatDouble(const char *to_conv);
        void    convPseudoLitteral();

        /* display functions */
        void    display(long double ld);
        void    displayChar(long double ld);
        void    displayInt(long double ld);
        void    displayFloat(long double ld);
        void    displayDouble(long double ld);

    private:
        Convert();
        Convert(const Convert &cpy);
        Convert &operator=(const Convert &rhs);

        std::string _to_conv;
};

#endif