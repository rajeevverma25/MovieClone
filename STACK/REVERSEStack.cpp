#include<iostream>
#include<stack>
 using namespace std;
 void print(stack<int> s){
     while(!s.empty())
     {
         cout<<s.top()<<endl;
         s.pop();
     }
     cout<<endl;
 }
 void insertatbottom(stack<int>& s, int data)
 {
     if(s.empty())
     {
         s.push(data);
         return;
     } 
      int x= s.top();
      s.pop();
      insertatbottom(s,data);
      s.push(x); 
 }
 void reverse(stack<int>& s){
      if(s.empty()){
          return;
      }
      int x=s.top();
      s.pop();
      reverse(s);
      insertatbottom(s,x);
 }
 int main(){
     stack<int> s;
     s.push(10);
     s.push(20);
     s.push(30);
     s.push(40);
     s.push(50);
     print(s);
     reverse(s);
     print(s);
     return 0;
 }