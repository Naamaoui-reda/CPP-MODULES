/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 21:50:10 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/12/29 21:50:11 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdexcept>
#include <exception>

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &old_obj);
        Bureaucrat &operator=(const Bureaucrat &old_obj);
        ~Bureaucrat();

        std::string getName() const;
        int getGrade() const;

        void incGrade();
        void decGrade();

        class GradeTooHighException : public std::runtime_error
        {
            public:
                GradeTooHighException() : runtime_error("Grade is too high range is 1 - 150"){};
        };
        class GradeTooLowException : public std::runtime_error
        {
            public:
                GradeTooLowException() : runtime_error("Grade is too low range is 1- 150"){};
        };

};

std::ostream &operator<<(std::ostream& os, const Bureaucrat &old_obj);