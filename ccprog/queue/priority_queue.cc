// priority_queue demo by chenteng
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

typedef struct tstStruct {
  tstStruct() { cout <<"enter struct" <<endl; };
  ~tstStruct() { cout <<"enter ~struct" <<endl; };
  int n;
  char c;
} Struct1;

class mycomparison {
  bool reverse;
public:
  mycomparison (const bool& revparam=false) { 
    reverse=revparam;
  }
  bool operator() (const Struct1& struct_1, const Struct1& struct_2) const {
    if (reverse) return (struct_1.n>struct_2.n);
    else return (struct_1.n<struct_2.n);
  }
};

int main()
{
  Struct1 struct_1;
  struct_1.n = 3;
  struct_1.c = 'a';
 
  Struct1 struct_2;
  struct_2.n = 4;
  struct_2.c = 'd';

  Struct1 struct_3;
  struct_3.n = 2;
  struct_3.c = 'c';
  
  // using mycomparision;
  typedef priority_queue<Struct1, vector<Struct1>, mycomparison > mypq_type;
  mypq_type tstqueue (mycomparison(true));
  tstqueue.push (struct_1);
  tstqueue.push (struct_2);
  tstqueue.push (struct_3);

  while (!tstqueue.empty()) {
    Struct1 struct_tmp = tstqueue.top();
    cout <<struct_tmp.n <<" " <<struct_tmp.c <<endl;
    tstqueue.pop();
  }
  return 0;
}
