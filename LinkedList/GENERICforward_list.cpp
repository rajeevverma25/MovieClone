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
class forward_list{
    node<T>* head;
    int count;
    public:
     forward_list(){
      head=NULL;
      count=0;
     }
     void push_front(T data){
     node<T>* n=new node(data);
     n->next=head;
     head=n;
     count++;
     }
     void pop_front(){
      if(!head)
      {
          return;
      }
      node<T>* temp = head;
      head= head->next;
      delete temp;
      count--;
     }
     int size(){
      return count;
     }
     bool empty(){
         return !head;
     }
     T front(){
      return head->data;
     }
     void traverse(){
       node<T>* temp= head;
       while(temp){
           cout<<temp->data<<" ";
           temp=temp->next;
       }
       cout<<endl;
     }

};
int main(){
    forward_list fw;
    fw.push_front(50);
    fw.push_front(40);
    fw.push_front(30);
    fw.push_front(20);
    fw.push_front(10);
     
    cout<<"head->data : "<< fw.front()<< endl;
    fw.traverse();
    cout<< "size : "<< fw.size()<< endl;
    fw.pop_front();
    fw.pop_front();
    cout<<"head->data : "<<fw.front()<<endl;
    fw.traverse();
    cout<<"size : "<< fw,size()<<endl;
    fw.pop_front();
    fw.pop_front();
}