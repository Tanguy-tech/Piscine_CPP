/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:31:48 by tbillon           #+#    #+#             */
/*   Updated: 2022/03/01 13:57:44 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutanStack.hpp"

#include <iostream>
#include <list>

int main()
{
    MutantStack<int> mstack;
    std::cout << "We create a new mutan stack, and add tow interger to it, 5 and 17." << std::endl;
    mstack.push(5);
    mstack.push(17);
    std::cout << "Now we display the one on top of the stack, technically the last one added:" << std::endl;
    std::cout << mstack.top() << std::endl;
    std::cout << "Now we pop the last one added and display the new size of the mutan stack:" << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;

    std::cout << std::endl;
    std::cout << "Now let's add 4 interger, 3, 5, and 737, and loop on the stack to display them:" << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);


    std::cout << "-----------------------------LIST-------------------------------" << std::endl;
    std::list<int> listStack;
    std::cout << "We create a new mutan stack, and add tow interger to it, 5 and 17." << std::endl;
    listStack.push_back(5);
    listStack.push_back(17);
    std::cout << "Now we display the one on top of the stack, technically the last one added:" << std::endl;
    std::cout << listStack.back() << std::endl;
    std::cout << "Now we pop the last one added and display the new size of the mutan stack:" << std::endl;
    listStack.pop_back();
    std::cout << listStack.size() << std::endl;

    std::cout << std::endl;
    std::cout << "Now let's add 4 interger, 3, 5, and 737, and loop on the stack to display them:" << std::endl;
    listStack.push_back(3);
    listStack.push_back(5);
    listStack.push_back(737);
    //[...]
    listStack.push_back(0);
    for (std::list<int>::iterator it=listStack.begin(); it != listStack.end(); ++it)
        std::cout << *it << std::endl;
    return 0;
}