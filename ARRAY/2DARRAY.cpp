#include<iostream>
using namespace std;
int main()
{
    int A[10][10];
    int m,n;
    cout<<"Enter the no. of rows";
    cin>>m;
    cout<<"Enter the no. of columns";
    cin>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<A[i][j];
        }
        cout<<endl;
    }
    return 0;
}