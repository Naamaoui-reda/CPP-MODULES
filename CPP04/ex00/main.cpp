/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:56:16 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/12/20 17:56:16 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *zbida = new Animal();
    const Animal *zbida00 = new Dog();
    const Animal *zbida01 = new Cat();


    std::cout << zbida->get_type() << std::endl;
    std::cout << zbida00->get_type() << std::endl;
    std::cout << zbida01->get_type() << std::endl;
    zbida00->makeSound();
    zbida01->makeSound();
    zbida->makeSound();
    delete zbida;
    delete zbida00;
    delete zbida01;
    // const WrongAnimal* zbida02 = new WrongCat();
    // std::cout << zbida02->get_type() << std::endl;
    // zbida02->makeSound();
}