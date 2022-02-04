/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:30:40 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/04 14:32:43 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource  const & src);
        MateriaSource& operator=(MateriaSource  const & src);
		~MateriaSource();


		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
        
    private:
		AMateria* _materias[4];
};

#endif