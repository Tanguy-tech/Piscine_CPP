/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tanguy <Tanguy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:27:03 by Tanguy            #+#    #+#             */
/*   Updated: 2021/12/15 11:43:30 by Tanguy           ###   ########.fr       */
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
        if (value.compare("") == 0)
            std::cout << "ERROR! field cannot be empty!" << std::endl;
        this->setDataField(i, value);
    }
}

void    Contact::display(void) const /* Display current contact */
{
    for (int i = 0; i < 8; i++)
        std::cout << "- " << Contact::_fieldNames[i] << ": " << this->_fields[i] << std::endl;
}
