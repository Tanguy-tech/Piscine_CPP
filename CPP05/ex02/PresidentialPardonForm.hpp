/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:49:35 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/11 14:01:30 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    public:
        PresidentialPardonForm(std::string const &target);
        virtual ~PresidentialPardonForm();

        virtual void execute(Bureaucrat const &executor) const;

    private:
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &cpy);
        PresidentialPardonForm& operator=(const PresidentialPardonForm &rhs);
        std::string const _target;
};

#endif