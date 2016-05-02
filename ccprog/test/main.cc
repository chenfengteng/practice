#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
    int i;
    for (i=0; i<10; i++)
   {
        cout <<i ;
       fflush(stdout);
       sleep(1);
   }
    return 0;
}
