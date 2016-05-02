/*
   complie command:
     gcc prctl.cc -o prctl -lpthread
   function:
     name the thread.
 */

#include<stdio.h>
#include<pthread.h>
#include <unistd.h>
#include<sys/prctl.h>
using namespace std;

void* tmain(void*arg)
{
char name[32];
prctl(PR_SET_NAME,(unsigned long)"xx");
prctl(PR_GET_NAME,(unsigned long)name);
printf("%s\n", name);
printf("wait for 120 seconds .\n");
sleep(120);
}


int main(void)
{
  pthread_t tid;
  pthread_create(&tid,NULL, tmain,NULL);
  pthread_join(tid,NULL);

  int n;
  scanf("%d",&n);
return 0;
}
