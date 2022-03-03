/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:54:29 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/21 14:47:49 by tbillon          ###   ########.fr       */
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
		_ideas[i] = cpy._ideas[i];
}

Brain & Brain::operator=(Brain const &rhs)
{
    if (this != &rhs)
    {
        std::cout << "Assignation Brain operator called" << std::endl;
        for(int i = 0; i < 100; ++i)
		    _ideas[i] = rhs._ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}