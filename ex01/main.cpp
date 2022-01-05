/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tanguy <Tanguy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:34:32 by Tanguy            #+#    #+#             */
/*   Updated: 2022/01/05 09:47:32 by Tanguy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
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
    PhoneBook pb;
    
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "|       Welcome to My Awesome PhoneBook!     |" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    menu();
    
    std::string cmd = "";
    std::string input;
    int    index;
    while (42)
    {
        std::cout << "ENTER YOUR COMMAND : ";
        std::getline(std::cin, cmd);
        
        if (cmd.compare("EXIT") == 0)
            break ;
        if (cmd.compare("ADD") == 0)
        {
            if (pb.count() >= 8)
            {
                std::cout << "Too many contacts in your phonebook! cannot add more than 8!" << std::endl;
                continue ;
            }
            Contact c;
            c.input();
            pb.addContact(c);
            std::cout << "Contact " << c.fetchDataField(0) << " " << c.fetchDataField(1) << " successfully added to your phonebook!" << std::endl;
        }
        else if (cmd.compare("SEARCH") == 0)
        {
            pb.display();
            if (pb.count())
            {
                while (42)
                {
                    std::cout << "Enter an index to view full contact info, or 8 to exit: ";
                    std::getline(std::cin, input);
                    if (input.empty() || input.length() > 1 || !isdigit(input[0]))
                        continue ;
                    index = atoi(input.c_str());
                    if ((index >= 0 && index < pb.count()) || index == 8)
                        break;
                    std::cout << "ERROR! you must enter an integer between 0 and 7 as the phonebook can only contain 8 contacts." << std::endl;
                }
                if (index != 8)
                    pb.fetchContact(index).display();
            }
        }
        else
            std::cout << "INVALID COMMAND ! Please enter a correct Command: [ADD] [SEARCH] or [EXIT]" << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Closing PhoneBook.....! Thanks, see you later!" << std::endl;
    return 0;
}
