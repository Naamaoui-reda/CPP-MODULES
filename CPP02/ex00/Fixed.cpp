/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 05:54:08 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/11/28 22:55:12 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default Constructor called\n";
    value = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed& old_obj)
{
    std::cout <<"Copy Constructor called\n";
    *this = old_obj;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    return value;
}

void Fixed::setRawBits(int const raw)
{
    value = raw;
}

Fixed & Fixed::operator = (const Fixed &old_obj)
{
    std::cout <<"Copy assignment operator called\n";
    this->value = old_obj.getRawBits();
    return(*this);
}
