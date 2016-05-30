#include <iostream>
#include <string>

int main() {
  std::string str1("aaa");
  if (str1.compare("aab") != 0)
    std::cout << str1 <<" is not aab" << '\n';
  else
    std::cout << str1 <<" is equal to aab" << '\n';
  return 0;
}
