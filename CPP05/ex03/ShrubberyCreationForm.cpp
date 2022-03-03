/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 08:30:16 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/22 14:44:03 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
    std::cout << "ShrubberyCreationForm default constructor called." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << YELLOW << "ShrubberyCreationForm destructor called for ";
    if (this->getName().empty())
     std::cout << "<NO NAME>";
    else
        std::cout << this->getName();
    std::cout << DEFAULT << std::endl;
}

void    ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    try {
        if (this->getIsSigned() == 1 && executor.getGrade() <= this->getExecGrade())
        {
            std::ofstream   ofs;
            std::string const fileName = this->_target + "_shrubbery";
            std::cout << BLUE << fileName << " created with success!" << DEFAULT << std::endl;
            ofs.open(fileName.c_str());
            /* write here in file */
            ofs << "ASCII TREE" << std::endl;
            ofs.close();
            std::cout << BLUE << fileName << " filled and closed!" << DEFAULT << std::endl;
            std::cout << GREEN << "ShrubberyCreationForm " << fileName << " executed with success!" << DEFAULT << std::endl;
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

std::ostream &operator<<(std::ostream &o, const ShrubberyCreationForm &form) {
	o << BLUE << form.getName() << ",is a form need grade " << form.getSignGrade() << " to be signed and grade " << form.getExecGrade() << " to be executed." <<   DEFAULT;
	return o;
}