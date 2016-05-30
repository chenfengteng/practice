/* assert example */
#include <stdio.h>
#include <assert.h>
#include <iostream>

void print_number(int* myInt) {
  assert (myInt!=NULL);
//  printf ("%d\n",*myInt);
}

int main() {
  int a=10;
  int * b = NULL;
  int * c = NULL;

  b=&a;

  print_number (b); 
  print_number (c);
  
  int w;
  std::cout <<"please input a number to back." << std::endl;
  std::cin >> w;
  
  return 0;
}
