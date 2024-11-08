#include<iostream>
using namespace std;
int f(int n)
{
    int A;
    if(n==0)
    {
        return 1;
    }
    else 
     A=f(n-1);
return n*A ; 

}
int main()
{
int n=5;
cout<<f(n)<<endl;
return 0;
}