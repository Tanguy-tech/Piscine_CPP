/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:47:16 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/04 10:13:39 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
#define SCAV_TRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &cpy);
        ScavTrap & operator=(ScavTrap const &rhs);
        ~ScavTrap();

        void guardGate(void) const;
		void attack(std::string const &target);

    protected:
        static const unsigned int scav_HP = 100;
        static const unsigned int scav_EP = 50;
        static const unsigned int scav_AD = 30;
    
};

#endif