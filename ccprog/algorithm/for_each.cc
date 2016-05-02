#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Sum
{
  Sum(): sum{0} { }
  void operator()(int n) { sum += n; }
  int sum;
};

int main()
{
  vector<int> nums{3, 4, 2, 8, 15, 267};

  std::cout <<"before:";
  for (auto const &n : nums)
  {
    cout <<' ' << n;
  }
  std::cout <<"\n";

  std::for_each(nums.begin(), nums.end(), [](int &n){ n++; });
  Sum s = std::for_each(nums.begin(), nums.end(), Sum());
  std::cout <<"after:";
  for (auto const &n : nums)
  {
    std::cout <<' ' << n;
  }
  std::cout <<'\n';
  std::cout <<"Sum " <<s.sum << '\n';

  return 0;
}
