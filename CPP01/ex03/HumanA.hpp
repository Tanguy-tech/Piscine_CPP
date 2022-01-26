/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:26:35 by tbillon           #+#    #+#             */
/*   Updated: 2022/01/25 14:59:02 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void    attack();

    private:
        std::string _name;
        Weapon      &_weapon; // as HumanA alway have a weapon, we use a reference beacause it will always point to soemthing
};

#endif