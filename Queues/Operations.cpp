#include<iostream>
using namespace std;
template <typename T>
class queue
{
    T* arr;
    int f;
    int r;
    int n;
    int count;
    public:
    queue(int n){
        r=-1;
        f=-1;
        arr=T[n];
        count=0;
        this->n=n;
    }
    void push(T val){
    if(r==n-1)
    {
        return;
    }
        r=r+1;
        arr[r]=val;
        count++;
    }
    void pop(){
       if(f==r){
           return;
       }
       f=f+1;
    }
    T front(){
      return arr[f+1];
    }
    bool empty(){
      return f==r;
    }
    int size(){
        return count; 
}}
int main()
{
   queue<int > q[5];
   cout<<"size : "<< q.size() << endl;
   q.empty()? cout <<"Queue is empty!"<< endl:
              cout << " Queue is not empty" << endl;
              q.push(10);
              q.push(20);
              q.push(30);
               cout<<"size : "<< q.size()<<endl;
               cout<<"front : "<<q.front()<<endl;

              q.pop();
               cout<<"size : "<< q.size()<<endl;
               cout<<"front : "<<q.front()<<endl;

               return 0;              
}