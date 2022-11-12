/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:45:59 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/10/19 19:45:59 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>



class Harl 
{
    private:
        static void debug();
        static void info();
        static void warning();
        static void error();
    public:
        static void complain(const std::string &level);
};