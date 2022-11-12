/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:17:18 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/10/18 15:17:19 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int i =0, N = 6;
    Zombie* newZ;
    
    newZ = zombieHorde(N,"zbida");
    while( i < N)
    {
        newZ[i].announce();
        i++;
    }
    delete [] newZ;
    //system("leaks Zombie");
    return 0;

}