/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:57:00 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/12/20 17:57:00 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout<< "WrongAnimal Default Constructor"<<std::endl;
    type = "Zbida";
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "WrongAnimal Parametrized Constructor"<< std::endl;
    this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal& old_obj)
{
    std::cout << "WrongAnimal Copy Constructor"<<std::endl;
    *this = old_obj;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& old_obj)
{
    std::cout << "WrongAnimal Copy Assignment"<<std::endl;
    this->type = old_obj.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor"<<std::endl;
}

void WrongAnimal::set_type(const std::string type)
{
    this->type = type;
}

std::string WrongAnimal::get_type(void) const
{
    return (type);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "Waaaaaaaaa3"<<std::endl;
}