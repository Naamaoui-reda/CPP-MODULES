/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 22:12:33 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/12/06 22:12:33 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout <<"DiamondTrap Default Constructor called" <<std::endl;
    this->name = "zbida";
    this->FragTrap::setHitPoints(100);
    this->ScavTrap::setEnergy(50);
    this->FragTrap::setAttackPoints(30);
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name +"_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
    this->name = name;
    this->FragTrap::setHitPoints(100);
    this->ScavTrap::setEnergy(50);
    this->FragTrap::setAttackPoints(30);
    std::cout <<"DiamondTrap "<< this->ScavTrap::getName()<< " called parametrized Constructor" <<std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& old): ScavTrap(old), FragTrap(old)
{
    *this = old;
    std::cout <<"DiamondTrap called copy constructor" <<std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap& old)
{
    std::cout << "DiamondTrap called copy assignment" <<std::endl;
    FragTrap::operator=(old);
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout <<"DiamondTrap destructor called" <<std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
    std::cout << "DiamondTrap ";
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name is "<< name << std::endl;
    std::cout << "ClapTrap name is "<< ScavTrap::getName() << std::endl;
}