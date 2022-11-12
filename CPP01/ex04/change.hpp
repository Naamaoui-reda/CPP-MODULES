/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:22:26 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/11/09 15:27:28 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <fstream>

void change_line(std::fstream &infile, std::fstream &outfile, std::string target, std::string replace);