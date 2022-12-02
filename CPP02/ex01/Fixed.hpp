/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 08:00:07 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/11/17 08:17:07 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int value;
        const static int bits = 8;
    public:
        Fixed();
        Fixed(const int parameter);
        Fixed(const float parameter);
        Fixed( const Fixed& old_obj);
        Fixed &operator=(const Fixed& old_obj);
        ~Fixed();
        float toFloat( void ) const;
        int toInt ( void ) const;
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

std::ostream &operator << (std::ostream & os, const Fixed &fixed);