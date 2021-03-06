/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 07:58:56 by tbillon           #+#    #+#             */
/*   Updated: 2022/01/28 16:06:53 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public:
        Fixed();                                    // Constructor
        ~Fixed();                                   // Destructor
        Fixed(const Fixed &src);                    // Copy Constructor
        Fixed & operator=(Fixed const &rhs);        // Overload Constructor
        int getRawBits(void) const;
        void setRawBits(int const raw);

    private:
        int                 _fxd_value;
        static const int    _nb_bits = 8;
    
};

#endif