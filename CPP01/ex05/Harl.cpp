/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:45:43 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/10/19 19:45:44 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

typedef void (*Foo)();

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup"
     "burger. I really do!\n";
}
void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
                    "enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}
void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
                "years whereas you started working here since last month.\n";
}
void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(const std::string &level)
{
    Foo complaints [] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (*complaints[i])();
            return;
        }
    }
    std::cout << "what are you saying?\n";
}
