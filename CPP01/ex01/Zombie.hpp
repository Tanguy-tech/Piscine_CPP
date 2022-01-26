/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:43:40 by tbillon           #+#    #+#             */
/*   Updated: 2022/01/24 17:02:46 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();

    void    announce(void);
    void    setname(std::string name);

    private:
        std::string name;
};

Zombie* newZombie(std::string name);
Zombie* zombieHorde(int N, std::string name);

#endif