/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:48:48 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/21 14:43:24 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main()
{
    const Animal* a = new Animal();
    const Animal* c = new Cat();
    const Animal* d = new Dog();

    std::cout << std::endl;
    c->makeSound(); //will output the cat sound!
    std::cout << "c is an Animal of type " << c->getType() << std::endl;
    std::cout << std::endl;

    d->makeSound(); //will output the cat sound!
    std::cout << "d is an Animal of type " << d->getType() << std::endl;
    std::cout << std::endl;
    
    a->makeSound(); //will output the Animal default sound!
    std::cout << std::endl;

    delete c;
    delete d;
    delete a;

    std::cout << std::endl;
    const WrongAnimal* wronganimal = new WrongAnimal();
    const WrongAnimal* wrongcat = new WrongCat();

    wronganimal->makeSound();
    wrongcat->makeSound();
    
    return (0);

    return 0;
}