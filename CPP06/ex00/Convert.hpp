/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanguy <tanguy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 11:21:31 by tanguy            #+#    #+#             */
/*   Updated: 2022/02/13 11:58:24 by tanguy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <string>
#include <iostream>

#define ARGS "ERROR! Wrong number of args. Please use the following patern: " << BLUE << "./Convert <scala type to convert> \n" << YELLOW << "Scala types available are: 'char' 'int' 'float' 'double'"
#define NON_COMP_TYPE "ERROR! trying to convert non-compatible type.\n" << YELLOW << "Scala Types available are: 'char' 'int' 'float' 'double'"

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

        /* convert type */
        void    convToChar();
        void    convToInt();
        void    convToFloat();
        void    convToDouble();

    private:
        Convert();
        Convert(const Convert &cpy);
        Convert &operator=(const Convert &rhs);

        std::string _to_conv;
};

#endif