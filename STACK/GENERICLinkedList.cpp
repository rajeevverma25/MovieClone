#include<iostream>
using namespace std;
template <typename T>
class node{
    public:
    T data;
    node<T>* next;

    node(T data)
    {
        this->data=data;
        this->next=NULL;
    }
};
template <typename T>
class stack{
    forward_list<T> fw;
    public:
     void push_front(T data){
     fw.push_front()
        }
     void pop_front(){
      if(empty())
      {
          return;
      }
      fw.pop_front();
     }
     int size(){
      return fw.size();
     }
     bool empty(){
         return fw.empty();
     }
     T front(){
      return fw.front();
     }
    
};
int main(){
    stack<int> s;

    cout<<"size : "<<s.size()<<endl;
    cout<<"isEmpty ? "<<s.empty()<<endl;
    s.push[10];
    s.push[20];
    s.push[30];
    s.push[40];
    s.push[50];
     cout<<"size : "<<s.size()<<endl;
     cout<<"top : "<<s.top()<<endl;
     cout<<"isEmpty ? "<<s.empty()<<endl;
    s.pop();
     cout<<"size : "<<s.size()<<endl;
    cout<<"top "<<s.top()<<endl;
    return 0;
}