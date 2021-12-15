/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tanguy <Tanguy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 11:24:00 by Tanguy            #+#    #+#             */
/*   Updated: 2021/12/15 11:58:40 by Tanguy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
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
    this->_contacts[this->_count += 1] = new_contact;
}

void    PhoneBook::display(void) const
{
    std::cout << "Index   |";
    std::cout << "First Name   |";
    std::cout << "Last Name   " << std::endl;
    std::cout << "-----------------------------------" << std::endl;

    for (int i = 0; i < this->_count; i++)
    {
        Contact c = this->_contacts[i];
        std::cout << i;
        std::cout << c.fetchDataField(0);
        std::cout << c.fetchDataField(1) << std::endl;
    }
}