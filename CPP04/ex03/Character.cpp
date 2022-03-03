/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:05:55 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/09 10:11:55 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character() : _name("")
{
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
	std::cout << "Character constructor with parameter called" <<  std::endl;
	for (int i = 0; i < 4; i++) /* filling up the inventory */
		this->inventory[i] = NULL;
}

Character::Character(const Character &cpy)
{
	std::cout << "Character copy constructor called" <<  std::endl;
	this->_name = cpy._name;
	for (int i = 0; i < 4; i++)
		if(cpy.inventory[i])
			delete cpy.inventory[i];
	for (int i = 0; i < 4; i++)
		if(cpy.inventory[i])
			this->inventory[i] = cpy.inventory[i]->clone();
	
}

Character & Character::operator=(Character const &rhs)
{
	std::cout << "Character assignation constructor called" <<  std::endl;
	this->_name = rhs._name;
	for (int i = 0; i < 4; i++)
		if(rhs.inventory[i])
			this->inventory[i] = rhs.inventory[i];
		else
			this->inventory[i] = NULL;

	return *this;
}

Character::~Character()
{
	std::cout << "Character destructor called" <<  std::endl;
	for (int i = 0; i < 4; i++)
		if(inventory[i])
			delete inventory[i];
}

std::string const & Character::getName() const
{
	return this->_name;
}
void Character::equip(AMateria* m)
{
	if(!m)
		return;
	int i = 0;
	while(this->inventory[i])
		i++;
	if (i < 4)
	{
		std::cout << "Character : " << this->_name  << ", equip a new materia of type : " << m->getType() << std::endl;
		this->inventory[i] = m;
	}
	else
		std::cout << "Character : " << this->_name  << " inventory is full" <<  std::endl;	 

}
void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		std::cout << "Wrong index! the index indicated is not accessible." << std::endl;
	else
		this->inventory[idx] = NULL;
}
void Character::use(int idx, ICharacter& target)
{
	if (!(idx >= 0 && idx < 4))
		std::cout << "Wrong index! the index indicated is not accessible." << std::endl;
	else if (!this->inventory[idx])
		std::cout << "Materia does not exist for this index." << std::endl;
	else
		this->inventory[idx]->use(target);
}