/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:57:42 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/12/20 17:57:42 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    Dog *dog = new Dog();
    Dog *dog01 = new Dog(*dog);
    Cat *cat = new Cat();
    Cat *cat01 = new Cat(*cat);

    Animal *array[4] = {dog, dog01,cat, cat01};
    for (int i = 0; i < 4; i++)
        array[i]->makeSound();
    for (int i = 0; i <4; i++)
        delete array[i];
    return 0;
}
 