/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 19:09:55 by rnaamaou          #+#    #+#             */
/*   Updated: 2023/01/08 19:09:56 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>

void iter(T *arr, int len, void (*func)(T const &))
{
    for (int i = 0; i < len; i++)
    {
        func(arr[i]);
    }
};

template <typename T>
void iter(T *arr, int len, void (*func)(T &))
{
    for (int i = 0; i < len; i++)
    {
        func(arr[i]);
    }
};