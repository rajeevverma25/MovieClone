#include<iostream>
using namespace std;
int main()
{
    int *ptr = new int[5]{10,20,30,40,50};
    for(int i =0;i<=n;i++)
    {
        cout<<*(ptr+i)<<" "<<ptr[i];
    }
    delete [] ptr; 
    return 0;

}