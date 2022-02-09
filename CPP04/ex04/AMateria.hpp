/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:12:02 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/07 11:12:20 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;
class AMateria
{
    public:
        AMateria(std::string const &type);
        AMateria(const AMateria &cpy);
        AMateria &operator=(AMateria const &rhs);
        virtual ~AMateria();

        std::string const & getType() const;

        /* fonction virtuelle pure */
        virtual AMateria* clone() const = 0;
        
        virtual void use(ICharacter& target);

    protected:
        std::string const _type;

    private:
        AMateria();
};

#endif