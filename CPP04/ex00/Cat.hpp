/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:36:23 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/21 15:45:16 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : virtual public Animal
{
    public:
        Cat();
        Cat(const Cat &cpy);
        Cat &operator=(Cat const &rhs);
        virtual ~Cat();

        virtual void makeSound() const;
        virtual const std::string &getType() const;
};

class WrongCat : virtual public WrongAnimal
{
    public:
        WrongCat();
        virtual ~WrongCat();

        void makeSound() const;
};

#endif