#include<iostream>
#include <vector>
#include<queue>
using namespace std;
int main()
{
    vector<int> ropeLengths = {4, 3, 2, 6};
    priority_queue<int, vector<int>, greater<int> > minheap(ropeLengths.begin(),ropeLengths.end());
    int mincost = 0;
    while(minheap.size()>1)
    {
        int a = minheap.top(); minheap.pop();
        int b= minheap.top(); minheap.pop();
        mincost += (a+b);
        minheap.push(a+b);
    }
    cout<<mincost;
    return 0;
}