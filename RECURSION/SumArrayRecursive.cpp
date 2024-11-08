#include<iostream>
using namespace std;
int f(int *a,int n,int i)
{
  if(i==n-1)
  {
      return n-1;
  }
  int A = f(a,n,i+1);
  return a[i]+ A;
}
int main()
{
  int a[]={10,20,30,40,50};
  int n=sizeof(a)/sizeof(int);
   cout<<f(a,n,0)<<endl;
   return 0;
}