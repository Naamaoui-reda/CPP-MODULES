/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:57:26 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/12/20 17:57:26 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default Constructor" <<std::endl;
    for (int i = 0; i < 100 ; i++)
        ideas[i] = "zbida idea";
}

Brain::Brain(std::string idea)
{
    std::cout << "Brain Parametrized Constructor"<<std::endl;
    for (int i = 0; i < 100 ; i++)
        ideas[i] = idea;
}

Brain::Brain(const Brain& old_obj)
{
    std::cout << "Brain Copy Constructor"<<std::endl;
    *this = old_obj;
}

Brain & Brain::operator=(const Brain& old_obj)
{
    std::cout << "Brain Copy Assignment"<<std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = old_obj.ideas[i];
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain Destruct"<<std::endl;
}