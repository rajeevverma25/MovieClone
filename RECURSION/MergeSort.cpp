#include<iostream>
using namespace std;
void merge(int *arr,int s,int m, int e)
{
    int i=s;
    int j=m+1;
    int k=s;
    int temp[100];
    while(i<=m and j<=e)
     {
         if(arr[i]<arr[j])
         {
             temp[k]=arr[i];
             k++;
             i++;
         }
         else 

         {
             temp[k]=arr[j];
             k++;
             j++;
         }
     }
      while(i<=m)
      {
      temp[k]=arr[i];
      k++;
      i++;
      }
      while(j<=e)
      {
          temp[k]=arr[j];
          k++;
          j++;
      }
    
   
}
void mergesort(int *arr, int s, int e)
{
    int m= s + (e-s)/2;

    mergesort(arr,s,m);
    mergesort(arr,m+1,e);
    merge(arr,s,m,e);
}
int main()
{
    int arr[]={10,50,30,60,90,80};
     int n= sizeof(arr)/sizeof(int);
     mergesort(arr,0,n-1);
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";

     }
     return 0;

}