/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:55:57 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/12/20 17:55:57 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>

class Animal
{
private:
    std::string type;
public:
    Animal();
    Animal(std::string type);
    Animal(const Animal &old_obj);
    Animal &operator=(const Animal &old_obj);
    virtual ~Animal();
    void set_type(std::string type);
    std::string get_type() const;
    virtual void makeSound(void) const;
};
