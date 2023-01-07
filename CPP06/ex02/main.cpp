/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 21:38:40 by rnaamaou          #+#    #+#             */
/*   Updated: 2023/01/06 21:38:41 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <exception>
#include <ctime>
#include <stdlib.h>


Base * generate(void)
{
    srand(time(NULL));
    unsigned int r = rand() % 3;
    switch (r)
    {
        case 0:
            return new A;
            break;
        case 1:
            return new B;
            break;
        case 2:
            return new C;
            break;
        default:
            return NULL;
            break;
    }
}

void identify(Base* p)
{
    if (dynamic_cast <A*>(p))
        std::cout << "Type is A\n";
    else if (dynamic_cast <B*>(p))
        std::cout << "Type is B\n";
    else if (dynamic_cast <C*>(p))
        std::cout << "Type is C\n";
    else if (dynamic_cast <Base*>(p))
        std::cout << "Type is Base\n";
}

void identify(Base& p)
{
    try
    {
        Base tmp  = dynamic_cast<A&>(p);
        std::cout << "Type is A\n";
    }
    catch (const std::exception& e)
    {
        try
        {
            Base tmp = dynamic_cast<B&>(p);
            std::cout << "Type is B\n";
        }
        catch (const std::exception& e)
        {
            try
            {
            Base tmp = dynamic_cast<C&>(p);
            std::cout << "Type is C\n";
            }catch (const std::exception& e)
            {
                try
                {
                    Base tmp = dynamic_cast<Base&>(p);
                    std::cout << "Type is Base\n"; 
                }
                catch(const std::exception& e)
                {
                    std::cout<< e.what()<< std::endl;
                }
            }
        }
    }
}

int main() {
    std::cout << "Test Generate :\n";
    Base *tmp = generate();
    identify(tmp);
    delete tmp;

    std::cout << "Test identify with new Base :\n";
    Base *tmp2 = new Base;
    identify(tmp2);
    delete tmp2;

    std::cout << "Test identify with reference :\n";
    A tmp3;
    identify(tmp3);
    B tmp4;
    identify(tmp4);
    C tmp5;
    identify(tmp5);
    Base tmp6;
    identify(tmp6);
}