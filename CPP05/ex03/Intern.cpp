/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 21:51:23 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/12/29 21:51:24 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

typedef Form *(*Makef)(std::string target);

Intern::Intern()
{
}

Intern::Intern(const Intern &old_obj)
{
    (void)old_obj;
}

Intern &Intern::operator=(const Intern &old_obj)
{
    (void)old_obj;
    return *this;
}

Intern::~Intern()
{
}

Form *makePresidentialPardon(std::string target)
{
    std::cout << "Intern creates Presidential Pardon Form\n";
    return new PresidentialPardonForm(target);
}

Form *makeShrubbery(std::string target)
{
    std::cout << "Intern creates Shrubbery Creation Form\n";
    return new ShrubberyCreationForm(target);
}

Form *makeRobot(std::string target)
{
    std::cout << "Intern creates Robot my Request Form\n";
    return new RobotomyRequestForm(target);
}

Form *Intern::makeForm(std::string name, std::string target)
{
    Makef func[3] = {
        makePresidentialPardon,
        makeShrubbery,
        makeRobot,
    };
    std::string function[3] = {
         "robotomy request",
        "presidential pardon request",
        "shrubbery creation request",
    };
    for (int i = 0; i < 3; i++)
    {
        if (name == function[i]) 
            return ((*func[i])(target));
    }
    std::cout << "what are you saying?!\n";
    return NULL;
}