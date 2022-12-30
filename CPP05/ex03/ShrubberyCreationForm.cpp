/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 21:51:56 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/12/29 21:51:57 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :Form("target","ShrubberyCreationForm",145,137)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form(target,"ShrubberyCreationForm",145,137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &old_obj) : Form(old_obj.getTarget(), old_obj.getName(),old_obj.getGs(),old_obj.getGe())
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &old_obj)
{
    if (this == &old_obj)
        return *this;
    *this = old_obj;
    return *this;
}

void ShrubberyCreationForm::execute( Bureaucrat const & executor) const
{
    if (this->getSi() == false) throw Form::FormNotSigned();
    if (executor.getGrade() > this->getGe()) throw Form::GradeTooLowException();

    std::string t1 = "       _-_\n";
    std::string t2 = "   /~~   ~~\\\n"; 
    std::string t3 = "/~~         ~~\\\n"; 
    std::string t4 = "{               }\n"; 
    std::string t5 = " \\  _-     -_  /\n"; 
    std::string t6 = "   ~  \\ //  ~\n"; 
    std::string t7 = "_- -   | | _- _\n"; 
    std::string t8 = "  _ -  | |   -_\n"; 
    std::string t9 = "      // \\\n"; 

    std::ofstream r(this->getTarget() + "_shrubbery");
    if (r.is_open() == false)
    {
        std::string tmp = ("Bureaucrat : " + this->getTarget() +"_shrubbery ");
        perror(tmp.c_str());
        exit (1);
    }
    r << t1 << t2 << t3 << t4 << t5 << t6 << t7 << t8 << t9;
}