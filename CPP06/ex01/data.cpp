/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 21:38:10 by rnaamaou          #+#    #+#             */
/*   Updated: 2023/01/06 21:38:11 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

Data::Data() : _i(0)
{
}

Data::Data(unsigned int i) : _i(i)
{
}

Data &Data::operator=(const Data &old_obj)
{
    this->_i = old_obj._i;
    return *this;
}

Data::Data(const Data &old_obj) : _i(old_obj._i)
{
}

Data::~Data()
{
}

void Data::ShowTime()
{
    std::cout << "Data Value is :" << this->_i << std::endl;
}

uintptr_t serialize(Data *ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}