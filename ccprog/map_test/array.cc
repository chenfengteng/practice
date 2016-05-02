#include <iostream>

using namespace std;

int main()
{
    int array[10] = {0,1,2,3,4,5,6,7,8,9};
    int * arr_ptr = array;
    
    cout <<"original array values: " <<endl;
    for (int i= 0; i<10; i++)
        cout <<array[i] <<" ";

    for (int i=0; i<10; i++)
    {
        arr_ptr[i] = 0;
    }   
    
    for (int i= 0; i<10; i++)
        cout <<array[i] <<" " ;
    return 0;
}
