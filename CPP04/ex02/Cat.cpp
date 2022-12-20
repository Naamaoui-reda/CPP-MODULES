/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:57:31 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/12/20 17:57:31 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat : Default Constructor" <<std::endl;
    brain = new Brain();
}

Cat::Cat(const Cat &old_obj) : Animal(old_obj)
{
    std::cout << "Cat :Copy constructor" <<std::endl;
    *this = old_obj;
}

Cat &Cat::operator=(const Cat &old_obj)
{
    std::cout << "Cat :Copy Assignment" <<std::endl;
    if (this == &old_obj)
        return *this;
    this->set_type(old_obj.get_type());
    if (this->brain)
        delete this->brain;
    this->brain = new Brain();
    *(this->brain) = *(old_obj.brain);
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat : Destruct"<<std::endl;
    delete brain;
}

void Cat::makeSound(void) const
{
    std::cout << get_type() << ": MOEW!"<<std::endl;
}