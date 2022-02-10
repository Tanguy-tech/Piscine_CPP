/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:56:27 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/10 16:27:02 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

#define DEFAULT_FORM_NAME "DefaultForm"
#define DEFAULT_SIGN_GRADE 10
#define DEFAULT_EXEC_GRADE 10
#define FG_TOO_LOW "Provided grade is too low to sign or execute this form."
#define FG_TOO_HIGH "Provided grade is too High to sign or execute this form."
#define BAD_FORM_NAME "Empty or incorrect form name imputed! Form name has been left empty."
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define DEFAULT "\033[0m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

class Form
{
    public:
        Form();
        Form(std::string name, int sign_grade, int exec_grade);
        Form(const Form &cpy);
        Form &operator=(const Form &rhs);
        ~Form();

        class GradeTooHighException: public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return FG_TOO_HIGH;
                }
        };
        class GradeTooLowException: public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return FG_TOO_LOW;
                }
        };
        class BadFormNameException: public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return BAD_FORM_NAME;
                }
        };

        bool        setSigned(bool is_signed);
        void        beSigned(Bureaucrat &bur);
        std::string getName();
        int         getSignGrade();
        int         getExecGrade();

    private:
        std::string const _name;
        bool              _is_signed;
        int  const        _sign_grade;
        int  const        _exec_grade;

};

std::ostream & operator<<(std::ostream & o, Form const & form);

#endif