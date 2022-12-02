/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 05:33:51 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/11/17 06:12:00 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>

class Fixed
{
private:
    int value;
    const static int bits = 8;
public:
    Fixed();
    Fixed (const Fixed& old_obj);
    Fixed &operator=(const Fixed& old_obj);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
};
