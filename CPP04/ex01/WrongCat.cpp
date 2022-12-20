/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:57:06 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/12/20 17:57:06 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongAnimal")
{
    std::cout << "WrongCat Default Constructor" <<std::endl;
}

WrongCat::WrongCat(const WrongCat &old_obj) : WrongAnimal(old_obj)
{
    std::cout << "WrongCat Copy Constructor" <<std::endl;
    *this = old_obj;
}

WrongCat& WrongCat::operator=(const WrongCat &old_obj)
{
    std::cout << "WrongCat Copy Assignment" <<std::endl;
    this->set_type(old_obj.get_type());
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destruct" <<std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << get_type() <<": MOEWMOEW" << std::endl;
}