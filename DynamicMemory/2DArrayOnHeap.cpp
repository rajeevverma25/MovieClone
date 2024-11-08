#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"enter the number of rows";
    cin>>m;
    int n;
    cout<<"Enter the number of columns";
    cin>>n;
    int **ptr = new int*[m];
    for(int i=0;i<m;i++)
    {
        int ptr[i]= new int[n];
    }
  // read values into 2D array 
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;i++)
        {
            cin>>ptr[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;

}