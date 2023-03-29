/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 21:59:15 by rnaamaou          #+#    #+#             */
/*   Updated: 2023/01/10 21:59:16 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <deque>
#include <stack>
#include <iostream>

template<typename T, typename Cont = std::deque<T> >
class MutantStack : public std::stack <T, Cont>
{
    public: 
        typedef typename Cont::iterator iterator;

        MutantStack() : std::stack<T, Cont>(){};
        MutantStack(const MutantStack& other) : std::stack<T, Cont>(other){};
        MutantStack operator=(const MutantStack& other)
        {
            if (this == &other)
                return *this;
            std::stack<T, Cont>::operator = (other);
            return *this;
        };
        ~MutantStack(){};
        iterator begin() 
        {
            return this->c.begin();
        };
        iterator end()
        {
            return this->c.end();
        };
};