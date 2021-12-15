/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tanguy <Tanguy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:20:58 by Tanguy            #+#    #+#             */
/*   Updated: 2021/12/15 11:07:19 by Tanguy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H

#include <iostream>

#define NB_FIELDS 5

class Contact
{
    public:
    
        Contact(void);
        ~Contact(void);

        std::string		fetchDataField(int field) const;
		void			input(void);
        void			setDataField(int i, std::string value);
		void			display(void) const;

		static int		findDataField(std::string field);

    private:

		static std::string	_fieldNames[NB_FIELDS];
		std::string			_fields[NB_FIELDS];
};

#endif