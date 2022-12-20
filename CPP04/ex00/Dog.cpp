/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:56:11 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/12/20 17:56:11 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("DOG")
{
    std::cout <<"Dog :Default Constructor" << std::endl;
}

Dog::Dog(const Dog& old_obj) : Animal(old_obj)
{
    std::cout <<"Dog :Copy constructor" << std::endl;
    *this = old_obj;
}

Dog &Dog::operator=(const Dog& old_obj)
{
    std::cout <<"Dog :Copy Assignment" << std::endl;
    this->set_type(old_obj.get_type());
    return *this;
}

Dog::~Dog()
{
    std::cout <<"Dog Destructor" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << get_type() << ":BAARK !"<< std::endl;
}