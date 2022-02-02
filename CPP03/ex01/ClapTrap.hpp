/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:47:08 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/01 15:00:27 by tbillon          ###   ########.fr       */
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
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &cpy);
        ClapTrap & operator=(ClapTrap const &rhs);
        ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void setName(std::string name);
        void setDamage(unsigned int amount);
        void setHitPoints(unsigned int amount);
        void setEnergyPoints(unsigned int amount);

        std::string getName(void) const;
        int getDamage(void) const;
        int getHitPoints(void) const;
        int getEnergyPoints(void) const;

        void displayStatus(void);

    private:
        std::string _name;
        int         _HitPoints;
        int         _EnergyPoints;
        int         _AttackDamage;
};

#endif
