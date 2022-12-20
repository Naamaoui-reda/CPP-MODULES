/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:57:22 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/12/20 17:57:22 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout<<"Animal Default constructor"<<std::endl;
    type = "Zbida";
}
Animal::Animal(std::string type)
{
    std::cout<<"Animal Parametrized constructor"<<std::endl;
    this->type = type;
}
Animal::Animal(const Animal& old_obj)
{
    std::cout<<"Animal Copy constructor"<<std::endl;
    *this = old_obj;
}

Animal &Animal::operator=(const Animal& old_obj)
{
    std::cout<<"Animal Copy Assignment"<<std::endl;
    this->type = old_obj.type;
    return *this;
}

Animal::~Animal()
{
    std::cout<<"Animal Destruct"<<std::endl;
}

void Animal::set_type(const std::string type)
{
    this->type = type;
}

std::string Animal::get_type() const
{
    return this->type;
}
