#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v_c(10,20);

    vector<int> v_b;
    for(vector<int>::iterator it=v_c.begin();
        it != v_c.end(); it++)
    {
        v_b.push_back(*it);
    } 

    for(vector<int>::iterator it = v_c.begin(); it!=v_c.end(); it++)
    {
        cout <<*it <<" " ;
    }   
    for(vector<int>::iterator it = v_b.begin(); it!=v_b.end(); it++)
    {
        cout <<*it <<" " ;
    }
   return 0;
}
