/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanguy <tanguy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 11:28:41 by tanguy            #+#    #+#             */
/*   Updated: 2022/02/13 11:56:06 by tanguy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(std::string to_conv) : _to_conv(to_conv){}

Convert::~Convert(){}

bool    Convert::isConvertible()
{
    /* if this is convertible */
    return true;
    /* otherwise  */
    return false;
}