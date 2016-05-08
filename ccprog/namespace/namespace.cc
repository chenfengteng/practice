/* namespace.cc */
#include <iostream>
#include "namespace1.h"
#include "namespace2.h"

int main() {
  int i ; //belongs to main()
  i = 3;
  std::cout <<"i=" <<i <<std::endl;

  tstname1::i = 4;   //should be error!
  std::cout <<"tstname1::i=" <<tstname1::i <<std::endl;
  std::cout <<"i=" <<i <<std::endl;

  int a = 50;
  fun(a);
  return 0;
}
