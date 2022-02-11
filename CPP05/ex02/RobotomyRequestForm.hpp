/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 10:56:03 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/11 14:01:44 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotoMyRequestForm : public Form
{
    public:
        RobotoMyRequestForm(std::string const &target);
        virtual ~RobotoMyRequestForm();

        virtual void execute(Bureaucrat const &executor) const;

    private:
        std::string const   _target; 
        RobotoMyRequestForm();
        RobotoMyRequestForm(const RobotoMyRequestForm &cpy);
        RobotoMyRequestForm &operator=(const RobotoMyRequestForm &rhs);
};

#endif