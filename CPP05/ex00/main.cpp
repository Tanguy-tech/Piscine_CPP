/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:18:39 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/10 12:11:43 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat bernard; /* Initialisation par defaut */
    Bureaucrat jeanmarc("Jean-Marc", 2); /* Initialisation avec parametres et gestion d'erreurs */
    Bureaucrat anthony("", 2); /* Ici le nom est vide -> on renvoie une erreur et set le nom au nom par defaut défini */

    std::cout << std::endl;
    std::cout << "let's decrement bernard's grade of 340 lvl!" << std::endl;
    bernard.downGrade(340); /* Should throw an error and not decrement bernard's grade */
    std::cout << "Bernard's grade is : " << bernard.getGrade() << std::endl;

    std::cout << "Now let's increment jeanmarc's grade of 1 lvl!" << std::endl;
    jeanmarc.upGrade(1); /* Should work and increment jeanmarc's grade to 1 */
    std::cout << "jeanmarc's grade is : " << jeanmarc.getGrade() << std::endl;

    std::cout << "Finally let's decrement Anthony's grade of 18 lvl!" << std::endl;
    anthony.downGrade(18);/* Should work and decrement anthony's (named Bernard by defaukt) grade to 20 */
    std::cout << "anthony's grade is : " << anthony.getGrade() << std::endl;

    return 0;
}