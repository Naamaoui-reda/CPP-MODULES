/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:57:03 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/12/20 17:57:03 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
    private:
        std::string type;
    public:
        WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &old_obj);
		WrongAnimal &operator = (const WrongAnimal &old_obj);
		~WrongAnimal();
		void set_type(const std::string type);
		std::string get_type() const;
		void makeSound(void) const;
};