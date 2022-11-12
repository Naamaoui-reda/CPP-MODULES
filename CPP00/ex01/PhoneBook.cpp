/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:06:16 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/09/17 15:06:17 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : index(0), size(0){}
void    PhoneBook::set_contact(std::string m_firstname, std::string m_lastname,
            std::string m_nickname, std::string m_phonenumber, std::string m_secret)
            {
                this->contacts[index].set_firstname(m_firstname) ;
                this->contacts[index].set_lastname(m_lastname);
                this->contacts[index].set_nickname(m_nickname);
                this->contacts[index].set_phone_number(m_phonenumber);
                this->contacts[index].set_darkest_secret(m_secret);
                index = (index + 1) % 8; 
                if(size < 8)
                    size++;
            }

const Contact *PhoneBook::get_contacts() const
{
    return (this->contacts);
}

const Contact *PhoneBook::search(int i) const
{
    if (i >= this->size || i < 0)
        return (NULL);
    else
        return(&(contacts[i]));
}

int PhoneBook::get_size() const
{
    return (this->size);
}
