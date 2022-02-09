/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:25:42 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/07 11:05:58 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>
#include <iostream>

class AAnimal
{
    public:
        AAnimal & operator=(AAnimal const &rhs);
        virtual ~AAnimal();

        virtual void makeSound() const;
        virtual const std::string &getType() const;

    protected:
        std::string type;

    private:
        AAnimal();
        AAnimal(const AAnimal &cpy);
};

#endif