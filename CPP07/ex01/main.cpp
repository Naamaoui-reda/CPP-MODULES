/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 19:09:58 by rnaamaou          #+#    #+#             */
/*   Updated: 2023/01/08 19:09:59 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void U_case(char &c)
{
    if (c >= 'a' && c <= 'z')
        c -= 32;
}

void Pow(int &i)
{
    i = i * i;
}
int main()
{
    char s[12] = "hello world";
    iter(s,12,U_case);
    std::cout << s << std::endl;
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    iter(arr,10,Pow);
    for (int i = 0 ; i < 10 ; ++i)
        std::cout << arr[i] << std::endl;
    return 0;
}