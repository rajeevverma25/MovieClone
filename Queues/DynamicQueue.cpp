#include<iostream>
using namespace std;
template <typename T>
class queue
{
      list<T> dll;
    public:
    void push(T val){
       dll.push_back(data);
    }
    void pop(){
       if(empty()){
           return;
       }
       dll.pop_front();
    }
    T front(){
      return dll.front();
    }
    bool empty(){
      return dll.empty();
    }
    int size(){
        return dll.size(); 
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

               return 0;              
}