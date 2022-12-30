/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 21:51:28 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/12/29 21:51:29 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"

int main() 
{
{
  Intern someRandomIntern;
  Form* rrf;
  rrf = someRandomIntern.makeForm("robotomy request", "Bender");
}
{
  Intern Zbida;
  std::string forms[4] = {
    "presidential pardon request",
    "robotomy request",
    "shrubbery creation request",
    "whatever"
    };
  Form *fo[4];
  for (int i = 0; i < 4 ; i++)
  {
    fo[i] = Zbida.makeForm(forms[i], "zbida");
  }
}
}