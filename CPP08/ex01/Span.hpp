/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 21:59:06 by rnaamaou          #+#    #+#             */
/*   Updated: 2023/01/10 21:59:07 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <iterator>
#include <stdexcept>
#include <vector>
#include <iterator>
#include <algorithm>
 

 class Span
 {
    private:
        std::vector<int> vec;
        unsigned int N;
    public:
    Span();
    Span(const unsigned int n);
    Span(const Span& other);
    ~Span();
    Span& operator=(const Span& other);
    void addNumber(int x);
    int shortestSpan();
    int longestSpan();
    template <typename T>
    void addNumber(const T &begin ,const T &end)
    {
        if (begin < end)
        {
            size_t i = std::distance(begin,end);
            if (i + vec.size() > N) throw std::runtime_error("span is not big enough");
            vec.insert(vec.end(),begin,end);
        }
        else
            throw std::runtime_error("Invalid Range");
    };
 };
 