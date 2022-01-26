/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:58:51 by tbillon           #+#    #+#             */
/*   Updated: 2022/01/24 16:40:12 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
#define ZOMBIE_CLASS_H

#include <string>
#include <iostream>

class Zombie
{
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        
    void    announce(void);

    private:
    std::string name;
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif