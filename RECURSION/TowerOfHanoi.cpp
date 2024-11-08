#include<iostream>
using namespace std;
void f(int n,char src,char des, char help)
{
     //best case

     // recursive case
     // 1. Ask your friend to move n-1 disks to help
     f(n-1,src,help,des);

     // 2. move largest disk to destination
     cout<<"move fromn "<<src<<"to"<<des;
     // 3. move from help to dst
     f(n-1,help,des,src);
}
int main()
{
    int n=3;
    f(n,'A','C','B');
    return 0;
}