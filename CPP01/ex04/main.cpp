/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:59:28 by tbillon           #+#    #+#             */
/*   Updated: 2022/01/25 16:22:51 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(int ac, char **av)
{
    // check for enough args and not ==
    if (ac != 4)
    {
        std::cout << ERR_ARGS << std::endl;
        exit (-1);
    }
    // get params in variabes
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    // is the first string non empty ? .empty()
    if ((filename.empty()) || (s1.empty()) || (s2.empty()))
    {
        std::cout << ERR_EMPTY << std::endl;
        exit (-1);
    }

    // check filename is valid 
    std::ifstream file;
    file.open(filename.c_str()); // c_str permet d'acceder au char* contenus dans filename
    if (file.is_open())
    {
        // read file in buffer
        std::stringstream strStream;
        strStream << file.rdbuf(); // read whole buffer into streStream
        file.close();
        std::string strCpy = strStream.str(); // return a string object with a copy of the current contents in the stream buffer.
        size_t index = 0;
        // replace 
        while ((index = strCpy.find(s1, index)) != std::string::npos)
	    {
            strCpy.erase(index, s1.length());
            strCpy.insert(index, s2);
            index += s2.length();
	    }
        std::string name = ".replace";
        filename += name;
        std::ofstream output;
        output.open(filename.c_str());
        // write to file
        if (output.is_open())
        {
            output << strCpy;
            // close stream and exit
            output.close();
            exit (0);
        }
        std::cout << ERR_NEW_FILE << std::endl;
        exit (-1);
    }
    std::cout << ERR_OPEN << std::endl;
    exit (-1);
}