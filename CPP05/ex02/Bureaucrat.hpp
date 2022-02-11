/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:19:08 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/11 14:02:44 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

#define MXG 150 /* Maximum grade value */
#define MING 1 /* Minimum grade value */
#define DEFAULT_NAME "default_Bernard"
#define DEFAULT_GRADE 12
#define G_TOO_LOW "Provided grade is too low! please provide a grade between 150 and 1 (1 being the highest and 150 the lowest)."
#define G_TOO_HIGH "Provided grade is too High! please provide a grade between 150 and 1 (1 being the highest and 150 the lowest)."
#define BAD_INCR "Cannot increment grade as it will be too high! Grade has to be above or equal to 1 and below or equal to 150."
#define BAD_DECR "Cannot decrement grade as it will be too low! Grade has to be above or equal to 1 and below or equal to 150."
#define COMP_FAILED "Something went wrong during compilation and program stopped."
#define BAD_NAME "Empty or incorrect name imputed! Default name has been set instead to avoid errors."
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define DEFAULT "\033[0m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define PINK    "\033[35m"

class Form;

class Bureaucrat
{
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();

        class GradeTooHighException: public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return G_TOO_HIGH;
                }
        };
        class GradeTooLowException: public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return G_TOO_LOW;
                }
        };
        class BadNameException: public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return BAD_NAME;
                }
        };
        class IncrementTooHighException: public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return BAD_INCR;
                }
        };
        class DecrementTooLowException: public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return BAD_DECR;
                }
        };

        std::string getName() const;
        int         getGrade() const;
        void        upGrade(int incr); /* decrement grade == --grade as 1 is highest grade and 150 the lowest */
        void        downGrade(int decr); /* decrement grade == ++grade as 1 is highest grade and 150 the lowest */
        void        signForm(Form &form);

        virtual void        executeForm(Form const &form) const;

    private:
        std::string  _name;
        int         _grade;
        Bureaucrat(const Bureaucrat &cpy);
        Bureaucrat &operator=(const Bureaucrat &rhs);
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & i);

#endif