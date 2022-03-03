/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:36:23 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/21 15:46:01 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal
{
    public:
        Cat();
        Cat(const Cat &cpy);
        Cat &operator=(Cat const &rhs);
        virtual ~Cat();

        virtual void makeSound() const;
        virtual const std::string &getType() const;
    
    private:
        Brain*  _brain;
};

#endif