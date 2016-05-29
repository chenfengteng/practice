/*
  check the thread's life cycle, whether it's exit when the obj_thread object be deleted.
  */

#include <iostream>
#include <pthread.h>
#include <unistd.h>

using namespace std;

  void foo(){
    cout <<"start a thread.." <<endl;
   /* while(1) {
      cout <<"coming in foo ......................" <<endl;
      sleep(3);  //wait for 1 second.
    }*/
    for (int i=0; i<10000; i++)
      for (int j=0; j<10000; j++)
        for (int w=0; w<10000; w++)
             int q = i*j*w;
    cout <<"exit thread foo" <<endl;
  }


class clsThread {
public:
  clsThread() {
    cout <<"create a obj of clsThread." <<endl;
  }
  void Init() {
    cout <<"Init of clsThread." <<endl;
    pthread_create(&tid,NULL, foo,NULL);
  }

  ~clsThread() {
    cout <<"~clsThread." <<endl;
 //   running_ = false;
//    t1.join();     // ??????
  }
 
  pthread_t tid;
//  pthread_join(tid,NULL);
};


int main() {
  clsThread *obj_thread = new clsThread();
   obj_thread->Init();
  cout <<"wait for 20 seconds ..";
  sleep(20);
//  delete obj_thread;

  cout <<"please input a number to end." <<endl;
  int n;
  cin >>n;
  return 0;
}
