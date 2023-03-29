/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 21:59:03 by rnaamaou          #+#    #+#             */
/*   Updated: 2023/01/10 21:59:04 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <exception>
#include <iterator>


Span::Span() : vec(0), N(0){};

Span::Span(const unsigned int n) : vec(0), N(n){}

Span::Span( const Span& other ) : vec(0), N(other.N)
{
    vec.insert(vec.end(),other.vec.begin(),other.vec.end());
}

Span &Span::operator = (const Span& other)
{
    if (this == &other) 
        return *this;
    N = other.N;
    vec.insert(vec.end(),other.vec.begin(),other.vec.end());
    return *this;
}

Span::~Span()
{
}

void Span::addNumber(int x)
{
    if (vec.size() == N)
        throw std::runtime_error("Span::addNumber: cannot add more than N elements");
    else
        vec.push_back(x);
};

int Span::shortestSpan()
{
    int min;
    if (vec.size() <= 1)
        throw std::runtime_error("Span::shortestSpan: cannot find shortest span");
    std::sort(this->vec.begin(), this->vec.end());
    min = this->vec[1] - this->vec[0];
    for (std::vector<int>::iterator it = this->vec.begin(); it < this->vec.end() - 1; it++)
    {
        if ((*(it +1) - *it) < min)
            min = *(it +1) - *it;
    }
    return min;
};

int Span::longestSpan()
{
    if (vec.size() <= 1)
        throw std::runtime_error("Span::longestSpan: cannot find longest span");
    return *std::max_element(vec.begin(), vec.end()) - *std::min_element(vec.begin(), vec.end());
}
