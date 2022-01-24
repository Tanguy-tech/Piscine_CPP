/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:43:45 by Tanguy            #+#    #+#             */
/*   Updated: 2022/01/24 14:59:29 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "contact.class.hpp"

class PhoneBook
{
    public:
    
        PhoneBook(void);
        ~PhoneBook(void);

        int     count(void) const;
        Contact fetchContact(int i) const;
        void    addContact(Contact new_contact);
        void    display(void) const;
    
    private:

        int     _count;
        Contact _contacts[8];
};

#endif