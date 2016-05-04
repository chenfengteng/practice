#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
  string tststr = " als : 32767 : sdl";
  int n = 3267;
  stringstream ss;
  ss << n;
  cout <<ss.str();
  int n_pos = tststr.find(ss.str(),0);
  if (n_pos == string::npos) //not find
  {
    cout <<"not found" <<endl;
  } else {
    cout <<"it's in position: " << n_pos <<endl;
  }

  return 0;
}
