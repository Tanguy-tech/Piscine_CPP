/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:49:37 by tbillon           #+#    #+#             */
/*   Updated: 2022/01/28 16:30:25 by tbillon          ###   ########.fr       */
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
        Fixed();                                    // Constructor
        Fixed(const int n);
        Fixed(const float n);
        Fixed(const Fixed &src);                    // Copy Constructor
        Fixed & operator=(Fixed const &rhs);        // Overload Constructor
        ~Fixed();                                   // Destructor

        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;

    private:
        int                _fxd_value;
        static const int   _nb_bits = 8;
};

std::ostream &	operator<<(std::ostream &stream, Fixed const &rhs);

#endif