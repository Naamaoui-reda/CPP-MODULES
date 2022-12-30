/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 21:51:20 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/12/29 21:51:21 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
    private:
        const std::string _target;
        const std::string _name;
        bool _signed;
        const int _gradeS;
        const int _gradeE;
    public:
        Form();
        Form(std::string target, std::string name, int gradeS, int gradeE);
        Form (const Form &old_obj);
        Form &operator= (const Form &old_obj);
        virtual ~Form();
        std::string getName() const;
        std::string getTarget() const;
        int getGs()const;
        int getGe()const;
        bool getSi() const;
        void beSigned(Bureaucrat b);
        class GradeTooLowException :public std::runtime_error
        {
            public:
                GradeTooLowException(): runtime_error("Grade is noy high enough"){}
        };
        class GradeTooHighException : public std::runtime_error
        {
            public:
                GradeTooHighException(): runtime_error("Grade in too high"){}
        };
        class FormNotSigned : public std::runtime_error
        {
            public:
                FormNotSigned() : runtime_error("Form is not signd"){};
        };
    virtual void execute(Bureaucrat const & executor) const = 0;

};
std::ostream &operator<<( std::ostream& os, const Form &old_obj);