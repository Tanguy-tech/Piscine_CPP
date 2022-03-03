/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:46:27 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/21 15:45:18 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : virtual public Animal
{
    public:
        Dog();
        Dog(const Dog &cpy);
        Dog &operator=(Dog const &rhs);
        virtual ~Dog();

        virtual void makeSound() const;
        virtual const std::string &getType() const;
};

#endif