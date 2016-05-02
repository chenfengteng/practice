#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vtrInt;
    int  neg_count = 0;
    for (int i=0; i<10; i++)
    {
        int num = 0;
        cin >>num;
        if (num < 0)
          neg_count++;
        vtrInt.push_back(num);
    }
    
    for(vector<int>::iterator it = vtrInt.begin();
        it != vtrInt.end(); it++)
    {
	cout << *it <<" ";
    }
    cout <<"neg count is : " <<neg_count <<endl;
    return 0;
}
