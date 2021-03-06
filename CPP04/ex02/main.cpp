/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:48:48 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/21 15:48:42 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

#define TAB_SIZE 10

int main()
{
    AAnimal* meta[TAB_SIZE];

    for (int i = 0; i < TAB_SIZE; i++)
    {
        if ( i % 2 == 0)
			meta[i] = new Dog();
		else
			meta[i] = new Cat();
    }
    std::cout << std::endl;
    std::cout << "A table of "<< TAB_SIZE << " Animals objects has been created" << std::endl;

    for (int i = 0; i < TAB_SIZE; i++)
        delete meta[i];
    std::cout << std::endl;
    std::cout << "The table of " << TAB_SIZE << " Animals objects has been deleted" << std::endl;

    std::cout << std::endl;
    std::cout << "----- Subject example main -----" << std::endl;
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    std::cout << std::endl;
    delete j;//should not create a leak
    delete i;


    return 0;
}