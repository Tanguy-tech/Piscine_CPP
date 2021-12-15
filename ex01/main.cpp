/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tanguy <Tanguy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:34:32 by Tanguy            #+#    #+#             */
/*   Updated: 2021/12/15 11:55:24 by Tanguy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.class.hpp"

int main(void)
{
    /* Conditions des 8 contact et erreur si plus */
    /* boucle while 42 ou tant que la ommande n'est pas EXIT */
    PhoneBook pb;

    pb.display();
    return 0;
}
