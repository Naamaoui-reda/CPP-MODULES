/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 21:51:43 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/12/29 21:51:50 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("target", "RobotomyRequestForm", 72, 45)
{
};

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, "RobotomyRequestForm", 72, 45)
{
};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &old_obj) : Form(old_obj.getTarget(), old_obj.getName(),old_obj.getGs(),old_obj.getGe())
{
};

RobotomyRequestForm::~RobotomyRequestForm()
{
};

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &old_obj)
{
    if (this == &old_obj)
        return *this;
    *this = old_obj;
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const 
{
    if (this->getSi() == false) throw Form::FormNotSigned();
    if (executor.getGrade() > this->getGe()) throw Form::GradeTooLowException();

    srand(time(NULL));
    if (rand() % 2)
        std::cout << getTarget() << "has been robotomized\n";
    else 
        std::cout << getTarget() << "has not been robotomized\n";
}