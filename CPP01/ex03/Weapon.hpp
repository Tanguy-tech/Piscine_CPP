/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:17:18 by tbillon           #+#    #+#             */
/*   Updated: 2022/01/25 14:54:37 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    public:
        Weapon(std::string type);
        ~Weapon();
        std::string&    getType(void);
        void            setType(std::string type);


    private:
        std::string _type;
};

#endif