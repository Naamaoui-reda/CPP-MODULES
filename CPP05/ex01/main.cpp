/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 21:50:32 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/12/29 21:50:34 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
   Form f("f",10,10);
   Bureaucrat p("p",10);
   Bureaucrat q("q",20);
std::cout << f<<std::endl;
   f.beSigned(p);
   std::cout<< f<<std::endl;
   p.signForm(f);
   std::cout<< f<<std::endl;
   try
   {
      Form fr("fr", 250, 150);
   }
   catch (Form::GradeTooHighException &e)
   {
      std::cout<<e.what()<<std::endl;
   }
   catch (Form::GradeTooLowException &e) 
   {
      std::cout<<e.what()<<std::endl;
   }
   try
   {
      Form s("s", 0, 10);
   }
    catch (Form::GradeTooHighException &e)
   {
      std::cout<<e.what()<<std::endl;
   }
   catch (Form::GradeTooLowException &e) 
   {
      std::cout<<e.what()<<std::endl;
   }
   

}