/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:30:43 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/14 11:33:23 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdint>
#include <iostream>

struct Data {
    int i;
    char c;
};

uintptr_t serialize(Data* ptr) {
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
    return (reinterpret_cast<Data*>(raw));
}

int main(void) {
    Data A;
    A.i = 42;
    A.c = 'c';

    uintptr_t address = serialize(&A);
    Data* result = deserialize(address);

    std::cout << result->i << "\n"
              << result->c << std::endl;

    std::cout << "data1 address: " << &A << "\n"
              << "data2 address: " << result << "\n"
              << std::endl;
    return 0;
}