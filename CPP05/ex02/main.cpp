/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 21:50:47 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/12/29 21:50:48 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>


int main() {
  std::cout << "first test : \n";
      ShrubberyCreationForm Sbform("zozo");

      Bureaucrat q("q", 120);
      q.executeForm(Sbform);

      Bureaucrat w("w", 145);

      w.signForm(Sbform);
      w.executeForm(Sbform);
      q.executeForm(Sbform);


      std::cout << "second test : \n";
      Bureaucrat zbida("zbida", 20);
      RobotomyRequestForm RBform("me");
      zbida.signForm(RBform);
      zbida.executeForm(RBform);


      std::cout << "third test : \n";
      Bureaucrat aaa("aa", 5);
      PresidentialPardonForm Pform ("ouajdi");
      aaa.signForm(Pform);
      aaa.executeForm(Pform);
}