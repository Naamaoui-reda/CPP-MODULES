/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 21:50:30 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/12/29 21:50:31 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
    private:
        const std::string _name;
        bool _signed;
        const int _gradeS;
        const int _gradeE;
    public:
        Form();
        Form(std::string name, int gradeS, int gradeE);
        Form (const Form &old_obj);
        Form &operator= (const Form &old_obj);
        ~Form();
        std::string getName() const;
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


};
std::ostream &operator<<( std::ostream& os, const Form &old_obj);