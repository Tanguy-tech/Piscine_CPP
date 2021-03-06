/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:30:43 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/21 09:45:42 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &cpy);
        FragTrap & operator=(FragTrap const &rhs);
        ~FragTrap();

        void highFivesGuys(void);

    protected:
        static const unsigned int frag_HP = 100;
        static const unsigned int frag_EP = 100;
        static const unsigned int frag_AD = 30;

};

#endif