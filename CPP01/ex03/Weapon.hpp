/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:18:32 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/10/18 15:18:33 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Weapon
{
    private:
        std::string type;
    public:
        const std::string &getType(void) const;
        void setType(std::string type);
        Weapon();
         Weapon(std::string name);
        ~Weapon();
};