/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:16:57 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/10/18 15:16:58 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* newZ;
    newZ = newZombie("zbida");
    newZ->announce();
    randomChump("zbida1");
    randomChump("zbida01");
    delete(newZ);
    return 0;

}