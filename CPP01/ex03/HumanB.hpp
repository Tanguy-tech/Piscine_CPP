/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:22:22 by tbillon           #+#    #+#             */
/*   Updated: 2022/01/25 14:58:26 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string name);
        ~HumanB();
        void    attack();
        void    setName(std::string name);
        void    setWeapon(Weapon &weapon);

    private:
        std::string _name;
        Weapon      *_weapon; // as HumanB may not alway have a weapon, we rather use a pointer instead of a reference beacause references can't point to nothing
};

#endif