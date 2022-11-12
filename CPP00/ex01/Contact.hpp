/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:06:01 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/10/06 12:46:37 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Contact
{
    private:
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        void	set_firstname(std::string m_firstname);
        void	set_lastname(std::string m_lastname);
        void	set_nickname(std::string m_nickname);
        void	set_phone_number(std::string m_phone_number);
        void	set_darkest_secret(std::string m_darkest_secret);
        std::string get_firstname() const;
        std::string get_lastname() const;
        std::string get_nickname() const;
        std::string get_phone_number() const;
        std::string get_darkset_secret() const;
};
