#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    int A[]={5,3,2,7,8,1,4};
    int n=sizeof(A)/sizeof(int);
    vector<int> out;
    stack<int> s;
    for(int i=n-1;i>=0;i--)
    {
        while(!s.empty() && s.top()<A[i])
        {
            s.pop();
        }
        if(s.empty())
        {
            out.push_back(-1);
        }
        else {
            out.push_back(s.top());
        }
        s.push(A[i]);
    }
    reverse(out.begin(),out.end());
    for(int i=0;i<out.size();i++)
    {
        cout<<out[i]<<" ";
    }
    
    return 0;
}