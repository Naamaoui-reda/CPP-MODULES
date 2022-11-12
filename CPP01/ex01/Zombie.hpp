/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:17:29 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/10/18 15:17:30 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(void);
        ~Zombie();
        void setname(std::string name);
        std::string getname(void);
        void announce(void);
};
Zombie* zombieHorde (int N, std::string name);