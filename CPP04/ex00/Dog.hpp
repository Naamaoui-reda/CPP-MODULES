/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:56:13 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/12/20 17:56:13 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(const Dog& old_obj);
    Dog& operator=(const Dog& old_obj);
    ~Dog();
    void makeSound(void) const;
};
