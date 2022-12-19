/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 22:11:31 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/12/06 22:11:31 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout <<"Default Constructor called" << std::endl;
    this->setHitPoints(100);
    this->setEnergy(50);
    this->setAttackPoints(20);
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
    std::cout <<"ScavTrap parametrized Constructor called" << std::endl;
    this->setHitPoints(100);
    this->setEnergy(50);
    this->setAttackPoints(20);
}

ScavTrap::ScavTrap(const ScavTrap &old):ClapTrap(old)
{
    std::cout << "ScavTrap copy constructor" << std::endl;
    *this = old;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &old)
{
    std::cout << "ScavTrap copy asignment operator called" <<std::endl;
    ClapTrap::operator=(old);
    return *this;
}
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called"<<std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (getEnergy() > 0 && getHitPoints() > 0)
    {
        std::cout << "ScavTrap "<< getName() << " attacks "<< target<< " causing "<< getAttackPoints() << " damage!"<<std::endl;
        setEnergy(getEnergy() - 1);
    }
    else 
        std::cout << "ScavTrap "<< getName() << " cannot attack "<< target << "!"<<std::endl;
}

void ScavTrap::GateKeeper()
{
    std::cout << "ScavTrap "<< this->getName() << " is now in Gate Keeper mode"<<std::endl;
}