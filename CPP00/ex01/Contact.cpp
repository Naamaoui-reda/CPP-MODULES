/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:05:53 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/10/06 12:01:48 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::set_firstname(std::string m_firstname)
{
	this->firstname = m_firstname;
}

void	Contact::set_lastname(std::string m_lastname)
{
	this->lastname = m_lastname;
}

void	Contact::set_nickname(std::string m_nickname)
{
	this->nickname = m_nickname;
}

void	Contact::set_phone_number(std::string m_phone_number)
{
	this->phone_number = m_phone_number;
}

void	Contact::set_darkest_secret(std::string m_darkest_secret)
{
	this->darkest_secret = m_darkest_secret;
}

std::string Contact::get_firstname()const
{
	return(this->firstname);
}

std::string Contact::get_lastname()const
{
	return(this->lastname);
}
std::string Contact::get_nickname()const
{
	return(this->nickname);
}
std::string Contact::get_phone_number()const
{
	return(this->phone_number);
}
std::string Contact::get_darkset_secret() const
{
	return(this->darkest_secret);
}
