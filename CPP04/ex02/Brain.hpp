/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:42:02 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/21 14:54:57 by tbillon          ###   ########.fr       */
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
        std::string _ideas[100];
};

#endif