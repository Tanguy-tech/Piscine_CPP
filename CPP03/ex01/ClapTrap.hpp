/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:47:08 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/03 17:14:52 by tbillon          ###   ########.fr       */
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
        ClapTrap(std::string name, unsigned int HP, unsigned int EP, unsigned int AD);
        ClapTrap(const ClapTrap &cpy);
        ClapTrap & operator=(ClapTrap const &rhs);
        ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        std::string getName(void) const;

        void displayStatus(void);

    protected:
        std::string _name;
        int         _HitPoints;
        int         _EnergyPoints;
        int         _AttackDamage;
};

#endif
