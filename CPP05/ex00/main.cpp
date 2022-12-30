/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 21:50:14 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/12/29 21:50:15 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat zbida("hihi",10);
        std::cout << zbida << '\n';
        std::cout << "grade: "<< zbida.getGrade() <<" name: " <<zbida.getName() << '\n';
    
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cout << e.what() << '\n';
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cout << e.what() << '\n';
    }
    try
    {
        Bureaucrat zbida01("Zbida01",300);
        std::cout << zbida01<<'\n';
        std::cout << "grade: "<< zbida01.getGrade() <<" name: " <<zbida01.getName() << '\n';
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cout << e.what() << '\n';
    }
     catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cout << e.what() << '\n';
    }
    return 0;
}