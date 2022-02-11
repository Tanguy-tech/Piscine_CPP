/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:00:27 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/11 11:48:41 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotoMyRequestForm::RobotoMyRequestForm(std::string const &target) : Form("RobotoMyRequestForm", 75, 45), _target(target)
{
    std::cout << "RobotoMyRequestForm constructor with parameter called." << std::endl;
}

RobotoMyRequestForm::~RobotoMyRequestForm()
{
    std::cout << YELLOW << "RobotoMyRequestForm destructor called for ";
    if (this->getName().empty())
     std::cout << "<NO NAME>";
    else
        std::cout << this->getName();
    std::cout << DEFAULT << std::endl;
}

void RobotoMyRequestForm::execute(Bureaucrat const &executor) const
{
    try {
        if (this->getIsSigned() == 1 && executor.getGrade() <= this->getExecGrade())
        {
            std::cout << PINK << "*** DRILL NOISES ***" << DEFAULT << std::endl;
            int r = rand() % 2;
            if (r)
                std::cout << GREEN << this->_target << " has been robotised with success!" << DEFAULT << std::endl;
            else
                std::cout << RED << "Robotisation operation of " << this->_target << " failed!" << DEFAULT << std::endl;
        }
        else
        {
            if (!this->getIsSigned())
                throw Form::FormNotSignedException();
            else
                throw Form::GradeTooLowException();
        }
    }
    catch (const Form::FormNotSignedException &e)
    {
        std::cout << RED << e.what() << DEFAULT << std::endl;
        return ;
    }
    catch (const Form::GradeTooLowException &e)
    {
        std::cout << RED << e.what() << DEFAULT << std::endl;
        return ;
    }
}