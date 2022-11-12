/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:18:20 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/10/18 15:18:21 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    _We = NULL;
}
HumanB::~HumanB()
{
    std::cout << "HumanB:: Destructor\n"; 
}

void HumanB::setWeapon(Weapon &we)
{
    _We = &we;
}

void HumanB::attack()
{
    if (_We != NULL)
        std::cout << _name << " attacks with their "<< _We->getType() << "\n";
    else
        std::cout << _name << " attacks with their hands\n";
}