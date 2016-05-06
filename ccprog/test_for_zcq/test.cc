//test for zcq
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
  string str_in;
  cout <<"Please input something.." <<endl;
  cin >> str_in;

  int time_in;
  cout <<" Please input the current time.." <<endl;
  cin >> time_in;

  //convert int type to string
  stringstream ss;
  ss << time_in;  

  //concat the two strings.
  string str_out = str_in + ss.str();

  //print the str_out.
  cout << str_out <<endl; 
  
  cout <<"\n Please input a number for break." <<endl;
  int n;
  cin >> n;
  return 0;
}
