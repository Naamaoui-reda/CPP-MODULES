/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 22:12:10 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/12/06 22:12:10 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
    this->setHitPoints(100);
    this->setEnergy(100);
    this->setAttackPoints(30);
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    this->setHitPoints(100);
    this->setEnergy(100);
    this->setAttackPoints(30);
    std::cout << "FragTrap "<<this->getName()<< " called parametraized constructor " << std::endl;
}

FragTrap::FragTrap(const FragTrap &old_obj):ClapTrap(old_obj)
{
    std::cout << "FragTrap called copy constructor" << std::endl;
    *this = old_obj;
}

FragTrap &FragTrap::operator = (const FragTrap & old_obj)
{
    std::cout << "FragTrap called assignment operator" << std::endl;
    ClapTrap::operator = (old_obj);
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap called destructor" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
       if (getEnergy() > 0 && getHitPoints())
    {
        std::cout << "FragTrap "<< getName() << " attacks "<< target<< " causing "<< getAttackPoints() << " damage!"<<std::endl;
        setEnergy(getEnergy() - 1);
    }
    else 
        std::cout << "FragTrap "<< getName() << " cannot attack "<< target << "!"<<std::endl;
}

void FragTrap::highFivesHuys(void)
{
    std::cout << "FragTrap "<< this->getName() << ":high five ;)" << std::endl;
}