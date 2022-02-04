/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:25:42 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/04 13:24:43 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
    public:
        Animal();
        Animal(const Animal &cpy);
        Animal & operator=(Animal const &rhs);
        virtual ~Animal();

        virtual void makeSound() const;
        virtual const std::string &getType() const;

    protected:
        std::string type;
};

#endif