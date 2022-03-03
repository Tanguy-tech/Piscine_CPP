/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 08:34:13 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/24 15:54:51 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>
#include <string>

#define BAD_INDEX "Invalid index while trying to access element using [] operator."
#define TAB_SIZE "Size _n must be bigger than 0."

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define DEFAULT "\033[0m"
#define PINK    "\033[35m"

template< typename T>
class Array
{
    public:
        Array<T>() { this->_n = 0; this->_tab = NULL; } /* construction sans parametre qui crée un array vide */
        Array<T>(unsigned int n) /* Construction avec un paramètre de type unsigned int n : crée un array de n éléments initialisés par défaut. */
        {
            if (n > 0)
            {
                _n = n;
                _tab = new T[n];
            }
            else
                std::cout << YELLOW << TAB_SIZE << DEFAULT << std::endl;
        }
        Array<T>(const Array &cpy) 
        { 
            this->_n = cpy._n; 
            this->_tab = new T[this->_n];
            for (unsigned int i = 0; i < cpy._n; i++)
                    _tab[i] = cpy._tab[i];
        }
        Array &operator=(const Array &rhs)
        {
            if (this != &rhs)
            {
                std::cout << "Constructor by assignation called." << std::endl;
                if (rhs._n)
                    _tab = new T[rhs._n];
                for (unsigned int i = 0; i < rhs._n; i++)
                    _tab[i] = rhs._tab[i];
                _n = rhs._n;
            }
            return (*this);
        }
        ~Array<T>() { if (this->_tab) delete [] this->_tab; };

        class InvalidIndexException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return BAD_INDEX;
                }
        };

        T& operator [] (unsigned int n)
        {
            if (n >= _n)
                throw Array::InvalidIndexException();
            return (_tab[n]);
        }

        unsigned int    size() { return _n; };

    private:
        unsigned int    _n;
        T               *_tab;
};

#endif