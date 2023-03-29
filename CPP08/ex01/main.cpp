/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 21:58:56 by rnaamaou          #+#    #+#             */
/*   Updated: 2023/01/10 21:58:57 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <exception>
#include <iostream>
#include <iterator>
#include <ostream>
#include <vector>
#include <list>
int main() {
  std::cout << "1st TEST : \n";
  try{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

  }
  catch(std::exception &e)
  {
    std::cout << e.what() << std::endl;
    // std::cout << sp.vec.size() << std::endl;
  }

  std::cout << "2nd TEST : \n";
  srand(time(NULL));
  Span test5(10000);
  try{
  for (int i = 0 ; i < 10000; ++i) 
      test5.addNumber(rand());
    }catch(std::exception &e)
    {
      std::cout << e.what() << std::endl;
    }
  
  try{
    std::cout << test5.shortestSpan() << std::endl;
  }catch(std::exception &e){
      std::cout << e.what() << std::endl;
  }
  try{
    std::cout << test5.longestSpan() << std::endl;
  }catch(std::exception &e){
      std::cout << e.what() << std::endl;
  }
  return 0;
}