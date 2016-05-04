#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <sstream>
using namespace std;

int main() 
{
  int n = 32767;
  std::string str = "aabc : 32767 aaa";
  cout <<str.c_str() <<endl;
 // char str[] = "abc : 32767 aaa";
  stringstream ss;
  ss << n;
  char * pch = strstr(str,"3267");
  if (pch != NULL)
    cout << pch;
  else
    cout << "it's not find";

  int w;
  cout <<"input one value to end" <<endl;
  cin >> w;

  return 0;
}
