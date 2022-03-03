/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:17:31 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/09 09:45:13 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        ~Ice();

        virtual AMateria* clone() const;
        void use(ICharacter& target);

    private:
        std::string _type;
        Ice(const Ice &cpy);
        Ice &operator=(Ice const &rhs);
};

#endif