/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:52:19 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/22 14:33:45 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
     std::cout << "PresidentialPardonForm constructor with parameter called." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << YELLOW << "PresidentialPardonForm destructor called for ";
    if (this->getName().empty())
     std::cout << "<NO NAME>";
    else
        std::cout << this->getName();
    std::cout << DEFAULT << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    try {
        if (this->getIsSigned() == 1 && executor.getGrade() <= this->getExecGrade())
            std::cout << GREEN << executor.getName() << " has been pardonned by Zaphod Beeblebrox." << DEFAULT << std::endl;
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

std::ostream &operator<<(std::ostream &o, const PresidentialPardonForm &form) {
	o << BLUE << form.getName() << ",is a form need grade " << form.getSignGrade() << " to be signed and grade " << form.getExecGrade() << " to be executed." <<   DEFAULT;
	return o;
}