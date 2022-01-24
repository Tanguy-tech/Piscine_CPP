/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:27:03 by Tanguy            #+#    #+#             */
/*   Updated: 2022/01/24 14:57:47 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.class.hpp"

Contact::Contact(void){}
Contact::~Contact(void){}

std::string Contact::_fieldNames[NB_FIELDS] = {"first name", "last name", "nickname", "phone number", "darkest secret"};

int Contact::findDataField(std::string field) /* Find propper field to work with */
{
    for (int i = 0; i < NB_FIELDS; i++)
        if (field.compare(Contact::_fieldNames[i]) == 0)
            return i;
    return -1;
}

void    Contact::setDataField(int i, std::string value) /* Set the right data value in the right field */
{
    this->_fields[i] = value;
}

std::string Contact::fetchDataField(int i) const /* Parse or fetch the right data field */
{
    return this->_fields[i];
}

void    Contact::input(void)
{
    for (int i = 0; i < NB_FIELDS; i++)
    {
        std::string value;
        std::cout << Contact::_fieldNames[i] << ": ";
        std::getline(std::cin, value);
        while (value.compare("") == 0)
        {
            std::cout << "ERROR! field cannot be empty!" << std::endl;
            std::cout << Contact::_fieldNames[i] << ": ";
            std::getline(std::cin, value);
        }
        this->setDataField(i, value);
    }
}

void    Contact::display(void) const /* Display current contact */
{
    for (int i = 0; i < 5; i++)
        std::cout << "- " << Contact::_fieldNames[i] << ": " << this->_fields[i] << std::endl;
}
