/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:57:35 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/12/20 17:57:35 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("DOG")
{
    std::cout <<"Dog :Default Constructor" << std::endl;
    brain = new Brain();
}

Dog::Dog(const Dog& old_obj) : Animal(old_obj)
{
    std::cout <<"Dog :Copy constructor" << std::endl;
    *this = old_obj;
}

Dog &Dog::operator=(const Dog& old_obj)
{
    std::cout <<"Dog :Copy Assignment" << std::endl;
    if (this == &old_obj)
        return *this;
    this->set_type(old_obj.get_type());
    if (this->brain)
        delete this->brain;
    this->brain = new Brain();
    *(this->brain) = *(old_obj.brain);
    return *this;
}

Dog::~Dog()
{
    std::cout <<"Dog Destructor" << std::endl;
    delete brain;
}

void Dog::makeSound(void) const
{
    std::cout << get_type() << ":BAARK !"<< std::endl;
}