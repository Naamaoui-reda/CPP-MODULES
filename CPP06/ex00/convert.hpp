/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 21:37:58 by rnaamaou          #+#    #+#             */
/*   Updated: 2023/01/06 21:37:59 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <limits>
#include <cmath>
#include <iomanip>



enum flags {Impossible, Printable, NonPrintable};
enum flag_index {s_char , s_int, s_float, s_double};

class Convert
{
	private:
		char    r_char;
		int     r_int;
		float   r_float;
		double  r_double;
		int     flag[4];
	public:
		Convert();
		Convert(const Convert &);
		Convert &operator = (const Convert &);
		~Convert();
		void parsing(std::string argv);
		void _guide();
		void FromChar();
		void FromInt();
		void FromFloat();
		void FromDouble();
		void ShowTime();
};