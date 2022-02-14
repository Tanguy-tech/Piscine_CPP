/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:52:26 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/14 14:15:46 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#define RED "\033[31m"
#define DEFAULT "\033[0m"
#define GREEN "\033[32m"

class Base {public: virtual ~Base(){}};
class A : public Base {};
class B : public Base {};
class C : public Base {};

Base *generate()
{
   int  random = rand() % 3;
   if (random == 0)
        return new A;
   else if (random == 1)
        return new B;
    return new C;
}

void    identify(Base *p)
{
    std::cout << "identify function with ptr" << std::endl;
    A *a = dynamic_cast<A *>(p);
    if (a == NULL)
        std::cout << RED << "Dynamic cast failed for class A." << DEFAULT << std::endl;
    else
        std::cout << GREEN << "Done for class A." << DEFAULT << std::endl;

    B *b = dynamic_cast<B *>(p);
    if (b == NULL)
        std::cout << RED << "Dynamic cast failed for class B." << DEFAULT << std::endl;
    else
        std::cout << GREEN << "Done for class B." << DEFAULT << std::endl;

    C *c = dynamic_cast<C *>(p);
    if (c == NULL)
        std::cout << RED << "Dynamic cast failed for class C." << DEFAULT << std::endl;
    else
        std::cout << GREEN << "Done for class C." << DEFAULT << std::endl;
}

void identify(Base &p)
{
    std::cout << "identify function with address" << std::endl;
    try
    {
        A  a = dynamic_cast<A &>(p);
        std::cout << GREEN << "Done for class A." << DEFAULT << std::endl;
        
    }
    catch(std::bad_cast &e)
    {
        std::cout << RED << "Dynamic cast failed for class A." << DEFAULT << std::endl;
    }
    
    try
    {
        B   b = dynamic_cast<B &>(p);
        std::cout << GREEN << "Done for class B." << DEFAULT << std::endl;
        
    }
    catch(std::bad_cast &e)
    {
        std::cout << RED << "Dynamic cast failed for class B." << DEFAULT << std::endl;
    }
    
    try
    {
        C   c = dynamic_cast<C &>(p);
        std::cout << GREEN << "Done for class C." << DEFAULT << std::endl;
        
    }
    catch(std::bad_cast &e)
    {
        std::cout << RED << "Dynamic cast failed for class C." << DEFAULT << std::endl;
    }
}

int main()
{
    srand(time(NULL));
    Base *test = generate();

    identify(test);
    std::cout << std::endl;
    identify(*test);
    return 0;
}