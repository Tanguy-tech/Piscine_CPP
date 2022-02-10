/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:43:01 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/10 12:17:35 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(DEFAULT_NAME), _grade(DEFAULT_GRADE)
{
     std::cout << GREEN << "Bureaucrat default constructor called." << DEFAULT << std::endl;
     std::cout << GREEN << "By default, Bureaucrat " << _name << " with grade " << _grade << " was created with success!" << DEFAULT << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    std::cout << GREEN << "Bureaucrat constructor with parameters called." << DEFAULT << std::endl;
    try {
        if (name.empty())
        {
            _name = DEFAULT_NAME;
            throw Bureaucrat::BadNameException();
        }
        if (grade < MING)
            throw Bureaucrat::GradeTooHighException();
        else if (grade > MXG)
            throw Bureaucrat::GradeTooLowException();
        else
            std::cout << GREEN << "Bureaucrat " << name << " with grade " << grade << " was created with success!" << DEFAULT << std::endl;
    }
    catch (const Bureaucrat::BadNameException &e)
    {
        std::cout << RED << e.what() << DEFAULT << std::endl;
        return ;
    }
    catch (const Bureaucrat::GradeTooHighException &e)
    {
        std::cout << RED << e.what() << DEFAULT << std::endl;
        return ;
    }
    catch (const Bureaucrat::GradeTooLowException &e)
    {
        std::cout << RED << e.what() << DEFAULT << std::endl;
        return ;
    }
}

Bureaucrat::~Bureaucrat()
{
    std::cout << YELLOW << "Bureaucrat destructor called for " << this->_name << DEFAULT << std::endl;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

std::string Bureaucrat::getName() const
{
    return this->_name;
}

void    Bureaucrat::upGrade(int incr)
{
    try {
        if (this->getGrade() - incr < MING)
            throw Bureaucrat::IncrementTooHighException();
    }
    catch (const Bureaucrat::IncrementTooHighException &e)
    {
        std::cout << RED << e.what() << DEFAULT << std::endl;
        return ;
    }
    this->_grade -= incr;
    std::cout << GREEN << this->_name << "'s grade has been incremented." << DEFAULT << std::endl;
}

void    Bureaucrat::downGrade(int decr)
{
    try {
        if (this->getGrade() + decr > MXG)
            throw Bureaucrat::DecrementTooLowException();
    }
    catch (const Bureaucrat::DecrementTooLowException &e)
    {
        std::cout << RED << e.what() << DEFAULT << std::endl;
        return ;
    }
    this->_grade += decr;
    std::cout << GREEN << this->_name << "'s grade has been decremented." << DEFAULT << std::endl; 
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &bur) {
	o << BLUE << bur.getName() << ", bureaucrat grade " << bur.getGrade() << DEFAULT;
	return o;
}