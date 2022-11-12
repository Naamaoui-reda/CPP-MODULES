/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:18:12 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/10/18 15:18:13 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &w)
    :_name(name), _We(w)
{

}
HumanA::~HumanA()
{
    std::cout << "HumanA :: Destructor called\n";
}

void HumanA::attack(void)
{
    std::cout <<_name << " attacks with their " << _We.getType() << std::endl;
}
