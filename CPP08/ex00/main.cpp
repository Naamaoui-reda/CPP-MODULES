/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 21:58:47 by rnaamaou          #+#    #+#             */
/*   Updated: 2023/01/10 21:58:48 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include<list>
#include <array>
#include <vector>


int main()
{
    std::cout <<"list test : \n";

    std::list<int> lst;
    lst.push_back(17);
    lst.push_back(18);
    lst.push_back(7);
    if(!easyfind(lst, 7))
        return 1;
    if(easyfind(lst, 17))
        std::cout << "found\n";
    else 
        std::cout << "not found\n";
    


    std::cout << "array test : \n";

    std::array<int, 3> arr;
    arr[0] = 17;
    arr[1] = 18;
    arr[2] = 7;
    if(easyfind(arr, 7))
        std::cout << "found\n";
    else
        std::cout << "not found\n";


    std::cout << "vector test\n";

    std::vector<int> vec;
    vec.push_back(17);
    vec.push_back(18);
    vec.push_back(7);
    if(easyfind(vec, 5))
        std::cout << "found\n";
    else
        std::cout << "not found\n";

    return 0;
}