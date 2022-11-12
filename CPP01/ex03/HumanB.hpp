/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:18:22 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/10/18 15:18:23 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon *_We;
    public:
      HumanB(std::string name);
      ~HumanB();
      void attack();
      void setWeapon(Weapon &we);
};