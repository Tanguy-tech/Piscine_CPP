/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 08:23:55 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/11 14:01:51 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
    public:
        ShrubberyCreationForm(std::string const target);
        virtual ~ShrubberyCreationForm();

        virtual void execute(Bureaucrat const &executor) const;


    private:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &cpy);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm &rhs);
        std::string const _target;
};

#endif