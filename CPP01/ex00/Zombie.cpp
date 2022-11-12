/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:17:11 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/10/18 15:17:12 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
}
Zombie::~Zombie()
{
    std::cout<< this->getname()<<": Was Destroyed\n";
}

std::string Zombie::getname()
{
    return(this->name);
}

void Zombie::setname(std::string name)
{
    this->name = name;
}

void Zombie::announce (void)
{
    std::cout << this->getname() << ": BraiiiiiiinnnzzzZ...\n";
}