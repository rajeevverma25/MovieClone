#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(int);
    int t=30;
    int count = 0;
    for(int i=0;i<n-1;i++)
    {
        if(binary_search(arr+i+1,arr+n,t-arr[i]))
        {
            count ++;
        }
    }
    cout<<"count"<<"\t"<<count;
    return 0;
}
