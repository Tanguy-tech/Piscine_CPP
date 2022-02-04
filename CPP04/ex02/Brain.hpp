/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:42:02 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/04 12:01:08 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
    public:
        Brain();
        Brain(const Brain &cpy);
        Brain &operator=(Brain const &rhs);
        ~Brain();

    protected:
        std::string ideas[100];
};

#endif