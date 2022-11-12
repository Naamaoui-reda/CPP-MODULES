/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:17:32 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/10/18 15:17:33 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde (int N, std::string name)
{
    Zombie *newZ;
    int i = 0;
    if (N <= 0)
    {
        std::cout <<"number of zombies is wrong\n";
        exit(1);
    }
    newZ = new Zombie [N];
    if (!newZ)
    {
        std::cout << "allocation failed\n";
        exit (1);
    }
    while ( i < N)
    {
        newZ[i].setname(name);
        i++;
    }
    return (newZ);
}