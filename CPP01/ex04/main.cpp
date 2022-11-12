/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:45:32 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/11/09 15:24:14 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "change.hpp"

void initial(std::string &infile, std::string &outfile, std::string &target ,std::string &replace, char **av)
{
    infile = av[1];
    target = av[2];
    replace = av[3];
    outfile = infile + ".replace";
}

int check_file(std::fstream &infile, std::fstream &outfile, std::string old, std::string new_f)
{
    if (!infile.is_open())
    {
        std::cout << old << "cannot open this file"<< std::endl;
        return (0);
    }
    if (!outfile.is_open())
    {
        std::cout << new_f << "cannot open this file"<< std::endl;
        return (0);
    }
    return (1);
}

int main(int ac, char **av)
{
    std::string old;
    std::string new_file;
    std::string target;
    std::string replace;
    
    if (ac != 4)
    {
        std::cout << "invalide arg"<<std::endl;
        return (1);
    }
    initial(old, new_file, target, replace, av);
    std::fstream infile(old, std::fstream::in);
    
    std::fstream outfile(new_file, std::fstream::out);
    if ( !check_file(infile, outfile, old, new_file))
        return (1);
    change_line(infile,outfile,target,replace);   
}