/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:18:17 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/10/18 15:18:18 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon &_We;
    public:
        HumanA(std::string name,Weapon &w);
        ~HumanA();
        void attack( void );
};