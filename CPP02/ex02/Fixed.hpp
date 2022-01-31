/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:31:50 by tbillon           #+#    #+#             */
/*   Updated: 2022/01/31 08:22:35 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
    public:
    /************* Constructor & Destructor ***************************/
        Fixed();                                    // Constructor
        Fixed(const int n);
        Fixed(const float n);
        Fixed(const Fixed &cpy);                    // Copy Constructor
        ~Fixed();                                   // Destructor

    /************ Overloads *******************************************/
        Fixed & operator=(Fixed const &rhs);
        Fixed & operator++(void);
        Fixed & operator--(void);
        Fixed operator++(int);
        Fixed operator--(int);
        Fixed operator+(Fixed const &rhs) const;
        Fixed operator-(Fixed const &rhs) const;
        Fixed operator*(Fixed const &rhs) const;
        Fixed operator/(Fixed const &rhs) const;
        bool  operator>(Fixed const &rhs);
        bool  operator<(Fixed const &rhs);
        bool  operator>=(Fixed const &rhs);
        bool  operator<=(Fixed const &rhs);
        bool  operator==(Fixed const &rhs);
        bool  operator!=(Fixed const &rhs);

    /************ Member functions ************************************/
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
        static Fixed &	min( Fixed &n1, Fixed &n2 ); //fnct menbre statique statique min qui prend une référence sur deux nombres a point fixe et qui renvoie une réference vers le plus petit
		static Fixed &	max( Fixed &n1, Fixed &n2 ); //fnct membre statique max qui prend une référence sur deux nombres à point fixe et qui renvoie une réference vers le plus grand
		static Fixed const & min( Fixed const &n1, Fixed const &n2 ); // Overload
		static Fixed const & max( Fixed const &n1, Fixed const &n2 ); // Overload


    private:
        int                _fxd_value;
        static const int   _nb_bits = 8;
};

/************ Overloads NON member ************************************/
std::ostream &	operator<<(std::ostream &stream, Fixed const &rhs);

#endif