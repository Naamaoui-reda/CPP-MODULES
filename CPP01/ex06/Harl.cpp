/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:45:56 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/10/19 19:45:56 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

typedef void (*Foo)();

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup"
     "burger.\nI really do!\n\n";
}
void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put"
                    "enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n";
}
void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for"
                "years whereas you started working here since last month.\n\n";
}
void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";
}

void Harl::complain(const std::string &level)
{
    Foo complaints [] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int type;
    for (type = 0; type < 4; type++)
    {
        if (levels[type] == level)
            break;
    }
    switch (type) {
    case 0:
        std::cout << "[ DEBUG ]\n";
        (*complaints[0])();
    case 1:
        std::cout << "[ INFO ]\n";
        (*complaints[1])();
    case 2:
        std::cout << "[ WARNING ]\n";
        (*complaints[2])();
    case 3:
        std::cout << "[ ERROR ]\n";
        (*complaints[3])();
        break;
    default:
        std::cout << "what are you saying?\n";
    }
}
