#include<iostream>
using namespace std;
int f(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    int A=f(n-1);
    int B=f(n-2);
    return A+B;
}
int main()
{
    int n=8 ;
    cout<<f(n)<<endl;
    return 0;

}