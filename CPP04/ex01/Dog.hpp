/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:46:27 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/04 12:17:29 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog &cpy);
        Dog &operator=(Dog const &rhs);
        virtual ~Dog();

        virtual void makeSound() const;
        virtual const std::string &getType() const;

    private:
        Brain*  _brain;
};

#endif