/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 21:38:00 by rnaamaou          #+#    #+#             */
/*   Updated: 2023/01/06 21:38:01 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int main(int argc, char **argv)
{
    Convert c;
    if (argc != 2)
    {
        std::cout << "wtf\n";
        return(1);
    }
    c.parsing(argv[1]);
    return (0);
}