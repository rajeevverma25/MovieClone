#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void printMinheap(priority_queue<int , vector<int>, greater<int>> minheap)
{
    while(!minheap.empty()){
        cout<<minheap.top()<<" ";
        minheap.pop();
    }
    cout<<endl;
}
int main()
{
  priority_queue<int , vector<int>, greater<int>> minheap;
  int k = 3;
  int data;
  for(int i = 0 ;i<k;i++)
  {
      cin>>data;
      minheap.push(data);
  }
  while(true){
      cin>>data;
      if(data==0){
          break;
      }
      if(data==-1)
      {
       printMinheap(minheap);   
      }else{
          if(data>minheap.top())
          {
              minheap.pop();
              minheap.push(data);
          }
      }
  }
}