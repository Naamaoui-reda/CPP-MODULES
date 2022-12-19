/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 22:11:02 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/12/06 22:11:02 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>

class ClapTrap
{
private:
    std::string name;
    unsigned int _hitPoints;
    unsigned int _energy;
    unsigned int _attackPonits;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &old);
    ClapTrap &operator=(const ClapTrap &old);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

