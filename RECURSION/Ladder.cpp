#include<iostream>
using namespace std;
int countways(int n, int k)
{
    // Base case    
       if(n==0)
       {
           return 1;
       }
    // Recursive case
    int count=0;
    for(int j=0;j<=k;j++)
    {
        if(n-j>=0)
        {
            count +=countways(n-j,k);
        }
    }
}
int main()
{
  int n=4;
  int k=3;
  cout<<countways(n,k)<<endl;
  return 0;
}