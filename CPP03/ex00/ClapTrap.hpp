/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:11:01 by tbillon           #+#    #+#             */
/*   Updated: 2022/01/31 12:02:51 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
#define CLAP_TRAP_H

#include <string>
#include <iostream>

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(const ClapTrap &cpy);
        ClapTrap(std::string name);
        ClapTrap & operator=(ClapTrap const &rhs);
        ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void setDamage(unsigned int amount);
        std::string getName(void) const;
        int getDamage(void) const;
        int getHitPoints(void) const;
        int getEnergyPoints(void) const;

    private:
        std::string _name;
        int         _HitPoints;
        int         _EnergyPoints;
        int         _AttackDamage;
};

void displayStatus(ClapTrap player);

#endif