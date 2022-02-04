/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:54:29 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/04 12:10:38 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() 
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &cpy)
{
    std::cout <<  "Brain copy constructor called" << std::endl;
    for(int i = 0; i < 100; ++i)
		ideas[i] = cpy.ideas[i];
}

Brain & Brain::operator=(Brain const &rhs)
{
    if (this != &rhs)
    {
        std::cout << "Assignation Brain operator called" << std::endl;
        for(int i = 0; i < 100; ++i)
		    ideas[i] = rhs.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}