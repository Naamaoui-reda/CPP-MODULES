/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 21:50:55 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/12/29 21:50:56 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class PresidentialPardonForm :public Form
{
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const  PresidentialPardonForm &old_obj);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &old_obj);
        ~PresidentialPardonForm();

        void execute(Bureaucrat const & executor) const;
};