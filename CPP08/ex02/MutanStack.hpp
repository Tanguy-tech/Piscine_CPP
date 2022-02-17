/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:27:54 by tbillon           #+#    #+#             */
/*   Updated: 2022/02/17 15:31:41 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iterator>

template< typename T >
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>() {}
        MutantStack(const MutantStack &cpy) : std::stack<T>(cpy) {}
        virtual ~MutantStack() {}
        MutantStack & operator=(const MutantStack &rhs) {
			if (this != &rhs)
				std::stack<T>::operator=(rhs);
			return *this;
		}

        typedef typename std::stack<T>::container_type::iterator				iterator;
		typedef typename std::stack<T>::container_type::const_iterator 			const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator 		reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

        iterator begin() { return std::stack<T>::c.begin(); }
		const_iterator begin() const { return std::stack<T>::c.cbegin(); }
		iterator end() { return std::stack<T>::c.end(); }
		const_iterator end() const { return std::stack<T>::c.cend(); }
		reverse_iterator rbegin() { return std::stack<T>::c.rbegin(); }
		const_reverse_iterator rbegin() const { return std::stack<T>::c.crbegin(); }
		reverse_iterator rend() { return std::stack<T>::c.rend(); }
		const_reverse_iterator rend() const { return std::stack<T>::c.crend(); }
};

#endif