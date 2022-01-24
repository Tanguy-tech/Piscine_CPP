/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 11:24:00 by Tanguy            #+#    #+#             */
/*   Updated: 2022/01/24 14:59:27 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "phonebook.class.hpp"

PhoneBook::PhoneBook(void) : _count(0) {} /* Initialize count to 0 */
PhoneBook::~PhoneBook(void) {}

int PhoneBook::count(void) const
{
    return this->_count;
}

Contact PhoneBook::fetchContact(int i) const
{
    return this->_contacts[i];
}

void    PhoneBook::addContact(Contact new_contact)
{
    this->_contacts[this->_count++] = new_contact;
}

void    setdisplay(std::string field)
{
    if (field.size() > 10)
		std::cout << std::setw(9) << field.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << std::right << std::setfill(' ') << field;

	std::cout << '|';
}

void    PhoneBook::display(void) const
{
    setdisplay("index");
    setdisplay("first name");
    setdisplay("last name");
    setdisplay("nickname");
    std::cout << std::endl << "--------------------------------------------" << std::endl;

    if (this->_count)
    {
        for (int i = 0; i < this->_count; i++)
        {
            Contact c = this->_contacts[i];
            setdisplay(std::to_string(i));
            setdisplay(c.fetchDataField(0));
            setdisplay(c.fetchDataField(1));
            setdisplay(c.fetchDataField(2));
            std::cout << std::endl;
        }
    }
    else
    {
        std::cout << "   Your PhoneBook is empty at the moment!" << std::endl;
        std::cout << "     Use command [ADD] to add a contact" << std::endl;
    }
    std::cout << std::endl;
}