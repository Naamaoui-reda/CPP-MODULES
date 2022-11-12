/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:26:39 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/11/09 15:23:02 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "change.hpp"

void    change_line(std::fstream &infile, std::fstream &outfile, std::string target, std::string replace)
{
    std::string line;
    std::string changed_line;
    std::size_t pos = 0;

    while (getline(infile, line))
    {
        changed_line.clear();
        while ((((pos = line.find(target)) != std::string::npos)) && target.compare(""))
        {
            changed_line.append(line.substr(0,pos));
            changed_line.append(replace);
            line = line.substr(pos + target.length());
        }
        changed_line.append(line);
        outfile << changed_line << std::endl;
    }
    infile.close();
    outfile.close();
}