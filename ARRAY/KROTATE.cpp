#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(int);
    int k=4;
     int* arr1 =new int[n];
     k = k % n;
   for (int i = 0; i < n; ++i) {
        arr1[(i + k) % n] = arr[i];
   }
    for (int i = 0; i < n; ++i) {
        arr[i] = arr1[i];
    }
    for (int i = 0; i < n; ++i) {
        cout<<arr[i]<<" ";
    }
}
