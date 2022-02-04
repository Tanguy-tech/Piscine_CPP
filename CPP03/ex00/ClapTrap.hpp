/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:11:01 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/03 17:14:21 by tbillon          ###   ########.fr       */
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

        std::string getName(void) const;

        void displayStatus(void);

        static const unsigned int default_HP;
        static const unsigned int default_EP;
        static const unsigned int default_AD;

    private:
        std::string _name;
        int         _HitPoints;
        int         _EnergyPoints;
        int         _AttackDamage;
};

#endif