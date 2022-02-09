/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 09:53:07 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/09 10:03:20 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource default constructor called" << std::endl;
    for (int i = 0; i < MAX_MS; i++)
		this->_materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &cpy)
{
    std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < MAX_MS; i++)
		if (this->_materias[i])
			this->_materias[i] = cpy._materias[i];
}

MateriaSource & MateriaSource::operator=(MateriaSource const &rhs)
{
    std::cout << "MateriaSource assignation operator called" << std::endl;
	for (int i = 0; i < MAX_MS; i++)
		if (this->_materias[i])
			this->_materias[i] = rhs._materias[i];
	return *this;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource destructor called" << std::endl;
    for (int i = 0; i < MAX_MS; i++)
		if (this->_materias[i])
			delete _materias[i];
}

void MateriaSource::learnMateria(AMateria* src)
{
	std::cout << "learnMateria called" << std::endl;
	int i = 0;
	while(this->_materias[i])
		i++;
	if (i >= 3)
		return;
	std::cout << "A new Materia has been learned : " << src->getType() << std::endl;
	this->_materias[i] = src;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < MAX_MS; i++)
		if(this->_materias[i])
			if (type == _materias[i]->getType())
				return _materias[i]->clone();
	std::cout << "The Materia of type \""<< type << "\" couldn't been learned.." << std::endl;	
	return 0;
}