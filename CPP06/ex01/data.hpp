/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 21:38:12 by rnaamaou          #+#    #+#             */
/*   Updated: 2023/01/06 21:38:13 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Data
{
    private :
        unsigned int _i;
        Data();
    public :
        Data(unsigned int i);
        Data(const Data& );
        Data &operator=(const Data&);
        ~Data();
        void ShowTime();
};

uintptr_t serialize(Data* ptr);
Data*  deserialize(uintptr_t raw);