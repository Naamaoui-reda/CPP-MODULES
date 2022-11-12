/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:18:29 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/10/18 15:18:31 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string name)
{
    this->type = name;
}

Weapon::~Weapon()
{

}
const std::string &Weapon::getType() const
{
    return(this->type);
}
void Weapon::setType(std::string type)
{
    this->type = type;
}