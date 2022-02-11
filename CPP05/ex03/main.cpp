/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:18:39 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/11 14:50:42 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Bureaucrat bernard; /* Initialisation par defaut */
    Bureaucrat jeanmarc("Jean-Marc", 25); /* Initialisation avec parametres et gestion d'erreurs */
    Bureaucrat anthony("", 2); /* Ici le nom est vide -> on renvoie une erreur et set le nom au nom par defaut défini */
    Bureaucrat adrien("Adrien", 0); /* Ici le grade est trop haut  -> on renvoie une erreur */
    // Form       *demandeAsile; /* Ici un Fom est créer par defaut avec DefaultFormName, 10 et 10 comme grade necessaire, et non signé */
    // Form       *Apl("", 25, 150); /* Ici un Fom est créer SANS NOM.., deux entier comme grade necessaire, et non signé */
    // Form       *retraitPermis("RetraitDePermis", 25, 150); /* Ici un Fom est créer avec un nom, deux entier comme grade necessair, et non signée */
    // Form       *amande("Amande", 250, 12); /* Ici un Fom est créer avec un nom, un grade necessaire pour signé trop bas! ERREUR donc */
    // Form       *obtentionAllocations("ObtentionAllocation", 20, 150); /* Ici un Fom est créer avec un nom, deux entier comme grade necessaire, et non signé */
    ShrubberyCreationForm   shru("test"); /* ShruberryCreationForm with default parameters */
    RobotoMyRequestForm     robot("robotFrom");
    PresidentialPardonForm  pardon("pardon_test");
    Intern  intern;



    // std::cout << std::endl;
    // std::cout << "let's decrement bernard's grade of 340 lvl!" << std::endl;
    // bernard.downGrade(340); /* Should throw an error and not decrement bernard's grade */
    // std::cout << "Bernard's grade is : " << bernard.getGrade() << std::endl;

    // std::cout << "Now let's increment jeanmarc's grade of 1 lvl!" << std::endl;
    // jeanmarc.upGrade(1); /* Should work and increment jeanmarc's grade to 1 */
    // std::cout << "jeanmarc's grade is : " << jeanmarc.getGrade() << std::endl;

    // std::cout << "Finally let's decrement Anthony's grade of 18 lvl!" << std::endl;
    // anthony.downGrade(18);/* Should work and decrement anthony's (named Bernard by defaukt) grade to 20 */
    // std::cout << "anthony's grade is : " << anthony.getGrade() << std::endl;
    // std::cout << std::endl;

    // std::cout << "demandeAsile is NOT SIGNED, grade needed to sign is " << demandeAsile.getSignGrade() << " , and grade needed to execute is " << demandeAsile.getExecGrade() << "." << std::endl;
    // std::cout << "Apl is NOT SIGNED, grade needed to sign is " << Apl.getSignGrade() << " , and grade needed to execute is " << Apl.getExecGrade() << "." << std::endl;
    // std::cout << "RetraitPermis is NOT SIGNED, grade needed to sign is " << retraitPermis.getSignGrade() << " , and grade needed to execute is " << retraitPermis.getExecGrade() << "." << std::endl;
    // std::cout << "ObtentionAllocations is NOT SIGNED, grade needed to sign is " << obtentionAllocations.getSignGrade() << " , and grade needed to execute is " << obtentionAllocations.getExecGrade() << "." << std::endl;
    // std::cout << std::endl;

    // std::cout << "Let's make JeanMarc sign the RetraiDePermis Form." << std::endl;
    // jeanmarc.signForm(retraitPermis);
    // retraitPermis.beSigned(jeanmarc);
    // std::cout << "Now let's try to make JeanMarc sign the obtentionAllocation Form." << std::endl;
    // jeanmarc.signForm(obtentionAllocations);
    // obtentionAllocations.beSigned(jeanmarc);
    // std::cout << std::endl;

    std::cout << "Let's make JeanMarc execute the ShrubberyCreationForm." << std::endl;
    shru.execute(jeanmarc);
    std::cout << "Ohh right, ok JeanMarc needs to sign the ShrubberyCreationForm first." << std::endl;
    jeanmarc.signForm(shru);
    shru.beSigned(jeanmarc);
    std::cout << "Now let JeanMarc execute the ShrubberyCreationForm." << std::endl;
    shru.execute(jeanmarc);
    std::cout << std::endl;

    std::cout << "Now let's decrement jeanmarc's grade of 125 lvl!" << std::endl;
    jeanmarc.downGrade(125); /* Should work and increment jeanmarc's grade to 1 */
    std::cout << "jeanmarc's grade is : " << jeanmarc.getGrade() << std::endl;
    std::cout << "Now let JeanMarc execute the ShrubberyCreationForm." << std::endl;
    shru.execute(jeanmarc);
    std::cout << std::endl;

    std::cout << "It's now time to try with the RobotoMyRequestForm..!" << std::endl;
    std::cout << "jeanmarc's grade is : " << jeanmarc.getGrade() << std::endl;
    std::cout << "Now let JeanMarc execute the RobotoMyRequestForm." << std::endl;
    robot.execute(jeanmarc);
    std::cout << "Ohh right, ok JeanMarc needs to sign the ShrubberyCreationForm first." << std::endl;
    jeanmarc.signForm(robot);
    robot.beSigned(jeanmarc);
    std::cout << "Ok.. so let's increment jeanmarc's grade of 106 lvl!" << std::endl;
    jeanmarc.upGrade(106); /* Should work and increment jeanmarc's grade to 1 */
    std::cout << "jeanmarc's grade is : " << jeanmarc.getGrade() << std::endl;
    std::cout << "JeanMarc should now be able to sign the RobotoMyRequestForm." << std::endl;
    jeanmarc.signForm(robot);
    robot.beSigned(jeanmarc);
    std::cout << "Now let JeanMarc execute the RobotoMyRequestForm again." << std::endl;
    robot.execute(jeanmarc);
    std::cout << std::endl;

    std::cout << "Finally time to try with the PresidentialPardonForm..!" << std::endl;
    std::cout << "jeanmarc's grade is : " << jeanmarc.getGrade() << std::endl;
    std::cout << "Now let JeanMarc execute the PresidentialPardonForm." << std::endl;
    pardon.execute(jeanmarc);
     std::cout << "Ohh right, ok JeanMarc needs to sign the PresidentialPardonForm first." << std::endl;
    jeanmarc.signForm(pardon);
    pardon.beSigned(jeanmarc);
    std::cout << "Ok.. so let's increment jeanmarc's grade of 20 lvl!" << std::endl;
    jeanmarc.upGrade(20); /* Should work and increment jeanmarc's grade to 1 */
    std::cout << "jeanmarc's grade is : " << jeanmarc.getGrade() << std::endl;
    std::cout << "JeanMarc should now be able to sign the RobotoMyRequestForm." << std::endl;
    jeanmarc.signForm(pardon);
    pardon.beSigned(jeanmarc);
    std::cout << "Now let JeanMarc execute the PresidentialPardonForm again." << std::endl;
    pardon.execute(jeanmarc);
    std::cout << "Jeanmarc's grade is enough to signe the form but not to execute it, let's incerement it again of 19 lvl!" << std::endl;
    jeanmarc.upGrade(19); /* Should work and increment jeanmarc's grade to 1 */
    std::cout << "Now let JeanMarc execute the PresidentialPardonForm again." << std::endl;
    /* pardon.execute(jeanmarc); no need to write this this time as the bureacurat got the memeber function to execute the form  */
    jeanmarc.executeForm(pardon);
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "An intern is now gonna try to create a form!" << std::endl;
    intern.makeForm("Presidential pardon", "Bender");
    std::cout << "Oups.. wrong spelling.. lets try again!" << std::endl;
    intern.makeForm("presidential pardon", "Bender");
    std::cout << std::endl;
    std::cout << std::endl;

    return 0;
}