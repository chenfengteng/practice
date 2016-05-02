/*
  function:
    test prctl() with std::thread method for set thread's name.
  compile :
    g++ prctl_2.cc -std=c++0x -pthread -o prctl_2
 */

#include <iostream>
#include <sys/prctl.h>
#include <thread>
#include <unistd.h>

using namespace std;

void foo()
{
  char name[32];
  // set thread's name
  prctl(PR_SET_NAME, (unsigned long)"thread_name_tst");
  prctl(PR_GET_NAME, (unsigned long)name);

  cout <<"thread : " << name <<endl;
  // do stuff..
  sleep(120);

  return ;
}

int main()
{

 std::thread first (foo);  
 first.join();
 cout <<" end ..." <<endl;
 return 0;
}
