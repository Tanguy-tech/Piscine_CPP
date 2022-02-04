/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:16:45 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/04 14:24:27 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure &cpy);
        Cure &operator=(Cure const &rhs);
        ~Cure();

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

    private:
        std::string _type;
};

#endif