/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 21:50:53 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/12/29 21:50:54 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form ("target", "PresidentialPardonForm", 25, 5)
{
};

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form (target, "PresidentialPardonForm", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &old_obj) : Form(old_obj.getTarget(), old_obj.getName(), old_obj.getGs(),old_obj.getGe())
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &old_obj)
{
     if (this == &old_obj)
        return *this;
    *this = old_obj;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getSi() == false) throw Form::FormNotSigned();
    if (executor.getGrade() > this->getGe()) throw Form::GradeTooLowException();
    std::cout <<getTarget() << " been pardoned by Zaphod Beeblebrox.\n";
}