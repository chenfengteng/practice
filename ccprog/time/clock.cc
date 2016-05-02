/* clock example: frequency of primes */

/* description : 
 *   Do not use print or cout method , because the IO
 *    process time is don't be calculate.
 */
#include <stdio.h>      /* printf */
#include <time.h>       /* clock_t, clock, CLOCKS_PER_SEC */
#include <math.h>       /* sqrt */
#include <unistd.h>
#include <iostream>
using namespace std;


double frequency_of_primes (double n) {
  for (double i=0; i<n; i++) {
   int w = 0 , d = 10000;
    while(w < 50000) {
     w++;
    }
  }

  return n;
}

int main ()
{
  clock_t t;
  int f;
  t = clock();
  printf ("Calculating...\n");
  f = frequency_of_primes (100000);
  t = clock() - t;
  printf ("It took me %d clicks (%f seconds).\n",t,((double)t)/CLOCKS_PER_SEC);
  return 0;
}
