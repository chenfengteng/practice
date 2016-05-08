/* namespace2.h */
#pragma once
#include <iostream>

namespace testname1 {
  void fun_in_testname1(){
    std::cout <<"in namespace2.h" <<std::endl;  
  }
  int i;
}

void fun(const int &a) {
  testname1::fun_in_testname1();
  std::cout <<"input number = " <<a <<std::endl;
}
