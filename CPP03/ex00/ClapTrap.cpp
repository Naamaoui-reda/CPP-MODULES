/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 22:10:52 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/12/06 22:10:52 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
    std::cout <<"Default Constructor called" << std::endl;
    name = "Zbida ";
    _energy = 10;
    _hitPoints = 10;
    _attackPonits = 0;

}
ClapTrap::ClapTrap(std::string name) : name(name)
{
    std::cout << "Parameterized Constructor called" << std::endl;
    _energy = 10;
    _hitPoints = 10;
    _attackPonits = 0;
}


ClapTrap::ClapTrap(const ClapTrap& old)
{
    *this = old;
    std::cout << "Copy Constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &old)
{
    std::cout << "Copy assignment operator" << std::endl;
    name = old.name;
    _energy = old._energy;
    _hitPoints = old._hitPoints;
    _attackPonits = old._attackPonits;
    return *this;
}
ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (_energy > 0 && _hitPoints > 0)
    {
        std::cout << "ClapTrap "<< name << " attacks " << target << " causing " << _attackPonits << " points of damge!" << std::endl;
        _energy--;
    }
    else
        std::cout << "ClapTrap "<< name << " can't attack no energy or health" << std::endl;
    
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (!_hitPoints)
    {
        std::cout << "NO HEALTH POINTS" << std::endl;
        return;
    }
    else if (amount >= _hitPoints)
        _hitPoints = 0;
    else
        _hitPoints -= amount;
    std::cout << "ClapTrap "<< name << " takes " << amount << " damge" <<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energy > 0 && _hitPoints > 0)
    {
        std::cout << "ClapTrap "<< name << " repaired " << amount << " health points" << std::endl;
        _hitPoints += amount;
        _energy--;
    }
    else
        std::cout << "ClapTrap "<< name << " can't beRepaired" << std::endl;
}