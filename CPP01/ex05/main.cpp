/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:45:49 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/10/19 19:45:50 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl::complain("DEBUG");
    Harl::complain("INFO");
    Harl::complain("WARNING");
    Harl::complain("ERROR");
    Harl::complain("WHATEVER");
}