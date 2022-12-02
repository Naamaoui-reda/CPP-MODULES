/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 08:00:07 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/11/20 17:29:16 by rnaamaou         ###   ########.fr       */
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
        //op
        bool operator < (const Fixed &p) const;
        bool operator > (const Fixed &p) const;
        bool operator >= (const Fixed &p) const;
        bool operator <= (const Fixed &p) const;
        bool operator == (const Fixed &p) const;
        bool operator != (const Fixed &p) const;
        
        //ap
        Fixed operator+ (const Fixed &p);
        Fixed operator- (const Fixed &p);
        Fixed operator* (const Fixed &p);
        Fixed operator/ (const Fixed &p);
        //io
        Fixed &operator ++(void);
        Fixed operator ++(int);
        Fixed &operator --(void);
        Fixed operator --(int);
        //static
        static Fixed &min(Fixed &a, Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
    
        
};

std::ostream &operator << (std::ostream & os, const Fixed &fixed);