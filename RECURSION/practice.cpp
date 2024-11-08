#include<iostream>
using namespace std;
int main()
{
    int *xptr = new int;
    *xptr= 10;
    cout<<*xptr<<endl;
    delete xptr;
    xptr = new int;
    *xptr = 20;
    cout<<*xptr<<endl;
    delete xptr;
    cout<<*xptr<<endl;
    return 0;
}