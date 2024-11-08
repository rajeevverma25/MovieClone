#include<iostream>
using namespace std;
template <typename T>
class stack {
    queue<T> q1;
    queue<T> q2;
    public:
    void push(T data){
        if(q1.empty() && q2.empty()){
            q1.push(data);
        } else if(q1.empty()&& !q2.empty()){
            q2.push(data);
        }else{
            q1.push(data);
        }
    }
    void pop(){
        if(q.empty() && q2.empty()){
  // stack is empty
        }else if(q1.empty() && !q2.empty()){
         while(q2.size()>1){
             q1.push(q2.front());
             q1.pop();         
             }q2.pop();
        }else{
           q2.push(q1.front());
             q2.pop();         
             }q1.pop();
        }
    }
