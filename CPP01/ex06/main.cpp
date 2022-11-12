/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:46:01 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/10/19 19:46:02 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main(int argc, char **argv)
{
    if (argc!= 2)
    {
        std::cout << "Harl is mad\n";
        return 1;
    }
    Harl harl;
    harl.complain(argv[1]);
}