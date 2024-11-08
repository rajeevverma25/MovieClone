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
        r=0;
        f=0;
        arr=T[n+1];
        count=0;
        this->n=n+1;
    }
    void push(T val){
    if((r+1)%n==f)
    {
        return;
    }
        r=(r+1)%n;
        arr[r]=val;
        count++;
    }
    void pop(){
       if(f==r){
           return;
       }
       f=(f+1)%n;
    }
    T front(){
      return arr[(f+1)%n];
    }
    bool empty(){
      return f==r;
    }
    int size(){
        return count; 
}
void print()
{
    for(int i=(f+1)%n; i!=(r+1)%n ; i=(i+1)%n) // here i=i++ is not used because it is a possibility that i exceeds the length of the queue os modulus is used so that i stays within n
    {
        cout<< arr[i]<<" ";
    }
}
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
              q.print();
               return 0;              
}