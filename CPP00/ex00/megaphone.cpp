/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:51:35 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/09/17 15:17:22 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>
int main(int argc,char **argv)
{
	int i = 1;
	int j;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (argv[i])
		{
			j = 0;
			while(argv[i][j])
			{
				std::cout<< (char )toupper(argv[i][j]);
				j++;
			}
			i++;
		}
	}
	std::cout << "\n";
}
