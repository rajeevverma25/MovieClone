#include<iostream>
using namespace std; 
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(int);
    int k = 3;
    for(int i=n ; i>=0; i--)
    {
        arr[i+k]=arr[i];
    }
    for(int i = 0;i<n;i++){
    cout<<arr[i];  
    }
  
    
}
