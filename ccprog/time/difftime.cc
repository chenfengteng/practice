/* difftime example */
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
  //for test
  time_t now1;
  struct tm newyear;
  double secs;

  time (&now1);
  newyear = *localtime(&now1);

newyear.tm_hour = 0; newyear.tm_min = 0; newyear.tm_sec = 0;
  newyear.tm_mon = 0;  newyear.tm_mday = 1;

  time_t tst =   mktime(&newyear);
  cout <<"tst is " <<tst <<endl;


  time_t prev;
  time(&prev);
  for (int i=0; i<50000; i++) {
//    cout <<"i is " <<i <<endl;
  }
  
  time_t now;
  time(&now);

  cout <<"prev = " << prev <<endl;
  cout <<"now = " << now <<endl;
  double seconds = difftime(now,prev);

  cout <<" seconds lost " << seconds <<endl;
  return 0;
}
