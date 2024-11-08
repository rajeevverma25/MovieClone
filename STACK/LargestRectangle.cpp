#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main()
{
    int h[] = {2,1,5,6,2,3};
    int n = sizeof(h)/sizeof(int);
    vector<int> nsl;
    stack<pair<int,int> > s1;
    for(int i=0;i<n;i++)
    {
        while(!s.empty() && s.top().first >= h[i]){
            s.pop();
        }
        if(s.empty()){
            nsl.push_back(-1);
        }else{
            nsl.push_back(s.top().second);
        }
        s1.push({h[i],i});
    }
    vector<int> nsl;
    stack<pair<int,int> > s1;
    for(int i=n-1;i>=0;i--)
    {
        while(!s.empty() && s.top().first >= h[i]){
            s.pop();
        }
        if(s.empty()){
            nsl.push_back(n);
        }else{
            nsl.push_back(s.top().second);
        }
        s.push({h[i],i});
    }
    return 0;
}