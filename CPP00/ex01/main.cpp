/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:06:30 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/10/17 15:54:35 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"


void    in_start()
{
    std::cout<<"The program have only few commands:\n";
    std::cout<<"ADD\n";
    std::cout<<"SEARCH\n";
    std::cout<<"EXIT\n";
    std::cout<<"Chose your command: ";
}

int choice(std::string in)
{
    if (in.compare("ADD") != 0 && in.compare("SEARCH") != 0 && in.compare("EXIT") != 0)
        return (0);
    return (1);
}

void ADD (PhoneBook &contact)
{
    std::string f_name;
    std::string l_name;
    std::string n_name;
    std::string p_num;
    std::string d_secret;

    while (f_name.empty())
    {
        std::cout <<"First name:\n";
        if(!std::getline(std::cin,f_name))
        {
            if (std::cin.eof())
                std::cout<<"EOF";
            else
                std::cout<<"failure in getting the line\n";
            exit(1);
        }
    }
    while (l_name.empty())
    {
        std::cout <<"last name:\n";
        if(!std::getline(std::cin,l_name))
        {
            if (std::cin.eof())
                std::cout<<"EOF";
            else
                std::cout<<"failure in getting the line\n";
            exit(1);
        }
    }
    while (n_name.empty())
    {
        std::cout <<"Nickname:\n";
        if(!std::getline(std::cin,n_name))
        {
            if (std::cin.eof())
                std::cout<<"EOF\n";
            else
                std::cout<<"failure in getting the line\n";
            exit(1);
        }
    }
    while (p_num.empty())
    {
        std::cout <<"Phone Number:\n";
        if(!std::getline(std::cin,p_num))
        {
            if (std::cin.eof())
                std::cout<<"EOF\n";
            else
                std::cout<<"failure in getting the line\n";
            exit(1);
        }
    }
    while (d_secret.empty())
    {
        std::cout <<"Darkest Secret:\n";
        if(!std::getline(std::cin,d_secret))
        {
            if (std::cin.eof())
                std::cout<<"EOF\n";
            else
                std::cout<<"failure in getting the line\n";
            exit(1);
        }
    }
    contact.set_contact(f_name,l_name,n_name,p_num,d_secret);
    std::cout<<"\n";
}

void    turncated(std::string &s)
{
    int i;
    if (s.length() > 10)
    {
        std::cout<<(s.substr(0,9));
        std::cout<< ".";
    }
    else
    {
        i = 1;
        std::cout << s.substr(0, s.length());
        while (s.length() + i <= 10)
        {
            std::cout << " ";
            i++;
        }
    }
}

void print(const PhoneBook &phone)
{
    int i;
    const Contact *c = phone.get_contacts();
    std::string s;

    if (phone.get_size() == 0)
        return ;
    std::cout<<"|";std::cout<<"index      ";std::cout<<"|";std::cout<<"first name";std::cout<<"|";
    std::cout<<"last name ";std::cout<<"|";std::cout<<"nickname  ";std::cout<<"|\n";
    i = 0;
    while (i < phone.get_size())
    {
        std::cout << "|";std::cout << i + 1;
        std::cout<<"          ";
        s = c[i].get_firstname();
        std::cout<< "|"; turncated(s);std::cout<<"|";
        s = c[i].get_lastname();
        turncated(s);std::cout<<"|";
        s = c[i].get_nickname();
        turncated(s);std::cout<<"|";
        i++;
        std::cout<<"\n";
    }
}

void    SEARCH(PhoneBook &phone)
{
    int index;
    std::string line;
    std::string s;
    std::stringstream ss;

    print(phone);
    std::cout << "\n";
    std::cout << "Enter thr INDEX of the contact you want\n";
    if (!std::getline(std::cin, line))
    {
        if (std::cin.eof())
            std::cout<<"EOF\n";
        else
            std::cout<<"failure in getting the line\n";
        exit(1);
    }
    if(line.length()!= 1 || !isdigit(line[0]))
    {
        std::cout<<"the index is wrong or out of range\n";
        return ;
    }
    ss << line;
    ss >> index;
    if (index < 1|| index > 8)
    {
        std::cout<<"the index is wrong or out of range\n\n";
        return ;
    }
    const Contact *c = phone.search(index - 1);
    if (!c)
        std::cout << "This contact don't exist\n";
    else
    {
       std::cout << "index         :"; std::cout << index; std::cout<< "\n";
       std::cout << "first name    :"; std::cout<<c->get_firstname(); std::cout<<"\n";
       std::cout << "last name     :"; std::cout<<c->get_lastname();std::cout<<"\n";
       std::cout << "nickname      :"; std::cout<<c->get_nickname(); std::cout<<"\n";
       std::cout << "phone number  :"; std::cout<<c->get_phone_number();std::cout<<"\n";
       std::cout << "darkest secret:"; std::cout<<c->get_darkset_secret();std::cout<<"\n";
    }
    std::cout<<"\n";
}

int main()
{
    PhoneBook phone;
    std::string in;

    std::cout<<"My Awesome PhoneBook\n";
    while (1)
    {
        in_start();
        if (!std::getline(std::cin, in))
        {
            std::cout <<"\n";
            if(std::cin.eof())
                std::cout<< "EOF\n";
            else
                std::cout<< "Failure in getting line\n";
            exit(1);
        }
        std::cout<<"\n";
        if(choice(in))
        {
            if(!in.compare("ADD"))
                ADD(phone);
            else if (!in.compare("SEARCH"))
                SEARCH(phone);
            else
                break;
            
        }
        else
            std::cout <<"WRONG COMMAND\n";
    }
    std::cout <<"EXIT\n";
    return(0);
}
