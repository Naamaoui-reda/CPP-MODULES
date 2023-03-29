/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 21:59:10 by rnaamaou          #+#    #+#             */
/*   Updated: 2023/01/10 21:59:11 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>
#include <list>
int main()
{
  std::cout << "subject test" << std::endl;
  MutantStack<int> mstack;
  mstack.push(5);
  mstack.push(17);
  std::cout << mstack.top() << std::endl;
  mstack.pop();
  std::cout << mstack.size() << std::endl;
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
//[...]
  mstack.push(0);
  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();
  ++it;
  --it;
  while (it != ite)
  {
      std::cout << *it << std::endl;
      ++it;
  }
  std::cout << "testing with list" << std::endl;
  std::list<int> tmp;
  tmp.push_back(5);
  tmp.push_back(17);
  std::cout << tmp.back() << std::endl;
  tmp.pop_back();
  std::cout << tmp.size() << std::endl;
  tmp.push_back(3);
  tmp.push_back(5);
  tmp.push_back(737);
  tmp.push_back(0);
    std::list<int>::iterator it_l = tmp.begin();
   std::list<int>::iterator ite_l = tmp.end();
    ++it_l;
    --it_l;
    while (it_l != ite_l)
    {
        std::cout << *it_l << std::endl;
        ++it_l;
    }

  std::cout << "My Tests\n";

  MutantStack<float, std::vector<float> > mstack2;
  mstack2.push(17.5f);
  mstack2.push(4.32f);
  mstack2.push(1337.45f);
  mstack2.push(0.0f);
  MutantStack<float, std::vector<float> >::iterator it2 = mstack2.begin();
  MutantStack<float, std::vector<float> >::iterator ite2 = mstack2.end();
  std::cout << "size : " << mstack2.size() << std::endl;
  while (it2 != ite2) {
    std::cout << *it2 << std::endl;
    ++it2;
  }
    return 0;
}


