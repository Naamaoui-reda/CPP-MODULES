/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 21:38:15 by rnaamaou          #+#    #+#             */
/*   Updated: 2023/01/06 21:38:16 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

int main()
{
    Data t (10);
    t.ShowTime();
    std::cout << "addr :" << &t << std::endl;
    uintptr_t s = serialize(&t);
    std::cout << " addr after serialization :" << s << std::endl;
    Data *zbida = deserialize(s);
    std::cout << " value after deserialization : "; zbida->ShowTime();
}