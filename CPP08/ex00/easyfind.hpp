/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 21:58:44 by rnaamaou          #+#    #+#             */
/*   Updated: 2023/01/10 21:58:45 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <iterator>

template<typename T>

bool easyfind(const T& a, int i)
{
    typename T::const_iterator it;
    it = std::find(a.begin(), a.end(),i);
    if (it != a.end())
        return true;
    return false;
}