/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 19:10:06 by rnaamaou          #+#    #+#             */
/*   Updated: 2023/01/08 19:10:07 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <stdexcept>

template <typename T>
class Array {
    private :
        T *arr;
        unsigned int r;
    public :
    Array() : arr(NULL) , r(0){};
    Array(unsigned int r) : arr(new T[r]), r(r){};
    Array(Array &src) : arr(new T[src.r]), r(src.r){
        memcpy(arr, src.arr, src.r*sizeof(T));
    };
    Array &operator=(const Array &src)
    {
        this->r = src.r;
        this->arr = new T[src.r];
        memcpy(this->arr, src.arr, src.r*sizeof(T));
        return *this;
    };
    T &getE(unsigned int index)
    {
        return arr[index];
    }
    T getE(unsigned int index) const
    {
        return arr[index];
    }
    T &operator[](unsigned int index)
    {
        if (index >= r || index < 0) throw std::out_of_range("out of range");
        return getE(index);
    }
    T &operator[](unsigned int index) const
    {
        if (index >= r || index < 0) throw std::out_of_range("out of range");
        return getE(index);
    }
    unsigned int size() const
    {
        return r;
    }
};
