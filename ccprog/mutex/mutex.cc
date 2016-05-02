// std::mutex
#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void thread_proc (int n, char c) {
  mtx.lock ();
  for (int i=0; i<n; i++)
    std::cout << c;
  std::cout <<'\n';
  mtx.unlock ();
}

int main()
{
  std::thread th1 (thread_proc,50,'*');
  std::thread th2 (thread_proc,50,'s');

  th1.join ();
  th2.join ();

  return 0;
}
