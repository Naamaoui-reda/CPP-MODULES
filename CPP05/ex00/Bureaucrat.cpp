/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 21:50:07 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/12/29 21:50:08 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("Zbida"),grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name)
{
    if ( grade > 150) throw Bureaucrat::GradeTooLowException();
    if ( grade < 1) throw Bureaucrat::GradeTooHighException();
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &old_obj)
{
       *this = old_obj;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &old_obj)
{
    if (this == &old_obj)
        return(*this);
    this->grade = old_obj.grade;
    return *this;
}

void Bureaucrat::incGrade()
{
    if (grade == 1) throw Bureaucrat::GradeTooHighException();
    --grade;
}

void Bureaucrat::decGrade()
{
    if (grade == 150) throw Bureaucrat::GradeTooLowException();
    ++grade;
}

std::string Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

Bureaucrat::~Bureaucrat()
{
}

std::ostream & operator<<(std::ostream &os, const Bureaucrat &old_obj)
{
    os << old_obj.getName();
    os << ", bureaucrat grade ";
    os << old_obj.getGrade();
    os <<".\n";
    return os;
}