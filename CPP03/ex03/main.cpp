/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 22:13:04 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/12/06 22:13:05 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	ClapTrap john("John");
	ClapTrap jim("Jim");
	ClapTrap joe("Joe");
	ScavTrap Zbida("Zbida01");
	FragTrap cina("cina");
	DiamondTrap kac("kac");
	kac.attack("lwajdi");
	Zbida.attack("joe");
	Zbida.GateKeeper();
	john.attack("Marge");
	john.attack("Bart");
	john.attack("Homer");
	john.takeDamage(5);
	jim.takeDamage(9);
	jim.takeDamage(10);
	joe.beRepaired(10);
	joe.takeDamage(19);
	cina.highFivesHuys();
	cina.takeDamage(2000000);
	cina.attack("lwajdi");
    return 0;
}
