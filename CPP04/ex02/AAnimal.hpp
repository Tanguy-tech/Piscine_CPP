/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:25:42 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/21 15:11:41 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>
#include <iostream>

class AAnimal
{
    public:
        AAnimal();
        AAnimal(const AAnimal &cpy);
        AAnimal & operator=(AAnimal const &rhs);
        virtual ~AAnimal();

        virtual void makeSound() const = 0;
        virtual const std::string &getType() const;

    protected:
        std::string _type;

};

#endif