/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:26:48 by tbillon           #+#    #+#             */
/*   Updated: 2022/01/26 09:56:54 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
typedef void (Karen::*call_functions)(void);

Karen::Karen()
{}

Karen::~Karen()
{}

void    Karen::complain(std::string level)
{
    std::string lvlcode[] = {  std::string("debug"), 
                                std::string("info"),
                                std::string("warning"),
                                std::string("error")};
    call_functions   calls[] = {&Karen::debug,
                                &Karen::info,
                                &Karen::warning,
                                &Karen::error};
    for (int i = 0; i < 4; i++)
        if (level == lvlcode[i])
            (this->*calls[i])();
}

void    Karen::debug(void)
{
    std::cout << DEBUG << std::endl;
}

void    Karen::info(void)
{
    std::cout << INFO << std::endl;
}

void    Karen::warning(void)
{
    std::cout << WARNING << std::endl;
}

void    Karen::error(void)
{
    std::cout << ERROR << std::endl;
}