/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 21:50:42 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/12/29 21:50:43 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _signed(false),_gradeS(1) ,_gradeE(1)
{
}

Form::Form(std::string target, std::string name, int gradeS,int gradeE) : _target(target), _name(name), _signed(false), _gradeS(gradeS), _gradeE(gradeE)
{
}

Form::Form(const Form &old_obj) : _name(old_obj._name),  _signed(old_obj._signed),_gradeS(old_obj._gradeS), _gradeE(old_obj._gradeE)
{
    *this = old_obj;
}

Form &Form::operator=(const Form &old_obj)
{
    if (this == &old_obj)
        return (*this);
    _signed = old_obj._signed;
    return (*this);
}

Form::~Form()
{
}

std::string Form::getName() const
{
    return _name;
}

int Form::getGe() const
{
    return _gradeE;
}

int Form::getGs() const
{
    return _gradeS;
}
bool Form::getSi() const 
{
    return _signed;
}

std::string Form::getTarget() const
{
    return _target;
}

void Form::beSigned(Bureaucrat b)
{
    if (b.getGrade() > _gradeS) throw Form::GradeTooLowException();
        _signed = true;
}

std::ostream &operator<<( std ::ostream& os, const Form &old_obj)
{
    os << old_obj.getName();
    os << " , the grade required to signe it is ";
    os << old_obj.getGs();
    os << ", grade required to exucte it is ";
    os << old_obj.getGe();
    if (old_obj.getSi() == true)
        os << ", it is signed";
    else
        os << ", it is not signed";
    return os;

}