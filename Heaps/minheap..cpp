#include<iostream>
#include<vector>
using namespace std;
template<typename T>
class minheap{
   vector<int> v;

   void heapify(int i){
       int min_idx = i;
       int left_idx = 2*i+1;
       if(left_idx<v.size() && v[min_idx]>v[left_idx]){
           min_idx=left_idx;
       }
       if(right_idx<v.size() && v[min_idx]>v[right_idx]){
           min_idx=right_idx;
       }
 if(min_idx!=i)
 {
     swap(v[i],v[min_idx]);
     heapify(min_idx);
 }
   }
   public:
   void push(int data){
    v.push_back(data);
    int ci = v.size()-1;
    int pi = ci%2==0? ci/2 -1 : ci/2;
    while(pi>=0 && v[ci]<v[pi]){
        swap(v[ci],v[pi]);
        ci = pi;
        pi=ci%2==0? ci/2 -1: ci/2;
    }
   }
   void pop(){
     swap(v[0],v[v.size()-1]);
     v.pop_back();
     heapify(0);
   }
   int top()
   {
     return v[0];
   }
   int size(){
       return v.size();
   }
   bool empty()
   {
      return v.empty();
   }
}
int main()
{
    minheap m;
    m.push(9);
    m.push(7);
    m.push(8);
    m.push(5);
    m.push(4);
    m.push(9);
}