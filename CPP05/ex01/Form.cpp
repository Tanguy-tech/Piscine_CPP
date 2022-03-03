/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:04:06 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/22 14:30:18 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name(DEFAULT_FORM_NAME), _is_signed(false), _sign_grade(DEFAULT_SIGN_GRADE), _exec_grade(DEFAULT_EXEC_GRADE)
{
    std::cout << "Form default constructor called.";
    std::cout << GREEN << " By default, DefaultForm not signed with grade 10 needed to be signed and grade 10 needed to be executed was created with success."  << DEFAULT << std::endl;
}

Form::Form(std::string name, int sign_grade, int exec_grade) : _name(name), _is_signed(false), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
    std::cout << "Form constructor with parameters called. ";
    try {
        if (name.empty())
            throw Form::BadFormNameException();
        if (sign_grade < MING || exec_grade < MING)
            throw Form::GradeTooHighException();
        else if (sign_grade > MXG || exec_grade > MXG)
            throw Form::GradeTooLowException();
        else
        {
            std::cout << GREEN << "Form " << name;
            if (this->_is_signed == true)
                std::cout << " already signed ";
            else
                std::cout << " not signed ";
            std::cout << " with " << sign_grade << " grade needed to be signed and " << exec_grade << " grade needed to be executed, has been created with success." << DEFAULT << std::endl;
        }
    }
    catch (const Form::BadFormNameException &e)
    {
        std::cout << RED << e.what() << DEFAULT << std::endl;
        return ;
    }
    catch (const Form::GradeTooHighException &e)
    {
        std::cout << YELLOW << this->_name << " : ";
        std::cout << RED << e.what() << DEFAULT << std::endl;
        return ;
    }
    catch (const Form::GradeTooLowException &e)
    {
        std::cout << YELLOW << this->_name << " : ";
        std::cout << RED << e.what() << DEFAULT << std::endl;
        return ;
    }
}

Form::~Form()
{
    std::cout << YELLOW << "Form destructor called for ";
    if (this->_name.empty())
     std::cout << "<NO NAME>";
    else
        std::cout << this->_name;
    std::cout << DEFAULT << std::endl;
}

int Form::getSignGrade() const
{
    return this->_sign_grade;
}

int Form::getExecGrade() const
{
    return this->_exec_grade;
}

std::string Form::getName() const
{
    return this->_name;
}

bool Form::setSigned(bool is_signed)
{
    return this->_is_signed = is_signed;
}

void Form::beSigned(Bureaucrat &bur)
{
    try {
        if (bur.getGrade() > this->_sign_grade)
            throw Form::GradeTooLowException();
        else
            std::cout << GREEN << bur.getName() << " just signed " << this->_name << " form!" << DEFAULT << std::endl;
    }
    catch (Form::GradeTooLowException &e)
    {
        std::cout << YELLOW << this->_name << " cannot be signed by a bureaucrat under grade " << this->_sign_grade << ". ";
        std::cout << RED << e.what() << DEFAULT << std::endl;
    }
}

std::ostream &operator<<(std::ostream &o, const Form &form) {
	o << BLUE << form.getName() << ", form, need grade " << form.getSignGrade() << " to be signed and grade " << form.getExecGrade() << " to be executed." <<   DEFAULT;
	return o;
}
