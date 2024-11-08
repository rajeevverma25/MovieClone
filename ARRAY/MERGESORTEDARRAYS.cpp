#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
    int a[]={10,30,50,70};
    int b[]={20,40,60};
    int n=sizeof(a)/sizeof(int);
    int m=sizeof(b)/sizeof(int);
    int i=0,j=0;
    int c[20];
    int k=0;
    while(i<n and j<m)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else {
            c[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<n)
    {
        c[k]=a[i];
        i++;
        k++; 
    }
    while(j<m)
    {
        c[k]=b[j];
        k++;
        j++;
    }
    for(int l=0;l<m+n;l++)
    cout<<" "<<c[l];
    return 0;
}
