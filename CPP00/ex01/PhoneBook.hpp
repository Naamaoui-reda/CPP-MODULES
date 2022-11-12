/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:06:23 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/09/17 15:06:25 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Contact.hpp"
#include <sstream>

class PhoneBook
{
    private:
        Contact contacts[8];
        int index;
        int size;
    public:
        PhoneBook();
        void    set_contact(std::string m_firtname,std::string m_lastname,
            std::string m_nickname, std::string m_phonenumber, std::string secret);
        const Contact *get_contacts() const;
        const Contact *search(int i) const;
        int get_size() const;
};
