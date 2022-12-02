/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 08:08:01 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/11/26 14:17:25 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default Constructor called\n";
    value = 0;
}
Fixed::Fixed(const int parameter)
{
    std::cout << "Int Constructor called\n";
    value = parameter << bits;
}
Fixed::Fixed(const float parameter)
{
    std::cout << "Float Constructor called\n";
    value = roundf(parameter * (1 << bits));
}
Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed& old_obj)
{
    std::cout << "Copy constructor called\n";
    *this = old_obj;
}

Fixed & Fixed::operator=(const Fixed& old_obj)
{
    std::cout << "Copy assignment oprater called\n";
    this->value = old_obj.value;
    return *this;
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

int Fixed::toInt( void ) const
{
    return (value >> bits);
}

float Fixed::toFloat( void ) const
{
    return (((float)value / (1 << bits)));
}

std::ostream &operator <<(std::ostream &os, const Fixed &fixed)
{
    os << fixed.toFloat();
    return (os);
}