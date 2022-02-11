/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:29:11 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/11 14:46:11 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#define CREATE_FORM(object, function) ((object).*(function))

class Intern
{
    public:
        Intern();
        ~Intern();

        Form *makeForm(std::string const f_name, std::string const target);
        Form *createPresidentialPardonForm(std::string const target);
        Form *createRobotomyRequestForm(std::string const target);
        Form *createShrubberyCreationForm(std::string const target);

    private:
        Intern(const Intern &cpy);
        Intern &operator=(const Intern &rhs);
};

/* create createFormFunction type that points to a member function of an Intern that takes (std::string) */
typedef Form* (Intern::*createFormFunction)(std::string formTarget);


#endif