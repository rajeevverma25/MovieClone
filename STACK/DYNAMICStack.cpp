#include<iostream>
using namespace std;
template <typename T>
class stack{
    vector<T> v;
    public:
     
        void push(T data){
             v.push_back(data);
        }
        void pop(){
          if(empty())
          {
              return;
          }
          v.pop_back();
        
        T top(){
            return v.back(); 
        }
        bool empty(){
             return v.empty();
        }
        int size(){
             return v.size();
        }
};
int main()
{
    stack<int> s[5];
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