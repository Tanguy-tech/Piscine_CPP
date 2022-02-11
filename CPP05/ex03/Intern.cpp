/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:33:05 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/11 14:49:26 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern default constructor called." << std::endl;
}

Intern::~Intern()
{
    std::cout << YELLOW << "Intern destructor called." << std::endl;
}

Form * Intern::makeForm(std::string const f_name, std::string const target)
{
    std::string array[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	createFormFunction list[3] = {&Intern::createPresidentialPardonForm, &Intern::createRobotomyRequestForm, &Intern::createShrubberyCreationForm};

	for (int i = 0; i < 3; i++)
	{
		if (f_name == array[i])
		{
			std::cout << BLUE << "Intern creates " << f_name << "." << DEFAULT << std::endl;
			return CREATE_FORM(*this, list[i]) (target);
		}
	}
	std::cout << YELLOW << "No name matching to create a form." << DEFAULT << std::endl;
	return NULL;
}

Form *Intern::createPresidentialPardonForm(std::string formTarget) {
	return new PresidentialPardonForm(formTarget);
}

Form *Intern::createRobotomyRequestForm(std::string formTarget) {
	return new RobotoMyRequestForm(formTarget);
}

Form *Intern::createShrubberyCreationForm(std::string formTarget) {
	return new ShrubberyCreationForm(formTarget);
}
