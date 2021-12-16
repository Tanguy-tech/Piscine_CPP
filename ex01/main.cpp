/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tanguy <Tanguy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:34:32 by Tanguy            #+#    #+#             */
/*   Updated: 2021/12/16 10:32:31 by Tanguy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.class.hpp"

void    menu(void)
{
    std::cout << "Please use the follwing commands:" << std::endl << std::endl;
    std::cout << "- ADD : ADD cmd will display a form" << std::endl;
    std::cout << "        that you will have to fill up" << std::endl;
    std::cout << "        in order to add a contact to" << std::endl;
    std::cout << "        the phonebook" << std::endl << std::endl;
    std::cout << "- SEARCH : SEARCH cmd will display a list" << std::endl;
    std::cout << "           af all the availiable contacts" << std::endl;
    std::cout << "           under 4 colums" << std::endl << std::endl;
    std::cout << "- EXIT : EXIT cmd will quit the program" << std::endl;
    std::cout << "         note that all the data will be lost" << std::endl;
}

int main(void)
{
    /* Conditions des 8 contact et erreur si plus */
    /* boucle while 42 ou tant que la ommande n'est pas EXIT */
    // PhoneBook pb;
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "|       Welcome to My Awesome PhoneBook!     |" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;

    menu();
    // pb.display();
    return 0;
}
