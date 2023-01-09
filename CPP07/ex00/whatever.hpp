/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 19:09:52 by rnaamaou          #+#    #+#             */
/*   Updated: 2023/01/08 19:09:53 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T>
void swap(T &r, T &s)
{
    T zbida;
    zbida = r;
    r = s;
    s = zbida;
};

template<typename T>
T min(T &r, T &s)
{
    return r < s ? r : s;
}

template<typename T>
T max(T &r, T &s)
{
    return r > s ? r : s;
}
